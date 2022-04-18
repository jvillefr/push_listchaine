/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:50 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/16 19:38:54 by jvillefr         ###   ########.fr       */
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
        ft_putnbr_fd(pelem->index, 2);
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
  
    int j;
    int k;
    int i;
    
    i = ft_tab_size(argv);
    
    while(i>0)
    {
        k = 0;
        j = ft_tab_size(argv);
        while (j>0)
        {
            if(ft_atoi(argv[i-1]) > ft_atoi(argv[j-1]))
                k++;
            j--;
        }

        push_front(argv, c, k);
        i--;
    }
}

int *bin(int a)
{
    int *s;
    int mod;
    int res;
    int i;
	res = a;
    i = 0;
	s = (int *)malloc(sizeof(s) * 10); // Allocation de la mémoire
    if (s == NULL)
    {
        exit(0);
    }
   	
    while(res != 0)
    {
		
    	mod = res % 2;
        s[i] = mod;
		i++;
		//printf("%d", mod);
		res = res / 2;
    }
   	return (s);
}

int  indexp_single(char **argv, t_stack *c, int val)
{
    int k;
    int i;
    
    i = ft_tab_size(argv);
    k = 0;
    while(i>0)
    {
        if(val > ft_atoi(argv[i-1]))
            k++;
        i--;
    }
    return (k);
}

void print_index_binaire(t_stack a)
{
    int i;
    elem *pelem = a.first;
    while(pelem)
    {
        i = 0;
        while (i < 10)
	    {
		    printf("%d", pelem->index_binaire[i]);
		    i++;
	    }
        printf("\n");
         pelem = pelem->next; 
    }  
    
}


int quantity_of_zero_on_bit_index(t_stack a, int index_bit)
{
    int i;
    i = 0;
    elem *pelem = a.first;
    while(pelem)
    {
        if(pelem->index_binaire[index_bit] == 0)
            i++;
        pelem = pelem->next;
    }
    return (i);
}

int quantity_of_one_on_bit_index(t_stack a, int index_bit)
{
    int i;
    i = stacklen(a) - quantity_of_zero_on_bit_index(a, index_bit);
    return (i);
}

void push_zero_bit(char **argv, t_stack *a, t_stack *b, int index_bit)
{
    //int i;
    int j;
    //elem *pelem = a->first;
    //i = 0;
    j =  ft_tab_size(argv);
    while (j > 0)
    {
        if(a->first->index_binaire[index_bit] == 0)
            push_b(argv, a, b);
        else
            rotate_a(a, argv);
        j--;
    }
}

void put_all_in_main_stack(char **argv, t_stack *a, t_stack *b)
{
    while (b->first)
    {
        push_a(argv, a, b);
        //b->first = b->first->next;
    }
}

void sort_small(char **argv, t_stack *a, t_stack *b)
{
    int round;
    round = 0;
        while (round < 7)
        {
            push_zero_bit(argv, a, b, round);
            put_all_in_main_stack(argv, a, b);
            round++;
        }
}

void sort_big(char **argv, t_stack *a, t_stack *b)
{
    int round;
    round = 0;
        while (round < 9)
        {
            push_zero_bit(argv, a, b, round);
            put_all_in_main_stack(argv, a, b);
            round++;
        }
}
