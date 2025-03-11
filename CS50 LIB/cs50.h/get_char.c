//get_char -prompt a user for a char 
//header file is 
#include <cs50.h>
char get_char(string prompt,..... );
/*
This function prompts the user for a char.
If the user inputs more or less than one char, the function prompts the user again.
This function expects at least one argument, prompt.
 If prompt contains any format codes, a la printf, this function accepts additional arguments as well, one per format code.
*/
//Return Value
//This function returns the user`s input as a char
/*

*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Input: ");
// declare variable of type char with name c
// this variable will be defined as function that implemented in the cs50 standard lib 
//this function to be used we need to implement the lib include<cs50.h>
//this funtion called get_char and it will prompt : and take input from user 
    printf("Output: %c.\n", c);
}
