/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/25 16:34:36 by jvillefr         ###   ########.fr       */
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
    
    init(&a);
    init(&b);

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
   
    //b.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    push_user_input(argv, &a);
    
    //print_stack(a);
    printf("\n\n");
    //push_front(argv, &b, 10);
    //push_front(argv, &b, 50);
    //push_front(argv, &b, -6);
    //print_stack(b);
    //printf("-\nb\n\n\n");
    swap_a(&a);
    push_b(argv, &a, &b);
    push_b(argv, &a, &b);
    push_b(argv, &a, &b);
    /*rotate_ab(&a, &b, argv);
    reverse_rotate_ab(&a, &b, argv);
    swap_a(&a);
    push_a(argv, &a, &b);
    push_a(argv, &a, &b);
    push_a(argv, &a, &b);*/
    print_stack(a);
    printf("-\na\n\n");
    print_stack(b);
    printf("-\nb\n\n\n");
    
    return (0);
}

