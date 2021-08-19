#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_atoi("---+--+1234ab567"));
	printf("%d\n", atoi("---+--+1234ab567"));
	printf("%d\n", ft_atoi("1234ab567"));
	printf("%d\n", atoi("1234ab567"));
	printf("%d\n", ft_atoi("ab567"));
	printf("%d\n", atoi("ab567"));
	printf("%d\n", ft_atoi("     -57567gh6789"));
	printf("%d\n", atoi("     -57567gh6789"));
	printf("%d\n", ft_atoi("     -57567gh6789"));
	printf("%d\n", atoi("     -57567gh6789"));
	printf("%d\n", ft_atoi("\n42bonjour"));
	printf("%d\n", atoi("\n42bonjour"));
	printf("%d\n", ft_atoi("-+689"));
	printf("%d\n", atoi("-+689"));
	printf("%d\n", ft_atoi("-689"));
	printf("%d\n", atoi("-689"));
	printf("%d\n", ft_atoi("+123"));
	printf("%d\n", atoi("+123"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", atoi("2147483648"));
	return (0);
}
