/*
** display.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_bsq
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Wed Jan 14 16:06:37 2015 Julien Karst
** Last update Thu Jan 15 08:46:51 2015 Julien Karst
*/

#include "bsq.h"

void    aff_res(t_all *a)
{
  int   y;
  int	x;

  y = 0;
  x = 0;
  while (y <= (a->ty - 1))
    {
      while (a->tab[y][x])
	{
	  if ((x >= a->x && x < (a->x + a->t)) && (y >= a->y && y < (a->y + a->t)))
	    {
	      my_putchar('x');
	      x++;
	    }
	  else
	    {
	      my_putchar(a->tab[y][x]);
	      x++;
	    }
	}
      my_str("\n");
      y++;
      x = 0;
    }
}

int	gere_error(t_all *a)
{
  if (a->x == -1)
    return (0);
  else if (a->y == -1)
    return (0);
  else if (a->t == 0)
    return (0);
  else
    return (1);
}
