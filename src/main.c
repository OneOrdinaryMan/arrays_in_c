/*
    Arrays in C
    Copyright (C) 2023  Srivathsan Sudarsanan

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "lib/lib.h"
#include <stdio.h>
int main() {
  int length = 5;
  int input_array[length];
  array input;
  input.length = length;
  input.array_pointer = input_array;

  for (int i = 0; i < input.length; i++) {
    input.array_pointer[i] = 0;
  }

  assign_index(&input, 3, 7);
  swap(&input, 3, 2);
  printf("%d\n", search(&input, 7));
  print_array(&input);
  left_rotate(&input);
  print_array(&input);
  right_rotate(&input);
  print_array(&input);
  return 0;
}
