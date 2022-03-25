/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:51:52 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/25 15:03:37 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void push_a(char **argv, t_stack *a, t_stack *b)
{
    int pop;

    if (b->first != NULL)
    {
        pop = pop_front(b);
        push_front(argv, a, pop);
        ft_putendl_fd("pa", 1);
    }
}

void push_b(char **argv, t_stack *a, t_stack *b)
{
    int pop;

    if (a->first != NULL)
    {
        pop = pop_front(a);
        push_front(argv, b, pop);
        ft_putendl_fd("pb", 1);
    }
}

