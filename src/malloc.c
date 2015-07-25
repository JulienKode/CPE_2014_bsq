/*
** malloc.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_bsq/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Jan 12 16:59:15 2015 Julien Karst
** Last update Fri Jan 16 08:26:43 2015 Julien Karst
*/

#include "bsq.h"

void	count_ty(t_all *a, int s)
{
  char	*str;
  int	i;

  if ((str = malloc(s * sizeof(char))) == NULL)
    my_exit("Error -> Malloc failed");
  i = 0;
  my_open(a);
  while (a->c != '\n')
    {
      my_read(a);
      str[i] = a->c;
      i++;
    }
  str[i] = 0;
  a->c = 1;
  a->ty = my_get_nbr(str);
}

int	get_size_of_ty(t_all *a)
{
  int	s;

  s = 0;
  my_open(a);
  my_read(a);
  s++;
  while (a->c != '\n')
    {
      check_num(a);
      my_read(a);
      s++;
    }
  my_close(a);
  a->c = 1;
  return (s);
}

void	malloc_tab(t_all *a)
{
  int	s;

  s = get_size_of_ty(a);
  count_ty(a, s);
  count_tx(a);
  my_close(a);
  malloc_double_tab(a);
}

void	count_tx(t_all *a)
{
  char	c;

  if (read(a->fd, &c, 1) == -1)
    my_exit("Error -> read failed");
  c = 1;
  a->tx = 0;
  while (c != '\n')
    {
      if (read(a->fd, &c, 1) == -1)
	my_exit("Error -> read failed");
      a->tx += 1;
    }
  a->tx += 1;
}

void	malloc_double_tab(t_all *a)
{
  int	y;

  y = 0;
  if ((a->tab = malloc(a->ty * sizeof(char *))) == NULL)
    my_exit("Error -> malloc failed");
  while (y <= a->ty)
    {
      if ((a->tab[y] = malloc(sizeof(char) * a->tx)) == NULL)
	my_exit("Error -> malloc failed");
      y++;
    }
}
