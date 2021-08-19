#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));

	return (0);
}
