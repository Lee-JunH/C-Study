#include<stdio.h>

int main() {
	//문제 1 <N줄인 삼각형 출력>
	int n;
	printf("몇 줄이 나오는 삼각형을 만들고 싶나요?");
	scanf_s("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < 2*i-1; j++) {
			printf("*");
		}
		printf(" ");
	}
	return 0;

	//문제 2 <N줄인 삼각형 출력 reverse>
	int n;
	printf("몇 줄이 나오는 역삼각형을 만들고 싶나요?");
	scanf_s("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < 2*(n-i)+1; j++) {
			printf("*");
		}
		printf(" ");
	}
	return 0;

	//문제 3 <1000 이하의 3또는 5의 배수인 자연수의 합>
	int i;
	int sum = 0;
	for (i = 0; i <= 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;

	//문제 4 <1000000 이하의 피보나치 수열(N번째 항이 N-1번째 항과 N-2번째 항으로 표현되는 수열,1,1,2,3,5,8,...)의 짝수 항들의 합>
	int sum = 0;
	int a0 = 0, a1 = 1, a2 = 0;
	while (a2 < 1000000) {
		a2 = a0 + a1; //a2에 a1과 a0를 더한 값을 대입
		a0 = a1; //a0에는 a1, a1에는 a2를 대입하는 것을 반복
		a1 = a2;
		if (a2 % 2 == 0) {
			sum += a2;
		}
	}
	printf("sum : %d", sum);
	return 0;

	//문제 5 <사용자로부터 N값을 받고 1부터 N까지의 곱을 출력>
	int i,n;
	int mul = 1;
	printf("N  : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		mul = mul * i;
	}
	printf("1부터 %d까지의 곱 : %d", n, mul);
	return 0;

	//문제 6 <a+b+c=2000, a>b>c 인 자연수 a,b,c의 개수를 구하라>
	int a, b, c;
	int i = 0;
	for (a = 1; a <= 1998 ; a++) {
		for (b = 1; a + b <= 1999 ; b++) {
			c = 2000 - a - b;
			if (a > b) {
				if (b > c) {
					i += 1;
				} 
			}
		}
	}
	printf("a,b,c : %d개", i);
	return 0;

	//문제 7 <임의의 자연수를 입력받아 소인수 분해 한 결과를 출력하여라>
	int N;
	printf("N : ");
	scanf_s("%d", &N);
	printf("N = %d 일때 N = ", N);
	int i;
	for (i = 2; i <= N; i++) {
		if (N % i == 0) {
			printf("%d", i);
			N = N / i;
			i--;
			if (N > 1) {
				printf("*");
			}
		}
		else continue;
	}
	return 0;
}