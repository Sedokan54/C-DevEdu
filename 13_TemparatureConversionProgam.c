#include <stdio.h>
#include <ctype.h>

int main(){
    // That code block is mine.
    // F to C : (F-32) x 0.5556
    // C to F : (C x 1.8) + 32
    // C to Kelvin : C + 273.15
    // Kelvin to C : K - 273.15
    
    char unit, cunit;
    float temp, ctemp;

    printf("Please enter for Celcius : C, Kelvin : K, Fahrenheit : F\nNote: Upper or lower case doesn't matter.\n");

    printf("\nEnter the unit of temparature you have: ");
    scanf("%c", &unit);
    printf("Enter the temparature value of yours: ");
    scanf("%f", &temp);
    printf("Which unit you want to convert: ");
    scanf(" %c", &cunit);

    unit = toupper(unit);
    cunit = toupper(cunit);

    if (unit == 'C')
    {
        if (cunit == 'F')
        {
            ctemp = temp*1.8+32;
            printf("%f", ctemp);
        }
        else if (cunit == 'K')
        {
            ctemp = temp + 273.15;
            printf("%f", ctemp);
        }
        else
        {
            printf("the value you entered is incorrect.");
        }        
    }
    else if (unit == 'F')
    {
        if (cunit == 'C')
        {
            ctemp = (temp-32)*0.5556;
            printf("%f", ctemp);
        }
        else if (cunit == 'K')
        {
            ctemp = (temp-32)*0.5556 + 273.15;
            printf("%f", ctemp);
        }
        else
        {
            printf("the value you entered is incorrect.");
        }               
    }
    else if (unit == 'K')
    {
        if (cunit == 'C')
        {
            ctemp = temp - 273.15;
            printf("%f", ctemp);
        }
        else if (cunit == 'F')
        {
            ctemp = (temp - 273.15)*1.8 + 32;
            printf("%f", ctemp);
        }
        else
        {
            printf("the value you entered is incorrect.");
        }      
    }
    else
    {
        printf("the value you entered is incorrect.");
    }


    // That code block is Brocode's. I changed my mind. Mine is better, so I won't write his code.
    // Brocode get value input from user in if statements, like;
    
    /*if(unit == 'C'){
        printf("Enter the temp in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("The temp in Fahrenheit is: %.1f",temp);
    }
    */

   // Actually I can upgrade my code with these logic and it would be more clear but I am lazy for that work.

    

    


    
    
    


    return 0;
}