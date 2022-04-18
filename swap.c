/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:50 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/16 16:15:57 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void swap_a(t_stack *a)
{
    elem tmp;
    if (a->first->next != NULL)
    {
        tmp.value = a->first->value;
        tmp.index = a->first->index;
        tmp.index_binaire = a->first->index_binaire;
        a->first->value = a->first->next->value;
        a->first->index = a->first->next->index;
        a->first->index_binaire = a->first->next->index_binaire;
        a->first->next->value = tmp.value;
        a->first->next->index = tmp.index;
        a->first->next->index_binaire = tmp.index_binaire;
        ft_putendl_fd("sa", 1);
    }
    
}

void swap_b(t_stack *b)
{
    elem tmp;
    if (b->first->next != NULL)
    {
        tmp.value = b->first->value;
        tmp.index = b->first->index;
        tmp.index_binaire = b->first->index_binaire;
        b->first->value = b->first->next->value;
        b->first->index = b->first->next->index;
        b->first->index_binaire = b->first->next->index_binaire;
        b->first->next->value = tmp.value;
        b->first->next->index = tmp.index;
        b->first->next->index_binaire = tmp.index_binaire;
        ft_putendl_fd("sb", 1);
    }
    
}

void swap_ab(t_stack *a, t_stack *b)
{
    if ((a->first->next != NULL) &&  (b->first->next != NULL))
    {
        swap_a(a);
        swap_a(b);
        ft_putendl_fd("ss", 1);
    }
    
}

int pop_front(t_stack *a)
{
    int val;
    int ind;
    int *bin;
    elem *tmp = a->first;
    if(!tmp)
        return -1;
    val = tmp->value;
    ind = tmp->index;
    bin = tmp->index_binaire;
    a->first = tmp->next;
    if(a->first)
        a->first->prev = NULL;
    else
        a->last = NULL;
  // free(tmp);
    return val;
}

int pop_back(t_stack *a)
{
    int val;
    int ind;
    int *bin;
    elem *tmp = a->last;
    if(!tmp)
        return -1;
    val = tmp->value;
    ind = tmp->index;
    bin = tmp->index_binaire;
    a->last = tmp->prev;
    if(a->last)
        a->last->next = NULL;
    else a->first = NULL;
   //free(tmp);
    return val;
}



void reverse_rotate(t_stack *a, char **arg)
{
    int pop;

    pop = pop_back(a);
    push_front(arg, a, pop);
}
/*
 void ft_push_b(char **argv, t_stack *a, t_stack *b){
 void ft_pop(char **argv, t_stack *a){
    t_stack tmp;
    int i;
    int j;
    i = 1;
    j = 0;
    
    b->tab = (int *)malloc(sizeof(int) * (ft_tab_size(argv)- ft_tab_size(argv)- 1));
    if(!b->tab)
        exit(EXIT_FAILURE);
    b->tab(ft_tab_size(b->tab)++) = ft_atoi(argv[0]);
    ft_print_stack(t_stack b);
   
    
   
    
    a->tab = (int *)malloc(sizeof(int) * (ft_tab_size(argv)- 1));
    if(!a->tab)
        exit(EXIT_FAILURE);
    while(argv[i] != NULL){
        a->tab[j] = ft_atoi(argv[i]);
       // ft_putnbr_fd( a->tab[j], 2);
       // ft_putchar_fd('\n', 2);
        i++;
        j++;
    }
} */