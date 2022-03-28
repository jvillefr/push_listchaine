/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ent_display.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:46 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/26 23:45:41 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"


void init(t_stack *s)
{
    s->first = NULL;
    s->last = NULL;
}

void push_back(char **argv, t_stack *a, int val) /* use as push_back*/
{
    elem *new;
    new = (elem *)malloc(sizeof(elem) * ft_tab_size(argv));
    if(!new)
        exit(EXIT_FAILURE);
    new->value = val;
    new->prev = a->last;
    new->next = NULL;
    if(a->last)
        a->last->next = new;
    else
        a->first = new;
    a->last = new;
}

void push_user_input(char **argv, t_stack *a)
{
    size_t i;
    i = 0;
    
    //i = ft_tab_size(argv);

    while(argv[i])
    {
        push_back(argv, a, ft_atoi(argv[i]));
       // ft_putnbr_fd( a->tab[j], 2);
       // ft_putchar_fd('\n', 2);
        i++;
    }
}

void print_stack(t_stack a) /* clear char **argv from fucnton please */
{
    elem *pelem = a.first;
    while(pelem)
    {
        ft_putnbr_fd(pelem->value, 2);
        ft_putchar_fd('\n', 2);
        pelem = pelem->next;
    }
}

void push_front(char **argv, t_stack *a, int val)
{
    
   elem *new;
   new = (elem *)malloc(sizeof(elem) * ft_tab_size(argv));
   if(!new) exit(EXIT_FAILURE);
    
    new->value = val;
    new->next = a->first;
    new->prev = NULL;      
    if(a->first)
        a->first->prev = new;
    else 
        a->last = new;
    a->first = new;
}
