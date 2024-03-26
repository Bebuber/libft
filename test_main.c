#include "libft.h"
#include <stdio.h>

int main()
{
	//printf("%d\n",ft_isalpha('a'));
	//printf("%d\n",ft_isdigit('a'));
	//printf("%d\n",ft_isalnum('a'));
	//printf("%d\n",ft_isascii('a'));
	//printf("%d\n", ft_strlen("012345678999999"));

	//char str[6];
	//printf("%s\n", ft_memset(str, '1', 6));

	//char str[6] = ";lkjdf";
	//printf("%s\n", ft_bzero(str, 6));

	//char dst[7];
	//char *src = "1234567";
	//printf("%s\n", ft_memcpy(dst, src, 6));
	//printf("%s\n", ft_memmove(dst, src , 10));

	//char dest[10];
	//char src[] = "Good morning little bird";
	//printf("%s\n%s\n%d\n", dest, src, ft_strlcpy(dest, src, 5));
	//printf("%u\n%s\n", ft_strlcat(dest, src, nb), dest);

	//printf("%d\n", ft_toupper('a'));
	//printf("%d\n", ft_tolower('A'));

	char s[] = "helloef";
	printf("%s\n", ft_strchr(s, 'e'));
	printf("%s\n", strrchr(s, 'l'));


	return (0);
}