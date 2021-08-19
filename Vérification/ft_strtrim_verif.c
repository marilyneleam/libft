#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strtrim(av[1], av[2]));
	return (0);
}