# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.
set(CMAKE_VERBOSE_MAKEFILE ON)

#if(CMAKE_SYSTEM_NAME STREQUAL Linux)
#    set(OLLVM_PATH ${CMAKE_HOME_DIRECTORY}/../../../../../ollvm-tll/build/bin_Linux)
#else(CMAKE_SYSTEM_NAME STREQUAL Darwin)
#    set(OLLVM_PATH ${CMAKE_HOME_DIRECTORY}/../../../../../ollvm-tll/build/bin_Darwin)
#endif()

if (UNIX AND NOT APPLE)
    set(OLLVM_PATH ${CMAKE_HOME_DIRECTORY}/../../../../../ollvm-tll/build/bin_Linux)
else()
    set(OLLVM_PATH ${CMAKE_HOME_DIRECTORY}/../../../../../ollvm-tll/build/bin_Darwin)
endif (UNIX AND NOT APPLE)

set(OLLVM_C_COMPILER ${OLLVM_PATH}/clang)
set(OLLVM_CXX_COMPILER ${OLLVM_PATH}/clang++)

set(OLLVM_C_FLAGS "-mllvm -bcf -mllvm -fla -mllvm -sub -mllvm -sobf")

set(MARKER_PATH ${CMAKE_HOME_DIRECTORY}/marker)
set(MBEDTLS_PATH ${CMAKE_HOME_DIRECTORY}/mbedtls)
set(GO_PATH ${CMAKE_HOME_DIRECTORY}/../../../../injecthash)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OLLVM_C_FLAGS} -isystem /usr/lib/llvm-6.0/lib/clang/6.0.0/include")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OLLVM_C_FLAGS}")
set(CMAKE_C_COMPILER ${OLLVM_C_COMPILER})
set(CMAKE_CXX_COMPILER ${OLLVM_CXX_COMPILER})

#Set flags to detect arm32 bit or arm64 bit for switching between elf structures
if(${ANDROID_ABI} STREQUAL "armeabi-v7a" OR ${ANDROID_ABI} STREQUAL "x86")
    add_definitions("-D_32_BIT")
elseif(${ANDROID_ABI} STREQUAL "arm64-v8a" OR ${ANDROID_ABI} STREQUAL "x86_64")
    add_definitions("-D_64_BIT")
endif()

if(${CMAKE_BUILD_TYPE} STREQUAL "Debug" OR ${CMAKE_BUILD_TYPE} STREQUAL "debug" )
    add_definitions("-DDEBUG_ENABLED")
        set(BUILD_TYPE "debug")
else()
    if (UNIX AND NOT APPLE)
        set(BUILD_TYPE "release")
    else()
        set(BUILD_TYPE "Release")
    endif()
endif()

SET(CMAKE_C_VISIBILITY_PRESET hidden)

file(GLOB_RECURSE MBEDTLS_SRC ${MBEDTLS_PATH}/library/*.c)


add_library( # Sets the name of the library.
        native-lib

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        native-lib.c
        ${MBEDTLS_SRC}
        whitebox/aes.c)

target_include_directories(native-lib PRIVATE arch/${ANDROID_ABI} ${MBEDTLS_PATH}/include )


# Links the target library to the log library
# included in the NDK.
if(${BUILD_TYPE} STREQUAL "debug")
    find_library( # Sets the name of the path variable.
            log-lib

            # Specifies the name of the NDK library that
            # you want CMake to locate.
            log)

    target_link_libraries( # Specifies the target library.
        native-lib
        ${log-lib})
endif()

add_custom_command( TARGET native-lib
        POST_BUILD
        COMMAND "${ANDROID_TOOLCHAIN_PREFIX}strip" -R .comment -R .strtab -R .symtab -g -S -d --strip-unneeded ${CMAKE_HOME_DIRECTORY}/../../../build/intermediates/cmake/${BUILD_TYPE}/obj/${ANDROID_ABI}/libnative-lib.so
        COMMENT "Stripped native library"
        )
