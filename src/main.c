#include "../libft/libft.h"
#include "../include/parse.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>


/* set header for ft_realloc */

int main (int argc, char **argv)
{
    t_stack a;
    t_stack b;
    

    argv++;
    if(argc == 1)
        return (0);
    if(argc == 2)
        argv = ft_is_split(argv[0]); /* free me after running....*/
    parse_input(argv);
    
    
    //b.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    ft_pop(argv, &a);
    //ft_print_stack(a);
    
    //ft_swap_a(a);
    //ft_print_stack(a);

    //b.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    ft_push_b(argv, &a, &b);
    ft_print_stack(a);
    ft_putchar_fd('\n', 2);
    return (0);
}

