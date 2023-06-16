# Arrays in C
Arrays in c are just pointers. They don't contain the size of the array. Therefore the array will be passed to struct along with the length of the array to reduce arguments
to the function. Functions applicable to array are,

- [x] Assign index
- [x] Search
- [ ] Swap
- [ ] Left rotate
- [ ] Right rotate
- [ ] Cyclic input
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
## Left rotate
## Right rotate
## Cyclic input
# Licence
The project is licenced under <mark> GNU GPL V3.0</mark> licence. Feel free to use this project.
