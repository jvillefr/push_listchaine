/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:50 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/27 17:32:33 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void sort_max_three(char **argv, t_stack *a, t_stack *b)
{
    elem *x = a->first;
    elem *z= a->last;
    if (x->value < x->next->value)
    {
       first_case(x, z, argv, a);
    }
    if(x->value > x->next->value && x->next->value < z->value)
    {
        rotate_a(a, argv);
    }
    else
    {
        swap_a(a);
        sort_max_three(argv, a, b);
    }
}

void first_case(elem *x, elem *z, char **argv, t_stack *a)
{
    if (x->value < z->value && z->value < x->next->value)
    {
        reverse_rotate_a(a, argv);
        swap_a(a);
    }
    if(z->value < x->value)
    {
        reverse_rotate_a(a, argv);
    }
}