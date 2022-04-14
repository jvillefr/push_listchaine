/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/14 17:32:27 by jvillefr         ###   ########.fr       */
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
    t_stack c;
    t_stack d;

    //argv = malloc(sizeof(argv));
    init(&a);
    init(&b);
    int i;
    int j;
  
 
    i = 250;
    argv++;
    if(argc == 1)
        return (0);
    if(argc == 2)
        argv = ft_is_split(argv[0]); /* free me after running....*/
    parse_input(argv);
    
   
    // a = (t_stack *)malloc(sizeof(t_stack) * ft_tab_size(argv));
    //b.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    push_user_input(argv, &a);
    //push_user_input(argv, &c);
    //indexp(argv, &c);

    
  
    printf("\n\n");
    bin(i, )

    //print_stack(c);
   
    
    
      
    

    
    

    
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