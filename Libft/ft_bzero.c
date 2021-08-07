// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area.
#include <stdlib.h>
#include <stdio.h>

// void ft_bzero(void *s, size_t n)
// {	//nao funciona se usar void *s direto. 
// 	size_t i;
// 	char c;

// 	c = (void (*))s;
// 	i = 0;
// 	while(i++ < n)
// 		c = '\0';
// }

// int main(void){
// 	char *str = "sergio";
// 	ft_bzero(str, 6);
// 	return (0);
// }
 
void    ft_bzero(void *s, size_t n)
{
    //unsigned char    *str;
    size_t    i;

    //str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = '\0';
        i++;
    }
}

int main(void){
  char *str;
  str = "sergio";
  ft_bzero(str, 6);
  //printf("after: %s\n", str);
}