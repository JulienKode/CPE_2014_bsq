/*
** bsq.h for  in /home/karst_j/Epitech/2014-2015/ProgElem/CPE_2014_bsq
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Jan 12 14:01:04 2015 Julien Karst
** Last update Fri Jan 23 10:12:53 2015 Julien Karst
*/

#ifndef BSQ_H_
# define BSQ_H_

#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct	s_all
{
  int		x;
  int		y;
  int		t;
  char		**tab;
  int		fd;
  int		tx;
  int		ty;
  char		**argv;
  char		c;
}		t_all;

typedef struct	s_sqr
{
  int		px;
  int		py;
  int		t;
  int		lx;
  int		ly;
  int		v;
}		t_sqr;

int		main(int ac, char **argv);
void		my_open(t_all *a);
void		my_putchar(char c);
int		my_strlen(char *str);
void		my_str(char *str);
void		my_exit(char *str);
int		my_read(t_all *a);
void		my_close(t_all *a);
void		malloc_double_tab(t_all *a);
void		count_tx(t_all *a);
void		malloc_tab(t_all *a);
void		put_in_tab(t_all *a);
void		algo(t_all *a);
void		detection(t_all *a, t_sqr *s);
int		check_max_sqr(t_all *a, t_sqr *s);
void		compare_var(t_all *a, t_sqr *s);
void		aff_res(t_all *a);
int		gere_error(t_all *a);
int		my_get_nbr(char *str);
void		count_ty(t_all *a, int s);
int		get_size_of_ty(t_all *a);
int		is_num(char l);
int		is_neg(char *str);
void		initvar(int *a, int *b, int *c, char *d);

#endif /* BSQ_H_ */
