#include<stdio.h>

int main() {
	//
	int a, b;
	a = 10;
	b = 3;
	printf("a + b 는 : %d \n", a + b);
	printf("a - b 는 : %d \n", a - b);
	printf("a * b 는 : %d \n", a * b);
	printf("a / b 는 : %d \n", a / b);
	printf("a %% b 는 : %d \n", a % b);// %하나는 %d와 혼동 가능하기 때문에 %%사용
	
	int c;
	double d;
	c = 10;
	d = 3;
	printf("c/d는 : %f \n", c / d); //int와 double 연산은 산술변환으로 double이 출력
	printf("d/c는 : %f \n", d / c);

	int e = 3;
	e = e + 3;
	printf("e의 값은 : %d \n", e);

	//
	int a = 1, b = 1, c = 1, d = 1;
	a = a + 1;
	b += 1;
	++c;
	d++;
	printf("a는 : %d \n", a);
	printf("b는 : %d \n", b);
	printf("c는 : %d \n", c);
	printf("d는 : %d \n", d);

	//
	int a = 1;
	printf("++a : %d \n", ++a);
	//
	a = 1;
	printf("a++ : %d \n", a++); //출력된 후 +1
	printf("a : %d \n", a);
	//
	int a = 0xAF;//1010 1111
	int b = 0xB5;//1011 0101
	printf("%x \n", a & b);//10100101
	printf("%x \n", a | b);//10111111
	printf("%x \n", a ^ b);//00011010
	printf("%x \n", ~a);//01010000 -> int의 32비트에서 나머지 0이 모두 1이 되어 ffffff로 출력
	printf("%x \n", a << 2);// 00101011 1100
	printf("%x \n", b >> 3);//00010110 (101)

	return 0;
}
