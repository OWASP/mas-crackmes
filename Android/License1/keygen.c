// Product Activation 2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "base32.h"

static char codeword[] = "LOLZ!";

int main(int argc, char* argv[]) {

	unsigned char out[32];
	unsigned char out_encoded[32];
	int x;

	memset(out,0,32);
	memset(out_encoded,0,32);

	srand((unsigned)time(NULL));
	rand();

	char *p = out;

	for (int i = 0; i < 5; i++) {
		x = (char)rand() % 256;
		*(p++) = codeword[i] ^ x;
		*(p++) = x;
	}

	base32_encode(out, 10, out_encoded, 16);

	printf("%s\n", out_encoded);

	return 0;

}