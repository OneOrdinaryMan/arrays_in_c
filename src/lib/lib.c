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

void swap(array *input_array, int index_1, int index_2) {
  if (index_1 >= input_array->length || index_2 >= input_array->length) {
    printf("Index out of bounds\n");
    return;
  }

  int temp = input_array->array_pointer[index_1];
  input_array->array_pointer[index_1] = input_array->array_pointer[index_2];
  input_array->array_pointer[index_2] = temp;
}

void left_rotate(array *input_array) {
  int temp = input_array->array_pointer[0];
  for (int i = 0; i < input_array->length - 1; i++) {
    input_array->array_pointer[i] = input_array->array_pointer[i + 1];
  }
  input_array->array_pointer[input_array->length - 1] = temp;
}

void right_rotate(array *input_array) {
  int temp = input_array->array_pointer[input_array->length - 1];

  for (int i = input_array->length - 1; i > 0; i--) {
    input_array->array_pointer[i] = input_array->array_pointer[i - 1];
  }

  input_array->array_pointer[0] = temp;
}

void cyclic_input(array *input_array) {
  int value;
  int i = 0;

  while (scanf("%d", &value) != EOF) {
    i %= input_array->length;
    input_array->array_pointer[i] = value;
    i++;
  }
}
