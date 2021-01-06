#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//로또 번호 생성
int i;
int j;
void rand_num(int n) {
	int num[5] = { 0 };
	int loto[5] = { 0 };

	srand(time(NULL));//랜덤 값
	for (i = 0; i < n; i++) {
		if (n >= 11) {
			printf("최대 10개만 살 수 있습니다.");
			break;
		}
		for (j = 0; j < 5; j++) {
			num[j] = 1 + (rand() % 45);//1~45까지 랜덤 수 생성
			if (num[j] != loto[0] && num[j] != loto[1] && num[j] != loto[2] && num[j] != loto[3] && num[j] != loto[4]) {
				loto[j] = num[j];//같은 숫자 없으면 대입
			}
			else {
				j--;//같은 숫자 나올 경우 다시 수행
			}
		}
		printf("%2d>> ", i + 1);
		for (j = 0; j < 5; j++) {
			printf("%2d ", loto[j]);
		}
		printf("\n");
		printf("----------------------------------------\n");
	}
	return;
}
int main() {
	int n;
	printf("몇장의 로또를 구입하시겠습니까?(최대 10장)\n");
	printf("---------------로또 추첨!---------------\n");
	scanf_s("%d", &n);
	rand_num(n);//랜덤 값 부르는 함수
	return 0;
}