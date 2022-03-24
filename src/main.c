/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/24 16:32:13 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_printf_modifier/libft/libft.h"
#include "../include/push_swap.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_printf_modifier/includes/ft_printf.h"


/* set header for ft_realloc */

int main (int argc, char **argv)
{
    t_stack a;
    t_stack b;

    //argv = malloc(sizeof(argv));
    
    ft_init(&a);
    ft_init(&b);

    argv++;
    if(argc == 1)
        return (0);
    if(argc == 2)
        argv = ft_is_split(argv[0]); /* free me after running....*/
    parse_input(argv);

   // a = (t_stack *)malloc(sizeof(t_stack) * ft_tab_size(argv));
    
    
    //b.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
   // ft_pop(argv, &a);
    //ft_print_stack(a);
    
    //ft_swap_a(&a);
    //ft_print_stack(a);
   int i = 0;
    //b.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    ft_push_user_input(argv, &a);
    
    ft_print_stack(a);
    ft_printf("-\na\n\n");
    ft_push_front(argv, &b, 10);
    ft_push_front(argv, &b, 50);
    ft_push_front(argv, &b, -6);
    ft_print_stack(b);
    ft_printf("-\nb\n\n\n");
    swap_a(&a);
    ft_print_stack(a);
    ft_printf("-\na\n\n");
    ft_print_stack(b);
    ft_printf("-\nb\n\n\n");
    
    return (0);
}

