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
void assign_index(array *input_array, int index, int value) {
  if (index >= input_array->length) {
    printf("Index out of bounds\n");
    return;
  }
  input_array->array_pointer[index] = value;
}
int search(array *input_array, int value) {
  for (int i = 0; i < input_array->length; i++) {
    if (input_array->array_pointer[i] == value) {
      return i;
    }
  }
  return -1;
}
void swap(array *, int, int);
void left_rotate(array *);
void right_rotate(array *);
void cyclic_input(array *);
