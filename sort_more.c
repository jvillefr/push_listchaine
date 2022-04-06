/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:50 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/05 18:17:06 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"


void fonct(char **argv, t_stack *a, t_stack *b)
{
    push_b(argv, a, b);
    push_b(argv, a, b);
    sort_max_three(argv, b, a);
    
}

int roll(char **argv, t_stack *a, t_stack *b)
{
    if(a->first->value > b->first->value && a->first->value < b->first->next->value)
    {
        rotate_b(b, argv);
        push_b(argv, a, b);
        reverse_rotate_b(b, argv);
        return (1);
    }
    if(a->first->value  > b->last->value )
    {
        push_b(argv, a, b);
        rotate_b(b, argv);
        return (1);
    }
    else
    {
        return (0);
    }
}
/*
int fonct(char **argv, t_stack *a, t_stack *b)
{
    while(a->first)
    {
        if(a->first->value < b->first->value)
        {
            push_b(argv, a, b);
       
        if(a->first->value > b->first->value && a->first->value < b->first->next->value)
        {
            rotate_b(b, argv);
            push_b(argv, a, b);
        }
        rotate_b(b, argv);
        push_b(argv, a, b);
        i --;
        }
        if(a->first->value > b->first->value && a->first->value < b->first->next->value)
        {
            rotate_b(a, argv);
            push_b(argv, a, b);
        }
        else
        {
            rotate_b(a, argv);
            push_b(argv, a, b);
        }
    }
    
    return (0);
} */