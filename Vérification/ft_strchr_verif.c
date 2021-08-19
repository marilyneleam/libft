#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char a [ ] = "je suis une banane";
	int c = '\0';
	printf("%s\n", ft_strchr(a, c));
	printf("%s\n", strchr(a, c));
	return (0);
}
