/*
** put_in_tab.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_bsq/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Jan 12 17:02:05 2015 Julien Karst
** Last update Thu Jan 15 11:24:57 2015 Julien Karst
*/

#include "bsq.h"

void	put_in_tab(t_all *a)
{
  int	x;
  int	y;
  int	i;

  x = 0;
  y = 0;
  my_open(a);
  my_read(a);
  while (a->c != '\n')
    my_read(a);
  while ((i = my_read(a)) != 0)
    {
      if (a->c == '\n')
	{
	  y++;
	  x = 0;
	}
      if (a->c == '.' || a->c == 'o')
	{
	  a->tab[y][x] = a->c;
	  x++;
	}
    }
}
