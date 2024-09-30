#include <stdio.h> 

int main(){
 //TODO: 97-122 = a-z ASCII character Value
 char ch;
 printf("Enter the character\n");
 scanf("%c", &ch);

 if(ch<=122 && ch>=97) {
    printf("it is lowercase");

 }
 else{
    printf("it is not lowercase");
 }
    return 0;
}