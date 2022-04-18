/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:54 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/16 19:39:41 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include <stdio.h>

typedef struct elem
{
   int value;
   int index;
   int *index_binaire;
   struct elem *prev;
   struct elem *next;
} elem;
typedef struct inter
{
   int value;
   struct inter *prev;
   struct inter *next;
} inter;

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

int sort_max_three(char **argv, t_stack *a, t_stack *b);
void first_case_max_three(elem *x, elem *z, char **argv, t_stack *a);
void second_case_max_three(elem *x, elem *z, char **argv, t_stack *a);
bool check_sort(t_stack a);


int sort_max_five(char **argv, t_stack *a, t_stack *b);
int push_max_one(char **argv, int index, t_stack *a, t_stack *b);
void start_from_z(char **argv, int index, t_stack *a, t_stack *b);
int find_max_index(t_stack a);
int find_max_nbr(t_stack a);
int push_max_two(char **argv, int index, t_stack *a, t_stack *b);

void fonct(char **argv, t_stack *a, t_stack *b);

int roll(char **argv, t_stack *a, t_stack *b, int max_i, int min_i);
int find_min_nbr(t_stack a);
int find_pindex(t_stack a, int i);
int *bin(int a);
void indexp(char **argv, t_stack *c);
void view_inter(inter *p);
int indexp_single(char **argv, t_stack *c, int val);
void print_index(t_stack a);
void print_index_binaire(t_stack a);

int quantity_of_zero_on_bit_index(t_stack a, int index_bit);
int quantity_of_one_on_bit_index(t_stack a, int index_bit);
void push_zero_bit(char **argv, t_stack *a, t_stack *b, int index_bit);
void sort_small(char **argv, t_stack *a, t_stack *b);
void put_all_in_main_stack(char **argv, t_stack *a, t_stack *b);
void sort_big(char **argv, t_stack *a, t_stack *b);

# endif