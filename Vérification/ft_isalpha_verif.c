#include<ctype.h>
#include<stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int c;
	c = 'u';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	c = 'B';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	c = 65;
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	c = 92;
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	c = 105;
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	c = '+';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	c = '9';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));








	return (0);
}
