#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float milage, money, Kilometer, parking, Tolls, total;
	printf("�@��Ѫ��`���{��:");
	scanf_s("%f", &milage);
	printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &money);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &Kilometer);
	printf("�@�Ѫ������O:");
	scanf_s("%f", &parking );
	printf("�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &Tolls);

	total = milage / Kilometer * money + parking + Tolls;
	printf("%.0f", total);

	system("pause");
	return 0;
}