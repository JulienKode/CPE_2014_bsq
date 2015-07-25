/*
** fonc.c for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_bsq/src
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Jan 12 13:38:46 2015 Julien Karst
** Last update Sat Jan 17 12:44:46 2015 Julien Karst
*/

#include "bsq.h"

void	check_num(t_all *a)
{
  if (!(a->c >= 48 && a->c <= 57))
    my_exit("Error -> No size of the file");
}

int             is_neg(char *str)
{
  int           i;
  int           c;

  i = 0;
  c = i;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
	c++;
      i++;
    }
  if (c % 2 != 0)
    return (1);
  else
    return (0);
}

int             is_num(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int             my_get_nbr(char *str)
{
  int           i;
  int           n;

  n = 0;
  i = n;
  while (is_num(str[i]) == 0)
    {
      i++;
    }
  while (is_num(str[i]) == 1)
    {
      n = (n * 10);
      n += (str[i] - 48);
      i++;
    }
  if (is_neg(str) == 1)
    n = -n;
  return (n);
}
