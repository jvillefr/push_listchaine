/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:54 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/25 14:57:36 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>

typedef struct elem
{
   int value;
   struct elem *prev;
   struct elem *next;
} elem;

typedef struct 
{
   elem *first;
   elem *last;
} t_stack;


bool all_digit(char **argv);
bool is_dupli(char **argv);
bool ft_int_range(char **argv);
bool parse_input(char **argv);
void push_user_input(char **argv, t_stack *a);

char **ft_is_split(char *argv);

void swap_a(t_stack *a);
void swap_b(t_stack *b);
void swap_ab(t_stack *a, t_stack *b);

void push_a(char **argv, t_stack *a, t_stack *b);
void push_b(char **argv, t_stack *a, t_stack *b);

void rotate_a(t_stack *a, char **argv);
void rotate_b(t_stack *b, char **argv);
void rotate_ab(t_stack *a, t_stack *b, char **argv);
void reverse_rotate_a(t_stack *a, char **argv);
void reverse_rotate_b(t_stack *b, char **argv);
void reverse_rotate_ab(t_stack *a, t_stack *b, char **argv);

void print_stack(t_stack a);
void swap_a(t_stack *a);

void push_back(char **argv, t_stack *a, int val);
void init(t_stack *s);
int  pop_front(t_stack *a);
void push_front(char **argv, t_stack *a, int val);
int pop_back(t_stack *a);





int stacklen(t_stack a);
void push(char **argv, t_stack *a, t_stack *b);


# endif
