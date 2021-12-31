#include<stdio.h>
int main() {
	int input, i, check;
	printf("수를 입력해 주세요 : ");
	scanf_s("%d", &input);

	check = 0;
	for (i = 1; i <= input; i = i + 1) {
		if (input % i == 0) {
			check = check + 1;
		}
	}
	if (check == 2) {
		printf("%d는 소수입니다.\n", input);
	}
	else {
		printf("%d는 소수가 아닙니다.\n", input);
	}
	return 0;
}