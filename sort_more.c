/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:50 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/07 16:28:14 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/push_swap.h"

void fonct(char **argv, t_stack *a, t_stack *b)
{
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
    else
    {
        return (0);
    }
}