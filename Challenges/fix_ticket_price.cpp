#include <iostream>
using namespace std;

int calculate_ticket_price(int age, int is_student) {
    int price = 10;
    if(age < 0){
        price = -1;
    }
    else if(age >= 0 && age <= 12){
        price = 5;
    }
    else if(age >= 13 && age <= 17){
        price = 8;
    }
    else if(age >= 65 && age <= 120){
        price = 6;
    }
    else if(is_student == 1 && age >= 18 && age <= 25){
        price = 7;
    }
    return price;
}

int main() {
    int age;
    int is_student;
    cin >> age >> is_student;
    cout << calculate_ticket_price(age, is_student) << endl;
    return 0;
}

/*

Ticket Rules

Given two inputs:

    age — an int (the rider's age)
    is_student — an int (use 1 for student, 0 for not a student)

Return the ticket price as an int number of coins using these rules in this order:

    If age is less than 0, return -1 (this means the input is invalid).
    Children (age 0 to 12, inclusive) pay 5 coins.
    Teens (age 13 to 17, inclusive) pay 8 coins.
    Seniors (age 65 or older) pay 6 coins.
    All other adults pay 10 coins.
    Student discount: If the rider is a student (is_student == 1) and their age is between 18 and 25 (inclusive), they pay 7 coins instead of the normal adult price.
        This discount only applies to young adults. Children, teens, and seniors do not get this student price.


*/
  

/*

What You Need to Fix

Open exercise.c and fix the calculate_ticket_price function so that:

    Negative ages return -1.
    Children, teens, adults, and seniors get the correct prices.
    Only students between age 18 and 25 (inclusive) get the student price of 7 coins.
    The if / else if logic does not let later rules accidentally overwrite earlier ones.

Do not change the function name or its parameters. Just fix the logic using if, else if, else, and comparison operators like ==, <, <=, >, >=.

*/


/*

calculate_ticket_price(10, 0);  // child, not a student -> 5
calculate_ticket_price(16, 1);  // teen student -> 8 (no extra discount)
calculate_ticket_price(20, 1);  // young adult student -> 7
calculate_ticket_price(70, 0);  // senior -> 6
calculate_ticket_price(-3, 0);  // invalid age -> -1
*/