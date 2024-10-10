#include <stdio.h> 

int main(){ 

    char name[80];
    int hourly_rate = 281;
    int work_hours;
    int gross_pay;
    float withhold_tax;
    float net_pay;

    printf("Please input your name:\n");
    scanf("%s", name);

    printf("Please input your hours worked:\n ");
    scanf("%d", &work_hours);

    gross_pay = hourly_rate * work_hours;
    withhold_tax = gross_pay * 0.32;
    net_pay = gross_pay - withhold_tax;

    printf("Hello, %s", name);
    printf("\nHourly Rate:\t\t %d \nWork Hours:\t\t %d \nGross Pay:\t\t %d \nWithholding Tax:\t %.2f \nNet Pay:\t\t %.2f", work_hours, hourly_rate, gross_pay, withhold_tax, net_pay);


    

    
    return 0;
}
