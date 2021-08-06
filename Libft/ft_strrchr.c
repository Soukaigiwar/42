// The strchr() function returns a pointer to the last
// occurrence of the character c in the string s.
#include <stdio.h>

// char	*ft_strrchr(const char *s, int c)
// {
// 	char *result;

// 	result = NULL;
// 	while (*s)
// 	{
// 		if (*s == (char)c)
// 			*result = ((char *)s);
// 		s++;
// 	}
	
// 	return (result);
// }

char	*ft_strrchr(const char	*s, int	c)
{
	char	*ps;

	ps = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ps = (char *)s;
		++s;
	}
	if (*s == (char)c)
		ps = (char *)s;
	printf("%p\n", s);
	printf("%p\n", ps);
	return (ps);
}
