//FIXME: Sometimes our program gets bigger in size and its not possible for a programmer to track which piece of code is doing what.


//TODO: What is a Function

// A function is a block of code which performs a particular task. A function can be reused by the programmer in a given program any number of times.

// Example and syntax of a function

#include <stdio.h> 

void display(); //TODO: Function Prototype
int main(){

int a;
display(); //TODO: Function call
    
    return 0;
}
void display(){ //TODO: Function Definition
    printf("Hi iam display");
}

//TODO: Function Prototype

//Function prototype is a way to tell the compiler about the function we are going to define in the program. Here void indicates that the function returns nothing.

//TODO: Function Call

// Function call is a way to tell the compiler to execute a function body at the time the call is made. Note :- That the progra execution starts from the main function in the sequence the instructions are written.

//TODO: Function Definition

// This part contains the exact set of instructions which are expected to be executed during the function call when a function is called from main(), the main function falls asleep and gets temporarily suspended. During this time the control goes to the function being called. When the function body is done executing main() resumes.