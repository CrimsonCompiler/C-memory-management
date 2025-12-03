/*

Assignment

Run the code. Notice that it prints numbers from 5 to 1 in descending order. However, when the starting number is less than the ending number, it doesn't print anything because the condition of the while loop is never true. Modify the print_numbers_reverse function to use a do-while loop so that it always prints the starting number at least once, even if the condition is initially false.

*/

void print_numbers_reverse(int start, int end){
    do{
        printf("%d\n", start);
        start--;
    }while(start >= end);
}