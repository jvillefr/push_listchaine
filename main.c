/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/27 15:52:42 by jvillefr         ###   ########.fr       */
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
    //b.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    push_user_input(argv, &a);
    printf("\n\n");
    sort_max_three(argv, &a, &b);
    //reverse_rotate_a(&a, argv);
    //swap_a(&a);
   // sort_max_three(argv, &a, &b);
    
    printf("\n\n");
    printf("\n\n");
    print_stack(a);
   // printf("%d", stacklen(a));
    //free(argv);
    return (0);
}

