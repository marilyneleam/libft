#include<ctype.h>
#include<stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	int c;
	c = 'u';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	c = 'B';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	c = 48;
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	c = 57;
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	c = 105;
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	c = '+';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	c = '9';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));








	return (0);
}
