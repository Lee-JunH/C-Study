#include<stdio.h>

int main() {
	//���� 1 <N���� �ﰢ�� ���>
	int n;
	printf("�� ���� ������ �ﰢ���� ����� �ͳ���?");
	scanf_s("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < 2*i-1; j++) {
			printf("*");
		}
		printf(" ");
	}
	return 0;

	//���� 2 <N���� �ﰢ�� ��� reverse>
	int n;
	printf("�� ���� ������ ���ﰢ���� ����� �ͳ���?");
	scanf_s("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < 2*(n-i)+1; j++) {
			printf("*");
		}
		printf(" ");
	}
	return 0;

	//���� 3 <1000 ������ 3�Ǵ� 5�� ����� �ڿ����� ��>
	int i;
	int sum = 0;
	for (i = 0; i <= 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;

	//���� 4 <1000000 ������ �Ǻ���ġ ����(N��° ���� N-1��° �װ� N-2��° ������ ǥ���Ǵ� ����,1,1,2,3,5,8,...)�� ¦�� �׵��� ��>
	int sum = 0;
	int a0 = 0, a1 = 1, a2 = 0;
	while (a2 < 1000000) {
		a2 = a0 + a1; //a2�� a1�� a0�� ���� ���� ����
		a0 = a1; //a0���� a1, a1���� a2�� �����ϴ� ���� �ݺ�
		a1 = a2;
		if (a2 % 2 == 0) {
			sum += a2;
		}
	}
	printf("sum : %d", sum);
	return 0;

	//���� 5 <����ڷκ��� N���� �ް� 1���� N������ ���� ���>
	int i,n;
	int mul = 1;
	printf("N  : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		mul = mul * i;
	}
	printf("1���� %d������ �� : %d", n, mul);
	return 0;

	//���� 6 <a+b+c=2000, a>b>c �� �ڿ��� a,b,c�� ������ ���϶�>
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
	printf("a,b,c : %d��", i);
	return 0;

	//���� 7 <������ �ڿ����� �Է¹޾� ���μ� ���� �� ����� ����Ͽ���>
	int N;
	printf("N : ");
	scanf_s("%d", &N);
	printf("N = %d �϶� N = ", N);
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