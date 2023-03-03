#include <stdio.h>

int main(){

    // This is a comment.

    /*  escape sequence = character combination consisting of a backslash \ followed by a letter or combination of digits.
                          They specify actions within a line or string of text.
                          \n = newline
                          \t = tab

    printf("Hello There\n");
    printf("General Kenobi");


        variable = Allocated space in memory to store a value.
                   We refer to a variable's name to acces the stored value.
                   That variable now behaves as if it was the value it contains.
                   BUT we need to declare what type of data we are storing.
    */


   int x; //declaration
   x = 123; // initialization
   int y = 123; // declaration + initilization  
   int age = 21; // integer %d
   float gpa = 2.05; // floating point number %f
   char grade = 'C'; // single character %c
   char name[] = "Bro"; // array of characters %s   // C is not an object-orianted programming language. String's are object so we can't use them.
 

   printf("Hello %s\n",name);
   printf("You are %d years old\n",age);                
   printf("Your average grade is %c\n",grade);
   printf("Your gpa is %f",gpa);

    return 0;
}