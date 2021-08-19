#include <stdio.h>
#include "libft.h"

int main(void)
{
	char t[ ] = "hello world";
	printf("%s\n", ft_substr(t, 2, 5));
	return (0);
}