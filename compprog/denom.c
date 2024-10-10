#include <stdio.h> 

int main(){

    int cashonHand;
    int onethousand;
    int fivehundred;
    int onehundred;
    int fifty;
    int twenty;
    int ten;
    int five;
    int one;

    printf("Please input your cash in hand:\n");
    scanf("%d", &cashonHand);

    printf("Cash on hand: %d", cashonHand);

    onethousand = cashonHand / 1000;
    cashonHand %= 1000;

    fivehundred = cashonHand / 500;
    cashonHand %= 500;

    onehundred = cashonHand / 100;
    cashonHand %= 100;

    fifty = cashonHand / 50;
    cashonHand %= 50;

    twenty = cashonHand / 20;
    cashonHand %= 20;

    ten = cashonHand / 10;
    cashonHand %= 10;

    five = cashonHand / 5;
    cashonHand %= 5;

    one = cashonHand;

    printf("\n\nDenominations: \n1000 - %d \n500 - %d \n100 - %d \n50 - %d \n20 - %d \n10 - %d \n5 - %d \n1 - %d", onethousand, fivehundred, onehundred, fifty, twenty, ten, five, one);
    

    return 0;
}