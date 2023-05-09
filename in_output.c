#include <stdio.h>

int main() {
	//온도 환산 프로그램
	double celsius;

	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램입니다. \n");
	printf("섭씨 온도를 입력해 주세요 : ");
	scanf_s("%lf", &celsius); //입력 함수 scanf
	
	printf("섭씨 %f 도는 화씨로 %f 도 입니다. \n", celsius, 9 * celsius / 5 + 32);

	return 0;

	//문자 입력 받기

	char ch;//문자
	short sh;//정수
	int i;
	long lo;
	float fl;//실수
	double du;

	printf("char 형 변수 입력 :	");
	scanf_s("%c", &ch);

	printf("short 형 변수 입력 : ");
	scanf_s("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf_s("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf_s("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf_s("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf_s("%lf", &du);

	printf("char : %c, short : %d, int : %d", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
	return 0;


	//예제) 초(시간) 환산 프로그램

	int sec;
	int min;
	int hour;
	

	printf("시간을 입력하세요 : ");
	scanf_s("%d", &hour);
	printf("분을 입력하세요 : ");
	scanf_s("%d", &min);
	printf("초를 입력하세요 : ");
	scanf_s("%d", &sec);
	
	printf("입력하신 시간 %d시 %d분 %d초 는 %d 초 입니다.", hour, min, sec, (hour * 3600) + (min * 60) + sec);
	return 0;
}