/*
Constants

So a variable's value can change:

int main() {
    int x = 5;
    x = 10; // this is ok
}

But what if we want to create a value that can't change? We can use the const type qualifier.

int main() {
    const int x = 5;
    x = 10; // error
}


// Question: Which properly declares a constant in C?

    a) int meaning_of_life = 42;
    b) int meaning_of_life = 42;
    c) constant int meaning_of_life = 42;
    d) const int meaning_of_life = 42;


Answer - d
*/
