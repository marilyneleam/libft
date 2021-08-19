#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char un[ ] = "aelloworld";
	char deux[ ] = "zelloworld";
	printf("%d\n", ft_strncmp(un, deux, 4));
	printf("%d\n", strncmp(un, deux, 4));
	return (0);
}
