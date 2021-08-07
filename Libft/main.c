#include <unistd.h>
#include <stdio.h>

int		ft_isalpha(char *c);
int		ft_isdigit(char *c);
int		ft_isalnum(char *c);
int		ft_isascii(char *c);
int		ft_isprint(char *c);
int		ft_strlen(char *c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(char *nptr);
char	ft_strchr(const char *s, int c);
char	ft_strrchr(const char *s, int c);

int	main(void)
{
	char	*mytext;
	char	c;

	//ft_isalpha
	write (1, "Alpha: ", 7);
	if (ft_isalpha("r"))
		write (1, "Y\n", 2);
	else
		write (1, "N\n", 2);
	//ft_isdigit
	write (1, "Digit: ", 7);
	if (ft_isdigit("7"))
		write (1, "Y\n", 2);
	else
		write (1, "N\n", 2);
	//ft_isalnum
	write (1, "AlphaNum: ", 10);
	if (ft_isalnum(" "))
		write (1, "Y\n", 2);
	else
		write (1, "N\n", 2);
	//ft_isascii
	write (1, "IsAscii: ", 9);
	if (ft_isascii("¢"))
		write (1, "Y\n", 2);
	else
		write (1, "N\n", 2);
	//ft_isprint
	write (1, "IsPrint: ", 9);
	if (ft_isprint(" "))
		write (1, "Y\n", 2);
	else
		write (1, "N\n", 2);
	//ft_strlen
	write (1, "strLen: ", 8);
	mytext = "Sergio";
	if (ft_strlen(mytext) > 0)
		printf("%i\n", ft_strlen(mytext));
	else
		write (1, "empty\n", 6);
	//ft_toupper
	c = 's';
	printf("Toupper: %c -> %c\n", c, ft_toupper(c));
	//ft_tolower
	c = 'J';
	printf("Tolower: %c -> %c\n", c, ft_tolower(c));
	// atoi
	printf("atoi #1: %d\n", ft_atoi("  -12"));
	printf("atoi #2: %d\n", ft_atoi("12"));
	printf("atoi #3: %d\n", ft_atoi("25   s-12"));
	printf("atoi #4: %d\n", ft_atoi("s12"));
	printf("Atoi #5: %d\n", ft_atoi("A3F5Y8"));
	printf("Atoi #6: %d\n", ft_atoi(""));
	printf("Atoi #7: %d\n", ft_atoi("010101"));
	// strchr
	const char strchr_word[] = "Sergio";
	char result_strchr = ft_strchr(strchr_word, 'g');
	printf("ponteiro de letter: %p\n", (void *)result_strchr);
	// strrchr
	const char strrchr_word[] = "www.teste.com.br";
	char result_strrchr = ft_strrchr(strrchr_word, '.');
	printf("ponteiro de letter: %p\n", (void *)result_strrchr);
}
