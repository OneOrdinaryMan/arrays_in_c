# Arrays in C
Arrays in c are just pointers. They don't contain the size of the array. Therefore the array will be passed to struct along with the length of the array to reduce arguments
to the function. Functions applicable to array are,

- [x] Assign index
- [ ] Search
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
## Swap
## Left rotate
## Right rotate
## Cyclic input
# Licence
The project is licenced under <mark> GNU GPL V3.0</mark> licence. Feel free to use this project.
