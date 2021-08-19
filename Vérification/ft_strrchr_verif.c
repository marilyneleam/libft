#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	char a[ ] = "dimanche";
	int c = 'z';
	printf("%s\n", ft_strrchr(a, c));
	printf("%s\n", strrchr(a, c));
	return (0);
}
