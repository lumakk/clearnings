#include <stdio.h> 

int main(){ 

    int x;              // declare integer value
    x = 123;            // initialize integer value
    int y = 321;        // declare and initialize integer value

    int age = 18;           // integers are whole numbers
    float gpa = 2.06;   // floating (points) are decimal numbers
    char grade = 'A';       // char are single characters
    char name[] = "lumakk";   // array of characters (There are no strings in c!)

    printf("Hello I am %s\n",name);
    printf("I am %i years old\n", age );
    printf("I have an average grade of %c or %f", grade, gpa);

    return 0; 
}
