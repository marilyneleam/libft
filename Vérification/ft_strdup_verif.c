#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strdup(av[1]));
	printf("%s\n", strdup(av[1]));
	return (0);
}
