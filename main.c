/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/16 19:39:06 by jvillefr         ###   ########.fr       */
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
    t_stack c;//inter c;
    int max;
    int min;
    int n;
    int *tab;
    int *ty;
    int *j;
    int i;
    
 
    //argv = malloc(sizeof(argv));
    init(&a);
    init(&b);
    init(&c);

    argv++;
    if(argc == 1)
        return (0);
    if(argc == 2)
        argv = ft_is_split(argv[0]); /* free me after running....*/
    
    parse_input(argv);
    //i = argc;
    push_user_input(argv, &a);
    //printf("\n");
    sort_big(argv, &a, &b);
    //print_stack(a);
    /*printf("\n");
    print_stack(a);
    printf("\n");
    print_index(a);
    print_index_binaire(a);
    printf("\n\n");
    //push_zero_bit(argv, &a, &b, 0);
    printf("\n\n");
    sort_small(argv, &a, &b);
    print_index_binaire(a);
    put_all_in_main_stack(argv, &a, &b);*/
    //print_stack(a);
   // print_index_binaire(a);
    //printf("\n");
    //print_stack(a);
   // printf("\n\n");
   // print_index(a);*/
   // i = ft_tab_size(argv);
    //printf("%d", i);
    //indexp(argv, &c);
    //view_inter(c);
    //push_front_inter(&c, 55);
    //push_front_inter(&c, 0);
    //view_inter(c);
   
    // a = (t_stack *)malloc(sizeof(t_stack) * ft_tab_size(argv));
    //b.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    //push_user_input(argv, &a);
    //indexp(argv, &c);
    
    /*while()
    {
       printf("%d", ty[j]);
       j++;
    }*/
    
    /*max = find_max_nbr(a);
    min = find_min_nbr(a);
    //printf("\n\n");

    i = 0;
    j = 0;
    n = 0;
    while(i < stacklen(a) - 2)
    {
        if(a.first->value != min && a.first->value != max)
           push_b(argv, &a, &b);
        else
            rotate_a(&a, argv);
    }
    if(a.first->value != min)
        swap_a(&a);
    
    while (b.first)
    {
        if (!roll(argv, &a, &b))
        {
            (&a, argv);
        }
    }
    j = find_pindex(a, min);*/
   
    
    
    /*printf(" max nbr is: %d \n", max);
     while (a.first->value != min)
    {
        if(j < stacklen(a) / 2)
            rotate_a(&a, argv);
        else
            reverse_rotate_a(&a, argv);
    }
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

