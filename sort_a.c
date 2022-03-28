/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:28:20 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/28 15:59:07 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

#include "../include/push_swap.h"
#include "../libft/libft.h"

int sort_max_three(char **argv, t_stack *a, t_stack *b)
{
    elem *x; 
    elem *z;
  
    x = a->first;
    z = a->last;

    if (x->value < x->next->value)
    {
       first_case(x, z, argv, a);
    }
    if(x->next->value < x->value)
    {
        second_case(x, z, argv, a);
    }

    return(0);
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

void second_case(elem *x, elem *z, char **argv, t_stack *a)
{
    if(x->value < z->value)
    {
        swap_a(a);
    }
    if(x->next->value < z->value && z->value < x->value)
    {
        rotate_a(a, argv);
    }
    if(z->value < x->next->value)
    {
        swap_a(a);
        reverse_rotate_a(a, argv);
    }
}

bool check_sort(t_stack a)
{
    int j;
    int i;
    i = 1;
    j = stacklen(a);
    elem *pelem = a.first;
    while(i < j)
    {
        if(pelem->value > pelem->next->value)
        {
            ft_putendl_fd("ko", 1);
            return false;
        }
            
        pelem = pelem->next;
        j--;
    }
    ft_putendl_fd("ok", 1);
    return true;
}

/* void print_stack(t_stack a)
{
    elem pelem = a.first;
    while(pelem)
    {
        ft_putnbr_fd(pelem->value, 2);
        ft_putchar_fd('\n', 2);
        pelem = pelem->next; 
    }
}*/