/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:28:20 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/24 17:10:51 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void rotate_a(t_stack *a, char **argv)
{
    int pop;

    pop = ft_pop_front(a);
    ft_push_back(argv, a, pop);
}

void rotate_b(t_stack *b, char **argv)
{
    int pop;

    pop = ft_pop_front(b);
    ft_push_back(argv, b, pop);
}

void rotate_ab(t_stack *a, t_stack *b, char **argv)
{
    rotate_a(a, argv);
    rotate_b(b, argv);
}

int ft_stacklen(t_stack a) 
{
    int n;

    n = 0;

    while(a.first)
    {
        n++;
        a.first = a.first->next;
    }
    return n;
}





