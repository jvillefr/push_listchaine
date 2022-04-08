/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/07 16:56:36 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "my_printf_modifier/libft/libft.h"
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
    int max;
    int min;
    int i;
    int j;
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
    push_user_input(argv, &a);
    max = find_max_nbr(a);
    min = find_min_nbr(a);
    //printf("\n\n");
    

    
    while (a.first->value != max)
    {
        rotate_a(&a, argv);
    }
    push_b(argv, &a, &b);

    while (a.first->value != min)
    {
        rotate_a(&a, argv);
    }
    push_b(argv, &a, &b);
    
    push_b(argv, &a, &b);
    sort_max_three(argv, &b, &a);
    

    printf("\n\n");
    printf("this is b: \n");
    print_stack(b);
    while (a.first && a.last)
    {
        if (!roll(argv, &a, &b))
        {
            rotate_b(&b, argv);
        }
    }
    while (b.last->value != max)
    {
        rotate_b(&b, argv);
    }
    check_sort(b);
   
    

    
    

    
    /*printf(" max nbr is: %d \n", max);
    printf(" min nbr is: %d \n", min);
    printf("\n\n");
    printf("this is a: ");
    print_stack(a);
    printf("\n\n");
    printf("\n\n");
    printf("----------");
    printf("\n\n");
    printf("this is b: ");
    print_stack(b);*/
    //free(argv);
    return (0);
}

