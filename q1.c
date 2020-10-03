/*
-------------------------------------
File:   q1.c
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
    
   int first, second; //two integer inputs
   int add, subtract, multiply, divideInt, modulo; // integer results
   float divideNorm; //normal division result
 
    //First user prompt
   printf("Enter the first number\n");
   scanf("%d", &first);
    //Second user prompt
   printf("Enter the second number\n");
   scanf("%d", &second);
 
  //operations
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divideInt = first / second;
   modulo = first % second;
   divideNorm = (float)first / (float)second; 

  //printing output
   printf("%d + %d = %d\n", first, second, add);
   printf("%d - %d = %d\n", first, second, subtract);
   printf("%d x %d = %d\n", first, second, multiply);
   printf("%d / %d = %d\n", first, second, divideInt);
   printf("%d %c %d = %d\n", first,'%', second, modulo);
   printf("%d / %d = %.2f\n", first, second, divideNorm);
 
   return 0;
}