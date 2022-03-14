#include "libft/libft.h"
#include "push_swap_utils.h"
#include <limits.h>

typedef struct s_stack
{
   int *tab;
   int size;
} t_stack;


int main (int argc, char **argv)
{
    t_stack a;
    t_stack b;

    argv++;
    if(argc == 1)
        return (0);
    if(argc == 2)
        argv = ft_is_split(argv[0]); /* free me after running....*/
    if(!parse_input(argv))
        return (true);
    a.tab = (int *)malloc(sizeof(int) * ft_tab_size(argv));
    
    

}
