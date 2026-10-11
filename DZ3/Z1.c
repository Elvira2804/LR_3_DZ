#include <stdio.h>
#include <locale.h>

float shop(int a, float b);

int main() {
	setlocale(LC_CTYPE, "ru_RU.UTF-8");

	int quantity;
	float price;
	float total;

	printf("Введите количество товаров: ");
	scanf("%d", &quantity);

	printf("Введите цену одного товара: ");
	scanf("%f", &price);

	total = shop(quantity, price);

	printf("Итоговая стоимость покупки: %.2f\n", total);

	return 0;
}
float shop(int a, float b) {
	float res = a * b;
	return res;
}