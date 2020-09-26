// Serial Validation 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base32.h"

void usage() {
		printf("Usage: ./validate <serial>\n");
		exit(0);
}

void incorrect() {
		printf("Incorrect serial (wrong format).\n");
		exit(0);
}


char get_char_L() {
	return 59 ^ 119;
}

char get_char_O() {
	return 17 ^ 94;
}

char get_char_Z() {
	return 59 ^ 97;
}

char get_char_excl() {
	return 113 ^ 80;
}


void check_license(char *decoded) {

	char codeword[6];
	char *p = decoded;

	for (int i = 0; i < 5; i++) {
		codeword[i] = *p ^ *(p+ 1);
		p += 2;
	}

	if (codeword[0] == get_char_L() && codeword[1] == get_char_O() && codeword[2] == get_char_L() && codeword[3] == get_char_Z() && codeword[4] == get_char_excl()) {   
		printf("Product activation passed. Congratulations!\n");
	} else {
		printf("Incorrect serial.\n");
	}
}


int main(int argc, char* argv[]) {

	char decoded[16];
	int outlen;

	if (argc != 2) {
		usage();
	}

	if (strlen(argv[1]) != 16) {
		incorrect();
	}

	printf("Entering base32_decode\n");

	base32_decode(argv[1], 16, decoded, &outlen);

	printf("Outlen = %d\n", outlen);

	printf("Entering check_license\n");

	check_license(decoded);

	return 0;

}