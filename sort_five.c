/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:50 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/07 13:44:37 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"


int sort_max_five(char **argv, t_stack *a, t_stack *b)
{
    sort_max_three(argv, a, b);
    if(b->first->value < b->first->next->value)
    {
        push_a(argv, a, b);
        rotate_a(a, argv);
        push_a(argv, a, b);
        rotate_a(a, argv);
    }
    else
    {
        push_a(argv, a, b);
        push_a(argv, a, b);
        rotate_a(a, argv);
        rotate_a(a, argv);
    }
    return (0);
}

int push_max_one(char **argv, int index, t_stack *a, t_stack *b)
{
    if(index == 0)
    {
        push_b(argv, a, b);
        
    }
        
    if(index == 1)
    {
        rotate_a(a, argv);
        push_b(argv, a, b);
    }
    if(index == 2)
    {
        rotate_a(a, argv);
        rotate_a(a, argv);
        push_b(argv, a, b);
    }
    if(index > 2)
    {
        start_from_z(argv, index, a, b);
    }
    return (0);
}

void start_from_z(char **argv, int index, t_stack *a, t_stack *b)
{
    if(index == 3)
    {
        reverse_rotate_a(a, argv);
        reverse_rotate_a(a, argv);
        push_b(argv, a, b);
    }
    else
    {
        reverse_rotate_a(a, argv);
        push_b(argv, a, b);
    }

}

int find_max_index(t_stack a)
{
    int nbr;
    int index;

    index = 0;
    nbr = find_max_nbr(a);

    elem *pelem = a.first;
    while (pelem)
    {
        if( nbr == pelem->value)
            return index;
        pelem = pelem->next;
        index++;
    }
    return index;
}

int find_max_nbr(t_stack a)
{
    int i;

    i = a.first->value;
    elem *pelem = a.first;
    while(pelem)
    {
        if( i < pelem->value)
        {
            i = pelem->value;
        }
        pelem = pelem->next;
    }
    return i;
}

int find_min_nbr(t_stack a)
{
    int i;

    i = a.first->value;
    elem *pelem = a.first;
    while(pelem)
    {
        if( i > pelem->value)
        {
            i = pelem->value;
        }
        pelem = pelem->next;
    }
    return i;
}


int push_max_two(char **argv, int index, t_stack *a, t_stack *b)
{
    if(index == 0)
    {
        push_b(argv, a, b);
        ft_putendl_fd("index 0", 1);
    }
    if(index == 1)
    {
        rotate_a(a, argv);
        push_b(argv, a, b);
    }
    if(index == 2)
    {
        reverse_rotate_a(a, argv);
        reverse_rotate_a(a, argv);
        push_b(argv, a, b);
    }
    if(index == 3)
    {
        reverse_rotate_a(a, argv);
        push_b(argv, a, b);
    }
    return (0);
}

/* void sort_max_five(char **argv, t_stack *a, t_stack *b)
{
    elem *x; 
    elem *z;
    elem *i;
    
    x = a->first;
    z = a->last;
    i = b->first;
 
    push_b(argv, a, b);
    push_b(argv, a, b);
    sort_max_three(argv, a, b);
    first_case_max_five()
} */