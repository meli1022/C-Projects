/*
-------------------------------------
File:   Q1.c
Project: pint7880_Quiz2
-------------------------------------
Author:  Melissa Pinto
ID:      190647880
Email:   pint7880@mylaurier.ca
Version  2020/09/26
-------------------------------------
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[100];  //holds inputted string
    int  i,j,count,length; 

    printf("Enter a string : "); // gets input
    gets(str1); //stores input
     
    for(j=0;str1[j];j++); //iterate through string
	 length=j; // length of string is equal to the number of iterations
    
	printf("The count of each character in the string '%s' is: \n",str1);
 
    for(i=0;i<length;i++)  //iterate until value of length 
    {
     	count=1; 

    	if(str1[i])  
    	{
 		  for(j=i+1;j<length;j++)  //iterate from next character
	      {   
	    	
	        if(str1[i]==str1[j]) // if charcter equals next character
    	    {
                 count++; // increase count by one 
                 str1[j]='\0'; // terminate duplicate character
	     	}
	      }  
	      printf(" %c = %d \n",str1[i],count); // prints character and count
 
       }
	   
 	} 
 	 
    return 0;
}