/*
Void

In C, there's a special type for function signatures: void. There are two primary ways you'll use void:

To explicitly state that a function takes no arguments:

int get_integer(void) {
    return 42;
}

When a function doesn't return anything:

void print_integer(int x) {
    printf("this is an int: %d", x);
}

It's important to note that void in C is not like None in Python. It's not a value that can be assigned to a variable. It's just a way to say that a function doesn't return anything or doesn't take any arguments.

Question: Which is not valid ?

a) void x = None;
b) void ssh_terminal_print( char *address);
c) void print_hello(void);
d) int get_number(void);

Answer: a
*/