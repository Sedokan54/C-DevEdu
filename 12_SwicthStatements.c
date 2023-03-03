#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using may "else if" statements
    //          allows a value to be tested dor equality against many cases.

    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    if(grade == 'A'){
        printf("Perfect!");
    }
    else if (grade == 'B')
    {
        printf("You did good!");
    }
    else if (grade == 'C')
    {
        printf("You did okay.");
    }
    else if (grade == 'D')
    {
        printf("At least it is not an F.");
    }
    else if (grade == 'F')
    {
        printf("You Failed!");
    }
    else{
        printf("That's not a valid grade.\n");
    }


    //instead of that, we can use this :

    switch (grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay.\n");
            break;
        case 'D':
            printf("At least it is not an F.\n");
            break;
        case 'F':
            printf("You Failed!\n");
            break;
        default:
            printf("That's not a valid grade.\n");            
    }
    

    
    
    
    





    return 0;
}