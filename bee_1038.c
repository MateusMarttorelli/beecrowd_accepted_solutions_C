#include <stdio.h>

int main() {

	int id, n;
	float total;

	scanf("%d %d", &id, &n);

	switch (id)
	{
	case 1:
	{
		total = n * 4.00;
		printf("Total: R$ %.2f\n", total);
		break;
	}
	case 2:
	{
		total = n * 4.50;
		printf("Total: R$ %.2f\n", total);
		break;
	}
	case 3:
	{
		total = n * 5.00;
		printf("Total: R$ %.2f\n", total);
		break;
	}
	case 4:
	{
		total = n * 2.00;
		printf("Total: R$ %.2f\n", total);
		break;
	}
	case 5:
	{
		total = n * 1.50;
		printf("Total: R$ %.2f\n", total);
		break;
	}
	}

	return 0;
}