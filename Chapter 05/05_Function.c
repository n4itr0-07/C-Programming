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

//TODO: Important Points 

// --> Execution of a C program starts from main()
// --> A  C program can have more than one function
// --> Every function gets called directly or indirectly from main().
// --> There are two types of functions in C lets talk about them.

//TODO: Types of Functions in C

/*
1> Library Function -> Commonly required Functions grouped together in a library file on disk.

2> User Defined Functions -> These are the functions declared and defined by the user.
*/

//TODO: Why Use Functions ?

/*
1) TO avoid repeating again and again.
2) To keep of what we are doing in a program.
3) To test and check logic independently.
*/

//TODO: Passing Values To Functions
// We can pass values to a function and can get a value in return from a function.

// int sum(int a, int b) -> Parameters

// The above prototype means that sum is a function which takes values a (of type int) and b(of type int) and returns a valueof type int.

//TODO: Notes :-

/*
1). Parameters are the values or variable placeholders in the function definition. eg a & b

2). Arguments are the actual values passed to the function to make a call. eg  2 & 3

3). A function can return only one value at a time.

4). If the passed variable is changed inside the function, the function call does not change the value in the calling function.

int change (int a) {
    a = 77;  ---> Misnomer which means wrong name
    return 0;
}
change is a function which changes a to 77 . Now if we call it from main like this 

int b = 22;
change (b);  ==> The value of b remains 22
printf("b is %d", b); ==> This prints "B is 22"

This happens because a copy of b is passed to the change function 
*/