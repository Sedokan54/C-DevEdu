#include <stdio.h>
#include <string.h>

int main(){


    char name[25]; //bytes
    int age;

    printf("What's your name?\n");
    //scanf("%s", &name); // No white spaces
    fgets(name, 25, stdin); //stdin : standart input
    name[strlen(name)-1] = '\0'; // Advanced Information For Now. But it is basically deletes the fgets' function's "\n".   


    printf("\nHow old are you?\n");
    scanf("%d", &age);

    printf("Hello %s. How are you?\n", name);
    printf("You are %d years old", age);


    return 0;
}