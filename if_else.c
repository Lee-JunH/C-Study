#include <stdio.h>

int main() {
	// <if>
	int i;
	printf("�Է��ϰ� ���� ���ڸ� �Է��ϼ���! : ");
	scanf_s("%d", &i);

	if (i == 7) {
		printf("����� ����� ���� 7�� �Է��߽��ϴ�.");
	}
	return 0;
	double i, j;
	printf("������ ���� �� ������ �Է��ϼ��� : ");
	scanf_s("%lf %lf", &i, &j);

	if (j == 0) {
		printf("0���� ���� �� �����ϴ�. \n");
		return 0;
	}
	printf("%f �� %f �� ���� ����� : %f \n", i, j, i / j);

	return 0;

	// <���� ��>
	int score;
	printf("����� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("����� �հ��Դϴ�. \n");
	}
	if (score < 90) {
		printf("����� ���հ��Դϴ�. \n");
	}
	return 0;

	// <ũ�� ���ϱ�>
	int i, j;
	printf("ũ�⸦ ���� �� ���� �Է����ּ��� : ");
	scanf_s("%d %d", &i, &j);

	if (i > j) {
		printf("%d �� %d ���� Ů�ϴ� \n", i, j);
	}
	if (i < j) {
		printf("%d �� %d ���� �۽��ϴ� \n", i, j);
	}
	if (i >= j) {
		printf("%d �� %d ���� ũ�ų� �����ϴ� \n", i, j);
	}
	if (i <= j) {
		printf("%d �� %d ���� �۰ų� �����ϴ� \n", i, j);
	}
	if (i == j) {
		printf("%d �� %d ��(��) �����ϴ� \n", i, j);
	}
	if (i != j) {
		printf("%d �� %d ��(��) �ٸ��ϴ� \n", i, j);
	}

	// <if, else, else if>
	int num;
	printf("input any number : ");
	scanf_s("%d", &num);

	if (num == 7) {
		printf("lucky seven!\n");
	}
	else if (num == 4) {
			printf("it's death number 4;;;");
		}
		else if (num == 1) {
				printf("it's a first number!!");
			}
			else {
				printf("it's just number %d\n", num);
			}
	return 0;

	// <���� �� ���α׷�>
	float ave_score;
	float math, english, science, programming;
	printf("input your grade each of math, english, science, programming : ");
	scanf_s("%f %f %f %f", &math, &english, &science, &programming);

	ave_score = (math + english + science + programming) / 4;
	printf("your average score is %f! \n", ave_score);
	if (ave_score >= 90) {
		printf("you are genius~~");
	}
	else if (ave_score >= 30) {
		printf("do your best more");
	}
	else {
		printf("you failed!!!");
	}
	return 0;

}