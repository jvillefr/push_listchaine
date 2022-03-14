#include "libft/libft.h"
#include "push_swap_utils.h"

bool ft_all_digit(char **argv)
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

bool ft_dupli(char **argv){
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