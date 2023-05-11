#include <stdio.h>

int main() {
	// <if>
	int i;
	printf("입력하고 싶은 숫자를 입력하세요! : ");
	scanf_s("%d", &i);

	if (i == 7) {
		printf("당신은 행운의 숫자 7을 입력했습니다.");
	}
	return 0;
	double i, j;
	printf("나누고 싶은 두 정수를 입력하세요 : ");
	scanf_s("%lf %lf", &i, &j);

	if (j == 0) {
		printf("0으로 나눌 수 없습니다. \n");
		return 0;
	}
	printf("%f 를 %f 로 나눈 결과는 : %f \n", i, j, i / j);

	return 0;

	// <점수 평가>
	int score;
	printf("당신의 수학 점수를 입력하세요 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("당신은 합격입니다. \n");
	}
	if (score < 90) {
		printf("당신은 불합격입니다. \n");
	}
	return 0;

	// <크기 비교하기>
	int i, j;
	printf("크기를 비교할 두 수를 입력해주세요 : ");
	scanf_s("%d %d", &i, &j);

	if (i > j) {
		printf("%d 는 %d 보다 큽니다 \n", i, j);
	}
	if (i < j) {
		printf("%d 는 %d 보다 작습니다 \n", i, j);
	}
	if (i >= j) {
		printf("%d 는 %d 보다 크거나 같습니다 \n", i, j);
	}
	if (i <= j) {
		printf("%d 는 %d 보다 작거나 같습니다 \n", i, j);
	}
	if (i == j) {
		printf("%d 는 %d 와(과) 같습니다 \n", i, j);
	}
	if (i != j) {
		printf("%d 는 %d 와(과) 다릅니다 \n", i, j);
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

	// <점수 평가 프로그램>
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