# Arrays in C
Arrays in c are just pointers. They don't contain the size of the array. Therefore the array will be passed to struct along with the length of the array to reduce arguments
to the function. Functions applicable to array are,

- [x] Assign index
- [x] Search
- [x] Swap
- [x] Left rotate
- [x] Right rotate
- [x] Cyclic input
## Assign index
Assigns the index the value given. If index is greater than the size of the array, returns with out of bounds error.

__Psuedo Code__
```c
void assign_index(array *input_array, int index, int value) {
  if (index >= input_array->length) {
    printf("Index out of bounds\n");
    return;
  }
  input_array->array_pointer[index] = value;
}
```
## Search
Does a linear search across the array. Returns -1 if value not found.

__Psuedo Code__
```c
int search(array *input_array, int value) {
  for (int i = 0; i < input_array->length; i++) {
    if (input_array->array_pointer[i] == value) {
      return i;
    }
  }
  return -1;
}
```
## Swap
Swaps the elements in the two positions. If any of the positions are greater than or equal to the length, returns with out of bounds error.

__Psuedo Code__
```c
void swap(array *input_array, int index_1, int index_2) {
  if (index_1 >= input_array->length || index_2 >= input_array->length) {
    printf("Index out of bounds\n");
    return;
  }
  int temp = input_array->array_pointer[index_1];
  input_array->array_pointer[index_1] = input_array->array_pointer[index_2];
  input_array->array_pointer[index_2] = temp;
}
```
## Left rotate
Rotates the array to left.

__Psuedo Code__
```c
void left_rotate(array *input_array) {
  int temp = input_array->array_pointer[0];
  for (int i = 0; i < input_array->length - 1; i++) {
    input_array->array_pointer[i] = input_array->array_pointer[i + 1];
  }
  input_array->array_pointer[input_array->length - 1] = temp;
}
```
## Right rotate
Rotates the array to right.

__Psuedo Code__
```c
void right_rotate(array *input_array) {
  int temp = input_array->array_pointer[input_array->length - 1];
  for (int i = input_array->length - 1; i > 0; i--) {
    input_array->array_pointer[i] = input_array->array_pointer[i - 1];
  }
  input_array->array_pointer[0] = temp;
}
```
## Cyclic input
adds the user input cyclically until EOF to the array.

__Psuedo Code__
```c
void cyclic_input(array *input_array) {
  int value;
  int i = 0;
  while (scanf("%d", &value) != EOF) {
    i %= input_array->length;
    input_array->array_pointer[i] = value;
    i++;
  }
}
```
# Licence
The project is licenced under <mark> GNU GPL V3.0</mark> licence. Feel free to use this project.
