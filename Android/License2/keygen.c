// Product Activation


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "base32.h"


char base32chars[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','2','3','4','5','6','7'};

void write_serial(unsigned char *out, unsigned char *x_encoded, unsigned char *y_encoded) {
	unsigned char *p1 = out;
	unsigned char *p2 = x_encoded;
	int r;

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			*(p1++) = *(p2++);
		}
		*p1 = '-';
		p1++;
	}

	*(p1++) = *(p2++);

	// Random padding

	for (int i = 0; i < 3; i++) {
		r = rand() % 32;
		*(p1++) = base32chars[r];
	}

	*p1 = '-';
	p1++;

	p2 = y_encoded;

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 4; i++) {
			*(p1++) = *(p2++);
		}
		*p1 = '-';
		p1++;
	}

	*(p1++) = *(p2++);

	// Random padding

	for (int i = 0; i < 3; i++) {
		r = rand() % 32;
		*(p1++) = base32chars[r];
	}

	*p1 = '\0';

}

int main(int argc, char* argv[]) {

	unsigned char serial[64];
	unsigned char x_encoded[32];
	unsigned char y_encoded[32];
	memset(serial,0,64);
	memset(x_encoded,0,32);
	memset(y_encoded,0,32);

	srand((unsigned)time(NULL));
	rand();

	union {
		double d;
		unsigned char bytes[sizeof(double)];
	} x;

	union {
		double d;
		unsigned char bytes[sizeof(double)];
	} y;

	double a,b;

	x.d = ((double)rand()/(double)RAND_MAX);
	y.d = sqrt(1 - (x.d * x.d)) + cbrt(x.d * x.d);

	base32_encode(x.bytes, 8, x_encoded, 32);
	base32_encode(y.bytes, 8, y_encoded, 32);

	write_serial(serial, x_encoded, y_encoded);

	printf("%s\n", serial);

	return 0;

}