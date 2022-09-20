Task 0: function that takes a pointer to an int as parameter and updates the value it points to to 98.
Prototype: void reset_to_98(int *n);


Task 1: unction that swaps the values of two integers.
Prototype: void swap_int(int *a, int *b);


Task 2: function that returns the length of a string.
Prototype: int _strlen(char *s);

Task 3: function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);


Task 4: function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);


Task 5: function that reverses a string.
Prototype: void rev_string(char *s);


Task6: function that prints every other character of a string, starting with the first character, followed by a new line.
Prototype: void puts2(char *str);



Task 7: function that prints half of a string, followed by a new line.
Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2


Task 8: function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n);


Task 9: function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
Return value: the pointer to dest


Task 10: function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.





