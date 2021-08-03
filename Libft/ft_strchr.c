// The strchr() function returns a pointer to the first
// occurrence of the character c in the string s.
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	if (*s == '\0')
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
