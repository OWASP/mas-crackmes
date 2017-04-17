// The serial validation of love!
//
// A valid serial looks like this:
// 
// Y7NO-ND3D-NXRT-6UJX-7FTA-NYUI-F74D-6IYL
//
// Without separators, this translates to:
//
// [base32(double x) X 13][random X 3] [base32(double y) X 13][random X 3]
//
// A valid serial must fulfill:
//
// pow(2,x) + (y - pow(2,cbrt(pow(2,x)))) = 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "base32.h"

char hint[] = 
" OOO     OOO\n"
"O**** OO****O\n"
" O****OO***O\n"
"  O*******O\n"
"   O*****O\n"
"    O***O\n"
"     O*O\n"
"      O\n";

void decode_serial(unsigned char *in, unsigned char *x_encoded, unsigned char *y_encoded) {
	unsigned char *p1 = in;
	unsigned char *p2 = x_encoded;

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			*(p2++) = *(p1++);
		}
		p1++;
	}

	*(p2++) = *(p1++);

	// Padding

	p1 += 4;

	for (int i = 0; i < 3; i++) {
		*(p2++) = '=';
	}

	*p2 = '\0';
	p2 = y_encoded;

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			*(p2++) = *(p1++);
		}
		p1++;
	}

	*(p2++) = *(p1++);

	// Padding

	for (int i = 0; i < 3; i++) {
		*(p2++) = '=';
	}

	*p2 = '\0';
}

void usage() {
		printf("Usage: ./validate <serial>\n\nHint:\n\n%s\n", hint);
		exit(0);
}

void incorrect() {
		printf("Incorrect serial.\n");
		exit(0);
}

int main(int argc, char* argv[]) {

	unsigned char serial[64];
	unsigned char x_encoded[32];
	unsigned char y_encoded[32];
	memset(serial,0,64);
	int outlen;

	union {
		double d;
		unsigned char bytes[sizeof(double)];
	} x;

	union {
		double d;
		unsigned char bytes[sizeof(double)];
	} y;

	double a,b;

	if (argc != 2) {
		usage();
	}

	if (strlen(argv[1]) != 39) {
		printf("Incorrect serial.\n");
		exit(0);
	}

	decode_serial(argv[1], x_encoded, y_encoded);

	printf("X: %s\n, Y: %s\n,", x_encoded, y_encoded);

	bool ok = base32_decode(x_encoded, 16, x.bytes, &outlen);

	if (!ok || outlen != sizeof(double)) {
		incorrect();
	}

	ok = base32_decode(y_encoded, 16, y.bytes, &outlen);

	if (!ok || outlen != sizeof(double)) {
		incorrect();
	}

	a = y.d - cbrt(x.d * x.d);
	b = x.d * x.d + a * a;

	printf("X: %f\n, Y: %f\n, Result: %f\n", x.d, y.d, b);

	if (y.d < -1 || y.d > 1.7 || x.d < -1 || x.d > 1) {
		incorrect();
	}

	if (abs((1 - b) < 0.00001)) {
		printf("Product activiaton passed. Congratulations!\n");
	} else {
		printf("Incorrect serial.\n");
	}

	return 0;

}