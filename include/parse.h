#ifndef PARSE_H
# define PARSE_H

#include <stdbool.h>
#include <limits.h>

typedef struct s_stack
{
   int *tab;
   int size;
} t_stack;

bool ft_all_digit(char **argv);
bool ft_dupli(char **argv);
bool ft_int_range(char **argv);
char **ft_is_split(char *argv);
bool parse_input(char **argv);
void ft_pop(char **argv, t_stack *a);
void ft_print_stack(t_stack a);
void ft_swap_a(t_stack a);
void ft_push_b(char **argv, t_stack *a, t_stack *b);

# endif
