#include <stdio.h> 

int main(){ 

    int ageIn;  // declare variables            
    int result;

    printf("Please input your age: \n");    // output instruction
    scanf("%d", &ageIn);    // accept user input
    result = ageIn / 2 + 7; // process age
    printf("\nYour ideal partner's age is: %d years old", result);  // display output  

    return 0; 
}
