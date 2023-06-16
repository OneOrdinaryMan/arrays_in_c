#ifndef LIB_H
#define LIB_H

#include <stdio.h>

typedef struct {
  int length;
  int *array_pointer;
} array;

void assign_index(array *, int, int);
int search(array *, int);
void swap(array *, int, int);
void left_rotate(array *);
void right_rotate(array *);
void cyclic_input(array *);
#endif
