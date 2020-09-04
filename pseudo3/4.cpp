#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {
	int x,flag;
	flag = 0;
	for (int a = 2;a <= x ;a++) {
		if (x % a == 0) {
			flag = 1;
			printf("not prime number");
			break;
		}
	}
	if (flag == 0) {
		printf("prime number");
	}

	return 0;
}