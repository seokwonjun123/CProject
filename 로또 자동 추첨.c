#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�ζ� ��ȣ ����
int i;
int j;
void rand_num(int n) {
	int num[5] = { 0 };
	int loto[5] = { 0 };

	srand(time(NULL));//���� ��
	for (i = 0; i < n; i++) {
		if (n >= 11) {
			printf("�ִ� 10���� �� �� �ֽ��ϴ�.");
			break;
		}
		for (j = 0; j < 5; j++) {
			num[j] = 1 + (rand() % 45);//1~45���� ���� �� ����
			if (num[j] != loto[0] && num[j] != loto[1] && num[j] != loto[2] && num[j] != loto[3] && num[j] != loto[4]) {
				loto[j] = num[j];//���� ���� ������ ����
			}
			else {
				j--;//���� ���� ���� ��� �ٽ� ����
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
	printf("������ �ζǸ� �����Ͻðڽ��ϱ�?(�ִ� 10��)\n");
	printf("---------------�ζ� ��÷!---------------\n");
	scanf_s("%d", &n);
	rand_num(n);//���� �� �θ��� �Լ�
	return 0;
}