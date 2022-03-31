#include <stdio.h>

int main() {

	int i, n, n_testes, n_total = 0, n_coelhos = 0, n_ratos = 0, n_sapos = 0;
	float p_coelhos, p_ratos, p_sapos;
	char cobaia;

	scanf("%d", &n_testes);

	for (i = 0; i < n_testes; i++) {

		scanf("%d %c", &n, &cobaia);

		if (cobaia == 'C') {
			n_total += n;
			n_coelhos += n;
		}
		else if (cobaia == 'R') {
			n_total += n;
			n_ratos += n;
		}
		else if (cobaia == 'S') {
			n_total += n;
			n_sapos += n;
		}			
	}

	p_coelhos = (n_coelhos * 100.0) / n_total;
	p_ratos = (n_ratos * 100.0) / n_total;
	p_sapos = (n_sapos * 100.0) / n_total;

	printf("Total: %d cobaias\n", n_total);
	printf("Total de coelhos: %d\n", n_coelhos);
	printf("Total de ratos: %d\n", n_ratos);
	printf("Total de sapos: %d\n", n_sapos);
	printf("Percentual de coelhos: %.2f %%\n", p_coelhos);
	printf("Percentual de ratos: %.2f %%\n", p_ratos);
	printf("Percentual de sapos: %.2f %%\n", p_sapos);

	return 0;
}