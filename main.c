#include <stdio.h>

int main(){
    //isalpha test
    printf("C is alpha %i, 5 is alpha %i, * is alpha %i \n",ft_isalpha('C'), ft_isalpha('5'), ft_isalpha('*'));
    //isdigit
    printf("C is digit %i, 5 is digit %i, * is digit %i \n",ft_isdigit('C'), ft_isdigit('5'), ft_isdigit('*'));
    //isalnum
    printf("C is alnum %i, 5 is alnum %i, * is isalnum %i \n",ft_isalnum('C'), ft_isalnum('5'),ft_isalnum('*'));
    return (0);
}