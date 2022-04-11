#include <stdio.h>

int main() {

	int gols_inter, gols_gremio, x, vit_inter = 0, vit_gremio = 0, n_empates = 0, n_grenais = 0;

	do {

		scanf("%d %d", &gols_inter, &gols_gremio);

		if (gols_inter > gols_gremio)
			vit_inter++;

		else if (gols_gremio > gols_inter)
			vit_gremio++;

		else if (gols_inter == gols_gremio)
			n_empates++;

		n_grenais++;

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &x);

	} while (x != 2);

	printf("%d grenais\n", n_grenais);
	printf("Inter:%d\n", vit_inter);
	printf("Gremio:%d\n", vit_gremio);
	printf("Empates:%d\n", n_empates);

	if (vit_inter > vit_gremio)
		printf("Inter venceu mais\n");

	else if (vit_gremio > vit_inter)
		printf("Gremio venceu mais\n");

	else
		printf("Nao houve vencedor\n");

	return 0;
}