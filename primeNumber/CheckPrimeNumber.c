#include<stdio.h>
int main() {
	int input, i, check;
	printf("���� �Է��� �ּ��� : ");
	scanf_s("%d", &input);

	check = 0;
	for (i = 1; i <= input; i = i + 1) {
		if (input % i == 0) {
			check = check + 1;
		}
	}
	if (check == 2) {
		printf("%d�� �Ҽ��Դϴ�.\n", input);
	}
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", input);
	}
	return 0;
}