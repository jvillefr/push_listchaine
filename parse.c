/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:05:03 by jvillefr          #+#    #+#             */
/*   Updated: 2022/03/26 16:51:34 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/push_swap.h"

bool all_digit(char **argv)
{
    int i;
    int j;

    i = 0;

    while (argv[i] != NULL)
    {
        j = 0;
        if(argv[i][j] == '-')
            j++;
        while(argv[i][j] != '\0')
        {
            if(!ft_isdigit(argv[i][j])){
                ft_putstr_fd("Error digit\n", 2);
                return (false);
            }
            j++;
        }
        i++;
    }
    return (true);
}

bool is_dupli(char **argv){
    int i;
    int j;

    i = 0;
    while(argv[i]){
        j = i + 1;
        while(argv[j]){
            if(ft_atoi(argv[i]) != ft_atoi(argv[j]))
                j++;
            else{
                ft_putstr_fd("Error dupli\n", 2);
                return (false);
            }
                
        }
        i++;
    }
    return (true);
}

bool ft_int_range(char **argv)
{
    int i;
    
    i = 0;
    while(argv[i]){
      if(ft_atoi_l(argv[i]) > INT_MAX || ft_atoi_l(argv[i]) < INT_MIN){
          ft_putstr_fd("Error range \n", 2);
          return (true);
      }
        i++;  
    }
    return (false);
}

char **ft_is_split(char *argv){
    char **tab;

     tab = ft_split(argv, ' ');
        if(!tab)
            return NULL;
        else
            return (tab);
}

bool parse_input(char **argv){
    if(!all_digit(argv) || !is_dupli(argv))
        return (false);
    if(!ft_int_range(argv))
        return (false);
    else
        return (true);
}

