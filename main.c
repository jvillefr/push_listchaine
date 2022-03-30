/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/30 15:50:14 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>



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
   
   
    push_user_input(argv, &a);
    printf("\n");
    sort_max_five(argv, find_max_index(a), &a, &b);
    printf("\n\n");
    print_stack(a);
    printf("\n\n");
   // push_max(argv, find_max_index(a), &a, &b);
    //push_max(argv, find_max_index(a), &a, &b);



    
    //check_sort(a);
    //sort_max_three(argv, &a, &b);
    //reverse_rotate_a(&a, argv);
    //swap_a(&a);
   // sort_max_three(argv, &a, &b);
   // rotate_a(&a, argv);
   /* find_max_index(a);
    printf("%d", find_max_index(a));
    printf("\n\n");*/
    ;
   // printf("%d", stacklen(a));
    //free(argv);
    return (0);
}


