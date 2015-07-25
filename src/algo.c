/*
** algo.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_bsq/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Jan 13 15:07:59 2015 Julien Karst
** Last update Fri Jan 16 08:41:14 2015 Julien Karst
*/

#include "bsq.h"

void	algo(t_all *a)
{
  t_sqr	s;

  s.px = 0;
  s.py = 0;
  s.t = 1;
  while (a->tab[s.py][s.px])
    {
      while (a->tab[s.py][s.px])
	{
	  if (a->tab[s.py][s.px] == '.')
	    detection(a, &s);
	  s.px = s.px + 1;
	}
      s.py = s.py + 1;
      s.px = 0;
    }
}

void	detection(t_all *a, t_sqr *s)
{
  s->v = 1;
  while (s->v != 0)
    {
      s->v = check_max_sqr(a, s);
    }
  compare_var(a, s);
}

int	check_max_sqr(t_all *a, t_sqr *s)
{
  int	lx;
  int	ly;

  lx = 0;
  ly = 0;
  while (ly <= s->t)
    {
      while (lx <= s->t)
	{
	  if (a->tab[s->py + ly][s->px + lx] != '.')
	    return (0);
	  lx++;
	}
      ly++;
      lx = 0;
    }
  s->t = s->t + 1;
  return (1);
}

void	compare_var(t_all *a, t_sqr *s)
{
  if (s->t > a->t)
    {
      a->t = s->t;
      a->x = s->px;
      a->y = s->py;
    }
  s->t = a->t;
}
