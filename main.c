#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(){
    //isalpha test
    printf("C is alpha %i, 5 is alpha %i, * is alpha %i \n",ft_isalpha('C'), ft_isalpha('5'), ft_isalpha('*'));
    //isdigit
    printf("C is digit %i, 5 is digit %i, * is digit %i \n",ft_isdigit('C'), ft_isdigit('5'), ft_isdigit('*'));
    //isalnum
    printf("C is alnum %i, 5 is alnum %i, * is isalnum %i \n",ft_isalnum('C'), ft_isalnum('5'),ft_isalnum('*'));
    //isascii
    printf("C is ascii %i, 5 is ascii %i, * is ascii %i, 800 is ascii %i \n",ft_isascii('C'),ft_isascii('5'), ft_isascii('*'), ft_isascii(800));
    //isprint
    printf("C is printable %i, 5 is printable %i, * is printable %i, 800 is printable %i \n",ft_isprint('C'),ft_isprint('5'),ft_isprint('*'),ft_isprint(800));
    //strlen
    printf("Length of 'Hello World' is %u \n", ft_strlen("Hello World"));
    printf("Length of '42 Istanbul' is %u \n", ft_strlen("42 Istanbul"));
    printf("Length of '42 Istanbul' is %u \n", ft_strlen("42 Istanbul \0 31 42"));
    //memset
    char str[50] = "Hello World";
    printf("Before memset: %s \n", str);
    ft_memset(str, 'A', 5);
    printf("After memset: %s \n", str);
    int n[5] = {1, 2, 3, 4, 5};
    printf("Before memset: %d %d %d %d %d \n", n[0], n[1], n[2], n[3], n[4]);
    ft_memset(n, 0, 3*sizeof(n[0]));
    printf("After memset: %d %d %d %d %d \n", n[0], n[1], n[2], n[3], n[4]);

    int t[5] = {1, 2, 3, 4, 5};
    printf("Before memset: %d %d %d %d %d \n", t[0], t[1], t[2], t[3], t[4]);
    memset(t, 0, 3*sizeof(t[0]));
    printf("After memset: %d %d %d %d %d \n", t[0], t[1], t[2], t[3], t[4]);

    //bzero
    char str1[50] = "Hello World";
    printf("Before bzero: %s \n", str1);
    ft_bzero(str1, 5);
    printf("After bzero: %s \n", str1);
    
    return (0);
}