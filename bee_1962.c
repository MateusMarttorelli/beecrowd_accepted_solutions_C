#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, i, ano;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		scanf("%d", &ano);

		if (2015 - ano > 0)
			printf("%d D.C.\n", abs(2015 - ano));

		else if (2015 - ano <= 0)
			printf("%d A.C.\n", abs(2014 - ano));
	}

	return 0;
}