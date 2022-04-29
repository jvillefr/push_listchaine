/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:46 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/29 15:53:46 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	push_back(char **argv, t_stack *a, int val)
{
	t_elem	*new;

	new = (t_elem *)malloc(sizeof(t_elem));
	if (!new)
		exit(EXIT_FAILURE);
	new->value = val;
	new->index = indexp_single(argv, val);
	new->index_binaire = index_to_binary(new->index);
	new->prev = a->last;
	new->next = NULL;
	if (a->last)
		a->last->next = new;
	else
		a->first = new;
	a->last = new;
}

void	push_front(char **argv, t_stack *a, int val)
{
	t_elem	*new;

	new = (t_elem *)malloc(sizeof(t_elem));
	if (!new)
		exit(EXIT_FAILURE);
	new->value = val;
	new->index = indexp_single(argv, val);
	new->index_binaire = index_to_binary(new->index);
	new->next = a->first;
	new->prev = NULL;
	if (a->first)
		a->first->prev = new;
	else
		a->last = new;
	a->first = new;
}

void	clear_stack(t_stack *a)
{
	t_elem	*pelem;

	pelem = a->first;
	while (pelem)
	{
		pop_front(a);
		pelem = pelem->next;
	}

}

void	clear_argv(char **s, size_t n)
{
	size_t	i;
	char	**str;

	i = 0;
	str = (char **)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	s = str;
}
