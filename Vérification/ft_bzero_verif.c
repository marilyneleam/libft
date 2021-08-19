#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	const char str [250] = "ceci est un test pour voir si ca marche ou pas";
	char s[250];

	strcpy(s, str);
	ft_bzero(s, 1);
	printf("%s\n", s);
	printf("%s\n", bzero(s, 1));
	return (0);
}
