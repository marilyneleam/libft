#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strjoin(av[1], av[2]));
	return (0);
}