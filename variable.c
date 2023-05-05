#include<stdio.h>

int main() {
	int a;
	a = 127;
	printf("a의 값은 %d 진수로 %o 입니다. \n", 8, a);// %o : 8진수로 출력
	printf("a의 값은 %d 진수로 %d 입니다. \n", 10, a);
	printf("a의 값은 %d 진수로 %x 입니다. \n", 16, a);// %x : 16진수로 출력

	float b = 3.141592f; // f를 붙여 float형임을 알림(double로 인식할 수 있기 때문)
	double c = 3.141592;
	printf("b의 값은 : %f \n", b);// %f : 실수형변수 출력
	printf("c의 값은 : %f \n", c);

	printf("%f \n", 1);
	printf("%f \n", 1.0);

	int d = 123;
	printf("b : %.2f \n", b);// %.2f : 소수점 두번째자리까지 출력
	printf("d : %5d \n", d);// %5d : 숫자의 자리수 5칸
	printf("c : %6.3f \n", c);// 위 두가지 합

	return 0;
}