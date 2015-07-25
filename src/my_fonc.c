/*
** my_fonc.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_bsq
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Sat Jan 17 12:43:14 2015 Julien Karst
** Last update Sat Jan 17 12:44:37 2015 Julien Karst
*/

#include "bsq.h"

void	my_open(t_all *a)
{
  if ((a->fd = open(a->argv[1], O_RDONLY)) == -1)
    my_exit("Error -> open failed");
}

void	my_close(t_all *a)
{
  if (close(a->fd) == -1)
    my_exit("Error -> close failed");
}

int	my_read(t_all *a)
{
  int	i;

  if (( i = read(a->fd, &(a->c), 1)) == -1)
    my_exit("Error -> read failed");
  return (i);
}
