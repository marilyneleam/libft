#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%p\n", ft_memcpy(av[1], av[2], atoi(av[3])));
	printf("%p\n", memcpy(av[1], av[2], atoi(av[3])));

	printf("%p\n", &ft_memcpy);
	printf("%p\n", &memcpy);

	return (0);
}