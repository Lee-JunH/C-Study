#include <stdio.h>

int main() {
	//�µ� ȯ�� ���α׷�
	double celsius;

	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷��Դϴ�. \n");
	printf("���� �µ��� �Է��� �ּ��� : ");
	scanf_s("%lf", &celsius); //�Է� �Լ� scanf
	
	printf("���� %f ���� ȭ���� %f �� �Դϴ�. \n", celsius, 9 * celsius / 5 + 32);

	return 0;

	//���� �Է� �ޱ�

	char ch;//����
	short sh;//����
	int i;
	long lo;
	float fl;//�Ǽ�
	double du;

	printf("char �� ���� �Է� :	");
	scanf_s("%c", &ch);

	printf("short �� ���� �Է� : ");
	scanf_s("%hd", &sh);
	printf("int �� ���� �Է� : ");
	scanf_s("%d", &i);
	printf("long �� ���� �Է� : ");
	scanf_s("%ld", &lo);

	printf("float �� ���� �Է� : ");
	scanf_s("%f", &fl);
	printf("double �� ���� �Է� : ");
	scanf_s("%lf", &du);

	printf("char : %c, short : %d, int : %d", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
	return 0;


	//����) ��(�ð�) ȯ�� ���α׷�

	int sec;
	int min;
	int hour;
	

	printf("�ð��� �Է��ϼ��� : ");
	scanf_s("%d", &hour);
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &min);
	printf("�ʸ� �Է��ϼ��� : ");
	scanf_s("%d", &sec);
	
	printf("�Է��Ͻ� �ð� %d�� %d�� %d�� �� %d �� �Դϴ�.", hour, min, sec, (hour * 3600) + (min * 60) + sec);
	return 0;
}