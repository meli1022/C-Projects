/*
-------------------------------------
File:   q2.c
Project: pint7880_Quiz1
-------------------------------------
Author:  Melissa Pinto
ID:      190647880
Email:   pint7880@mylaurier.ca
Version  2020/09/18
-------------------------------------
 */

#include <stdio.h>
int main()
{
    char input; //user input
    
    printf("Enter any character: "); // user prompt
    scanf("%c", &input);

    if (isalpha(input)) { //if input is a letter
        if(isupper(input)){ // if letter is uppercase
            printf("Upper case character was entered");
        }
        else if (islower(input)) { // if letter is lowercase
            printf("Lower case character was entered");
        }
    }
    else if (isdigit(input)) { // if input is a number
        printf("Number was entered");
    }
    
    return 0;
}