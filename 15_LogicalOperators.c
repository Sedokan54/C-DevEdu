#include <stdio.h>
#include <stdbool.h>

int main(){

    // AND
    // logical operators = && (AND) checks if two conditions are true

    float temp = 25;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("\nThe weather is good.");
    }
    else
    {
        printf("\nThe weather is bad");
    }
    

    // OR
    // logical operators = || (OR) checks if at least one condition is true

    if (temp <= 0 || temp >= 30)
    {
        printf("\nThe weather is bad.");
    }
    else{
        printf("\nThe weather is good.");
    }

    // NOT
    // logical operators = ! (NOT) reverses the state of a conition

    bool sunnya = true;

    if (!sunnya)
    {
        printf("\nIt's cloudy outside.");
    }
    else
    {
        printf("\nIt's sunny outside.");
    }
    
    
    






    return 0;
}