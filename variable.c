#include<stdio.h>

int main() {
	int a;
	a = 127;
	printf("a�� ���� %d ������ %o �Դϴ�. \n", 8, a);// %o : 8������ ���
	printf("a�� ���� %d ������ %d �Դϴ�. \n", 10, a);
	printf("a�� ���� %d ������ %x �Դϴ�. \n", 16, a);// %x : 16������ ���

	float b = 3.141592f; // f�� �ٿ� float������ �˸�(double�� �ν��� �� �ֱ� ����)
	double c = 3.141592;
	printf("b�� ���� : %f \n", b);// %f : �Ǽ������� ���
	printf("c�� ���� : %f \n", c);

	printf("%f \n", 1);
	printf("%f \n", 1.0);

	int d = 123;
	printf("b : %.2f \n", b);// %.2f : �Ҽ��� �ι�°�ڸ����� ���
	printf("d : %5d \n", d);// %5d : ������ �ڸ��� 5ĭ
	printf("c : %6.3f \n", c);// �� �ΰ��� ��

	return 0;
}