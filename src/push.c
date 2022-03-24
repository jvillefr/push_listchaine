/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:51:52 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/24 16:56:48 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void push_a(char **argv, t_stack *a, t_stack *b)
{
    int pop;

    if (b->first != NULL)
    {
        pop = ft_pop_front(b);
        ft_push_front(argv, a, pop);
    }
}

void push_b(char **argv, t_stack *b, t_stack *a)
{
    int pop;

    if (a->first != NULL)
    {
        pop = ft_pop_front(a);
        ft_push_front(argv, b, pop);
    }
}