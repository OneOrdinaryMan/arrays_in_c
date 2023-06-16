#include <stdio.h>

typedef struct {
  int length;
  int *array_pointer;
} array;

void print_array(array *input_array) {
  for (int i = 0; i < input_array->length; i++) {
    printf("%d\t", input_array->array_pointer[i]);
  }
  printf("\n");
}
void assign_index(array *input_array, int index, int value);
int search(array *, int);
void swap(array *, int, int);
void left_rotate(array *);
void right_rotate(array *);
void cyclic_input(array *);
