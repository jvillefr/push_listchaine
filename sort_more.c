/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/14 17:32:27 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/push_swap.h"



void fonct(char **argv, t_stack *a, t_stack *b)
{
    push_b(argv, a, b);
    sort_max_three(argv, b, a);
    
}

int roll(char **argv, t_stack *a, t_stack *b, int max_i, int min_i)
{
    if(a->first->value == max_i || a->first->value == min_i)
    {
        return (0);
    }
    if(a->first->value < max_i && a->first->value > b->first->value)
    {
        if(a->first->value < b->last->value)
        {
            push_b(argv, a, b);
            return (1);
        }
        return (0);
    }
    else if(a->first->value > min_i && a->first->value < b->first->value)
    {
        if(a->first->value < b->last->value)
        {
            push_b(argv, a, b);
            return (1);
        }
        return (0);
    }
    /*else if(a->first->value < b->first->value && a->first->value > b->first->next->value)
    {
        rotate_b(b, argv);
        push_b(argv, a, b);
        reverse_rotate_b(b, argv);
        return (1);
    }*/
    else
    {
        return (0);
    }
}

int index_stack(t_stack a, t_stack c)
{
    int i;
    
    while(a.first)
    {
        if(c.first->value > a.first->value)
        {
            i++;
        }
            
        a.first = a.first->next;
    }
    return i;
}

void push_index(char **argv, t_stack *a, t_stack *c, t_stack b)
{
    int i;
    i = 0;
    while (b.first)
    {
        i = index_stack(b, b);
        push_back(argv, c, i);
        b.first = b.first->next;
    }
}

void print_index(t_stack a)
{
    elem *pelem = a.first;
    while(pelem)
    {
        ft_putnbr_fd(pelem->value, 2);
        ft_putchar_fd('\n', 2);
        pelem = pelem->next;
    }    
}



/*void sort_64()
while (a.first->value != min)
    {
        rotate_a(&a, argv);
    }
    push_b(argv, &a, &b);

    while (a.first->value != max)
    {
        rotate_a(&a, argv);
    }
    push_b(argv, &a, &b);
    
    

   
    while (a.first)
    {
        if (!roll(argv, &a, &b))
        {
            rotate_b(&b, argv);
        }
    }
    while (b.last->value != min)
    {
        rotate_b(&b, argv);
    }
    while (b.first)
    {
        push_a(argv, &a, &b);
    }*/

void indexp(char **argv, t_stack *c)
{
    int i;
    int j;
    int k;

    i = 0;
    while(argv[i])
    {
        k = 0;
        j = 0;
        while (argv[j])
        {
            if(ft_atoi(argv[i]) > ft_atoi(argv[j]))
                k++;
            j++;
        }
        push_back(argv, c, k);
        i++;
    }
}

void bin(int a, elem stack_c)
{
    int mod;
    int cot;
    
    
    elem->tab = malloc(sizeof(int) * 32)
    cot = a / 2;
    mod = a % 2;
    if(cot >= 1)
    {
        bin(cot);
    }
    printf("%d", mod);
}




      
