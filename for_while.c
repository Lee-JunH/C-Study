#include <stdio.h>

int main() {
	// <for��(�ʱ��;���ǽ�;������)>
	int i;
	for (i = 0; i < 20; i++) {
		printf("number : %d \n", i);
	}
	return 0;

	// <for�� ��>
	int i, sum = 0;
	for (i = 0; i < 20; ++i) {
		sum = sum + i;
	}
	printf("sum of 1 to 19 : %d", sum);
	return 0;

	// <for ���� ���>
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

	// <break��>
	int usranswer;

	printf("guess the number! : \n");
	for (;;) {  //�׻� ���̵Ǵ� �ݺ���
		scanf_s("%d", &usranswer);
		if (usranswer == 3) {
			printf("you correct!\n");
			break;//�ݺ��� Ż��
		}
		else {
			printf("you wrong..\n");
		}
	}

	return 0;

	// <continue��>
	int i;
	for (i = 0; i < 100; i++) {
		if (i % 5 == 0)continue; //�ݺ����� ���Ǻη� ����
		printf("%d ", i);
	}
	return 0;

	// <������ ����>
	int i, j;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d X %d = %d \n", i, j, i * j);
		}
	}
	return 0;

	// <while ��> ���ǽ��� �´��� Ȯ��
	int i = 1, sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("sum of 1 to 100 is %d \n", sum);
	return 0;

	//<do-while��> do ������ ���ǽĿ� ������� ���� ����
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i < 1);
	printf("sum : %d\n", sum);
	printf("i : %d\n", i);
	return 0;
}