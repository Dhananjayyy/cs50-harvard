// Dhananjay Yelwande
// 4 April 2019
// Problem Set 1 : Hello

// The program asks user for their name and says it

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Asks and stores user name
    string name = get_string("What is your name? \n");
    // Displays user name
    printf("hello, %s \n", name);
}
