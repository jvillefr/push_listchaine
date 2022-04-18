/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ent_display.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:46 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/16 18:28:34 by jvillefr         ###   ########.fr       */
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
    //ft_tab_size(argv)
    elem *new;
    new = (elem *)malloc(sizeof(elem));
    if(!new)
        exit(EXIT_FAILURE);
    new->value = val;
    new->index = indexp_single(argv, a, val);
    new->index_binaire = bin(new->index);
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
    int i;
    
    i = ft_tab_size(argv);

    while(i > 0)
    {
        push_front(argv, a, ft_atoi(argv[i-1]));
       // ft_putnbr_fd( a->tab[j], 2);
       // ft_putchar_fd('\n', 2);
        i--;
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
    new = (elem *)malloc(sizeof(elem));
  // new = (elem *)malloc(sizeof(elem) * ft_tab_size(argv));
    if(!new)
        exit(EXIT_FAILURE);
    new->value = val;
    new->index = indexp_single(argv, a, val);
    new->index_binaire = bin(new->index);
    new->next = a->first;
    new->prev = NULL;      
    if(a->first)
        a->first->prev = new;
    else 
        a->last = new;
    a->first = new;
}



void view_inter(inter *p)
{
    while(p)
    {
        printf("%d\n",p->value);
        p = p->prev;
    }
}

void push_index_front(char **argv, t_stack *a, int val)
{
    elem *new;
    new = (elem *)malloc(sizeof(elem));
  // new = (elem *)malloc(sizeof(elem) * ft_tab_size(argv));
    if(!new)
        exit(EXIT_FAILURE);
    
    new->value = val;
    new->next = a->first;
    new->prev = NULL;      
    if(a->first)
        a->first->prev = new;
    else 
        a->last = new;
    a->first = new;
}