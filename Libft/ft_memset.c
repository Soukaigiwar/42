#include <stdlib.h>
#include <stdio.h>
 
void    *ft_memset(void *s, int c, size_t n)
{
    //unsigned char    *str;
    size_t    i;

    //str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = c;
        i++;
    }
	return (s);
}

<<<<<<< HEAD
// int main(void){
//   char *str;
//   char *str2;

//   str = "sergio";
//   str2 = (char *)ft_memset(str, '-', 2);
//   //ft_memset(str, '-', 2);
//   printf("after: %s\n", str2);

// }
=======
int main(void){
  char *str;
  char *str2;

  str = "sergio";
  str2 = (char *)ft_memset(str, '-', 2);
  //ft_memset(str, '-', 2);
  printf("after: %s\n", str2);

}
>>>>>>> b58be089cd4a2f3fe7e22c7127a0b3eb4486b8e5
