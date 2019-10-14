#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float milage, money, Kilometer, parking, Tolls, total;
	printf("一整天的總里程數:");
	scanf_s("%f", &milage);
	printf("汽油一公升多少錢:");
	scanf_s("%f", &money);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%f", &Kilometer);
	printf("一天的停車費:");
	scanf_s("%f", &parking );
	printf("一天的通行費(過路費):");
	scanf_s("%f", &Tolls);

	total = milage / Kilometer * money + parking + Tolls;
	printf("%.0f", total);

	system("pause");
	return 0;
}