#include<stdio.h>

int main() {
	//int a, b;
	//a = 10;
	//b = 3;
	//printf("a + b �� : %d \n", a + b);
	//printf("a - b �� : %d \n", a - b);
	//printf("a * b �� : %d \n", a * b);
	//printf("a / b �� : %d \n", a / b);
	//printf("a %% b �� : %d \n", a % b);// %�ϳ��� %d�� ȥ�� �����ϱ� ������ %%���

	//int c;
	//double d;
	//c = 10;
	//d = 3;
	//printf("c/d�� : %f \n", c / d); //int�� double ������ �����ȯ���� double�� ���
	//printf("d/c�� : %f \n", d / c);

	//int e = 3;
	//e = e + 3;
	//printf("e�� ���� : %d \n", e);

	//int a = 1, b = 1, c = 1, d = 1;
	//a = a + 1;
	//b += 1;
	//++c;
	//d++;
	//printf("a�� : %d \n", a);
	//printf("b�� : %d \n", b);
	//printf("c�� : %d \n", c);
	//printf("d�� : %d \n", d);

	//int a = 1;
	//printf("++a : %d \n", ++a);

	//a = 1;
	//printf("a++ : %d \n", a++); //��µ� �� +1
	//printf("a : %d \n", a);

	int a = 0xAF;//1010 1111
	int b = 0xB5;//1011 0101
	printf("%x \n", a & b);//10100101
	printf("%x \n", a | b);//10111111
	printf("%x \n", a ^ b);//00011010
	printf("%x \n", ~a);//01010000 -> int�� 32��Ʈ���� ������ 0�� ��� 1�� �Ǿ� ffffff�� ���
	printf("%x \n", a << 2);// 00101011 1100
	printf("%x \n", b >> 3);//00010110 (101)

	return 0;
}