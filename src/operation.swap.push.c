#include "../include/parse.h"
#include "../libft/libft.h"

void ft_swap_a(t_stack a){
    int tmp;

    tmp = a.tab[0];
    a.tab[0] = a.tab[1];
    a.tab[1] = tmp;
}

void ft_push_b(char **argv, t_stack *a, t_stack *b){
 // void ft_pop(char **argv, t_stack *a){
    t_stack tmp;
    int i;
    int j;
    i = 1;
    j = 0;
    
    b->tab = (int *)malloc(sizeof(int) * (ft_tab_size(argv)- ft_tab_size(argv)- 1));
    if(!b->tab)
        exit(EXIT_FAILURE);
    b->tab(ft_tab_size(b->tab)++) = ft_atoi(argv[0]);

    ft_print_stack(t_stack b);
   
    

   
    
    a->tab = (int *)malloc(sizeof(int) * (ft_tab_size(argv)- 1));
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