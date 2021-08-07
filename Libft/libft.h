#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(char *c);
int		ft_isdigit(char *c);
int		ft_isalnum(char *c);
int		ft_isascii(char *c);
int		ft_isprint(char *c);
int		ft_strlen(char *c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *nptr);
char	ft_strchr(const char *s, int c);
char	ft_strrchr(const char *s, int c);
#endif
