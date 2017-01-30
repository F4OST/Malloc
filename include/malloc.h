/*
** malloc.h for malloc in /home/prost_m/Rendu/Semestre_4/PSU_2016_malloc/
**
** Made by Matthias Prost
** Login   <matthias.prost@epitech.eu>
**
** Started on  Mon Jan 30 14:18:39 2017 Matthias Prost
** Last update Mon Jan 30 17:30:58 2017 Matthias Prost
*/

#ifndef _MALLOC_H_
#define _MALLOC_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct s_list
{
  size_t		size;
  bool		free;
  struct s_list	*next;
} t_list;

t_list *head, *end;

// src/malloc.c
void	*malloc(size_t size);
t_list *get_block(size_t size);

// src/realloc.c
void	*realloc(void *ptr, size_t size)

// src/free.c
void	free(void *ptr);

#endif
