
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a;
	*a = *a / *b;
	*b = div % *b;
}

int main (void)
{
	int a = 25, b = 11;
	ft_ultimate_div_mod(&a , &b);
	printf("%d, %d", a, b);
}
