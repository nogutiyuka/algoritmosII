#include <stdio.h>

float area(float raio);

int main()
{
	float raio;
	printf("Informe o raio da circunferencia: ");
	scanf("%f", &raio);
	float area1 = area(raio);
	printf("A area da circunferencia e de: %.2f", area1);
	
	return 0;
}

float area(float raio)
{
	float area = 3.14 * (raio*raio);
	return area;
}
