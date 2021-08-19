#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_memset(av[1], atoi(av[2]), atoi(av[3])));
	printf("%s\n", memset(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}