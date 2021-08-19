#include <stdio.h>
#include "libft.h"

int main (void)
{
    char *str = "  BONJOUR CA VA  ";
    int c = ' ';
    int i = 0;
    char **split;
    split = ft_split(str, c);
    while (split[i] != 0)
    {
        printf("%s\n", split[i]);
        i++;
    }
    return 0;
}