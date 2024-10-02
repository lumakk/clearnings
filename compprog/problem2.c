#include <stdio.h> 

int main(){ 

    int hour;  // declare variables            
    int result;

    printf("Please input how many hours you wish to convert to minutes: \n");    // output instruction
    scanf("%d", &hour);    // accept user input
    result = hour * 60; // convert hours
    printf("\n%d hours is %d minutes", hour, result);  // display output  

    return 0; 
}
