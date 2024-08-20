//C Solution:
#include <stdio.h>

int main() {
    long long int num;
    scanf("%lld", &num);

    int luckyNumDigit = 0;
    while ( num > 0 ){
        int digit = num % 10;

        if ( digit == 4 || digit == 7 ){
            luckyNumDigit++;
        }

        num /= 10;
    }

    int isLucky = 1;
    if ( luckyNumDigit == 0 ) isLucky = 0;

    while ( luckyNumDigit > 0 ){
        int digit = luckyNumDigit % 10;

        if ( digit != 4 && digit != 7 ){
            isLucky = 0;
            break;
        }

        luckyNumDigit /= 10;
    }

    if ( isLucky ) printf("YES");
    else printf("NO");

    return 0;
}
