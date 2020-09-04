/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
int main() {
	long long int n;
	scanf("%lld", &n);
	int digit = 0;
	int sum = 0;
	repeat :
	while (n != 0) {           //n=123456      12345                                          
		printf("in loop n\n");
		sum += n % 10;    //sum = 6 +0    , 5+6   4+11  sum = 3+15  sum= 2+18  sum=21
		n /= 10;          // n = 12345     1234   123     n = 12      n=1         n=0
	}
	n = sum;
	printf("sum : %d\n", sum);
	while (sum != 0)      //sum 21
	{
		printf("in loop sum\n");
		                  // n=21
		digit++;          //digit =1 , 2
		sum /= 10;        //sum 2    , 0
	}
	printf("digit : %d", digit); // digit = 2
	if (digit > 1) {
		printf("in loop digit\n");
		sum = 0;
		digit = 0;
		goto repeat;
	}
	printf("\nanswer : %lld", n);
	return 0;
}*/