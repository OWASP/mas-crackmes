#ifndef PBKDF2_H
#define PBKDF2_H
#include "mbedtls/pkcs5.h"
#include "mbedtls/sha256.h"

__attribute__((always_inline))
static inline int pbkdf2(const char* password, int passlen, const unsigned char* salt, int saltlen, int iter, int outlen, unsigned char *out){
    int ret = -1;
    const mbedtls_md_info_t *md_info;
    mbedtls_md_context_t md_ctx;

    do {
        mbedtls_md_init(&md_ctx);
        md_info = mbedtls_md_info_from_type(MBEDTLS_MD_SHA256);

        if ((ret = mbedtls_md_setup(&md_ctx, md_info, 1)) != 0)
            break;

        if ((ret = mbedtls_pkcs5_pbkdf2_hmac(&md_ctx, password, passlen, salt, saltlen,
                                             iter, outlen, out)) != 0) {
            break;
        }
    } while (0);

    return ret;

}

#endif //PBKDF2_H