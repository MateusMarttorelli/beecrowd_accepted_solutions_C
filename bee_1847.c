#include <stdio.h>
#include <stdlib.h>

int main() {

	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (b < a && c >= b)
		printf(":)\n");
	
	else if (b > a && c <= b) 
		printf(":(\n");
	
	else if (b > a && c > b && c - b < b - a)
		printf(":(\n");
	
	else if (b > a && c > b && c - b >= b - a)
		printf(":)\n");
	
	else if (b < a && c < b && abs(c - b) < abs(b - a))
		printf(":)\n");
	
	else if (b < a && c < b && abs(c - b) <= (b - a))
		printf(":(\n");
	
	else if (b == a && c - b > b - a)
		printf(":)\n");
	
	else 
		printf(":(\n");	

	return 0;
}