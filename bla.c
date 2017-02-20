#include<stdio.h>


int featureX(void) {
	printf("this is feature X");
}

int blabla(void) {
	int x = 3;

	x = x * 5;
	return x;
}

int featureY(void) {
	printf("this is feature Y");
}

int testf3(int asdf) {
	return asdf*4;
}

int main(int argc, char** argv) {
	printf("hello world");
	printf("some master branch change");
	printf("blablabla");
	return 0;
}
