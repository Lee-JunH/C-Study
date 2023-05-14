#include <stdio.h>

int main() {
	// <for문(초기식;조건식;증감식)>
	int i;
	for (i = 0; i < 20; i++) {
		printf("number : %d \n", i);
	}
	return 0;

	// <for문 합>
	int i, sum = 0;
	for (i = 0; i < 20; ++i) {
		sum = sum + i;
	}
	printf("sum of 1 to 19 : %d", sum);
	return 0;

	// <for 과목 평균>
	int i;
	int subject, score;
	double sum_score = 0;

	printf("how many subject scores will be entered?");
	scanf_s("%d", &subject);

	printf("\n input each subject scores \n");
	for (i = 1; i <= subject; i++) {
		printf("subject %d : ", i);
		scanf_s("%d", &score);
		sum_score = sum_score + score;
	}
	printf("average of all subject is : %.2f \n", sum_score / subject);
	return 0;

	// <break문>
	int usranswer;

	printf("guess the number! : \n");
	for (;;) {  //항상 참이되는 반복문
		scanf_s("%d", &usranswer);
		if (usranswer == 3) {
			printf("you correct!\n");
			break;//반복문 탈출
		}
		else {
			printf("you wrong..\n");
		}
	}

	return 0;

	// <continue문>
	int i;
	for (i = 0; i < 100; i++) {
		if (i % 5 == 0)continue; //반복문의 조건부로 점프
		printf("%d ", i);
	}
	return 0;

	// <구구단 실행>
	int i, j;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d X %d = %d \n", i, j, i * j);
		}
	}
	return 0;

	// <while 문> 조건식이 맞는지 확인
	int i = 1, sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("sum of 1 to 100 is %d \n", sum);
	return 0;

	//<do-while문> do 구문을 조건식에 상관없이 먼저 실행
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i < 1);
	printf("sum : %d\n", sum);
	printf("i : %d\n", i);
	return 0;
}