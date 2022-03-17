#include "../include/parse.h"
#include "../libft/libft.h"

void ft_pop(char **argv, t_stack *a){
    int i;
    int j;
    i = 0;
    j = 0;
    a->tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    if(!a->tab)
        exit(EXIT_FAILURE);
    while(argv[i] != NULL){
        a->tab[j] = ft_atoi(argv[i]);
       // ft_putnbr_fd( a->tab[j], 2);
       // ft_putchar_fd('\n', 2);
        i++;
        j++;
    }
}

void ft_print_stack(t_stack a){ /* clear char **argv from fucnton please */
    int i;
    i = 0;
    while(a.tab[i] != '\0'){
        ft_putnbr_fd( a.tab[i], 2);
        ft_putchar_fd('\n', 2);
        i++;
    }
}