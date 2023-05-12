#include <stdio.h>

int fatorial (int num);

int main()
{
	int n, p, c;
	printf ("Digite um valor para n: ");
	scanf ("%d",&n);
	printf ("Digite um valor para p: ");
	scanf ("%d",&p);

	c = fatorial(n) / (fatorial(p) * fatorial(n-p));
	
	printf("A combinacao e: %d", c);
	
	return 0;
}

int fatorial (int num)
{
	int i, fat = 1;
	
	for (i = num; i>=1; i--)
	{
		fat *= i;	
	}	
	return fat;
}
