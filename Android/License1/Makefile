ARCH=arm
NDK=/Users/berndt/Tools/android-ndk-r10e/
SYSROOT=/Users/berndt/Tools/android-ndk-r10e/platforms/android-21/arch-arm/
CC=${NDK}/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-gcc-4.8 --sysroot=${SYSROOT}
CFLAGS=-s -fPIE -std=c99 -lm
LDFLAGS = -fPIE -pie

all: keygen validate

keygen:
	$(CC) $(CFLAGS) -o keygen base32.c keygen.c $(LDFLAGS)

validate:
	$(CC) $(CFLAGS) -o validate base32.c validate.c $(LDFLAGS)

clean:
	rm keygen validate
