/*
** main.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_bsq/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Jan 12 13:38:39 2015 Julien Karst
** Last update Fri Jan 23 10:11:25 2015 Julien Karst
*/

#include "bsq.h"

int	main(int ac, char **argv)
{
  t_all	a;

  if (ac <= 1)
    my_exit("Error -> No file, exemple : ./bsq file.txt");
  initvar(&(a.x), &(a.y), &(a.t), &(a.c));
  a.argv = argv;
  malloc_tab(&a);
  put_in_tab(&a);
  algo(&a);
  if (gere_error(&a))
    aff_res(&a);
  else
    my_exit("Error -> No square found");
  free(a.tab);
}

void	initvar(int *a, int *b, int *c, char *d)
{
  *a = -1;
  *b = -1;
  *c = 0;
  *d = 1;
}
