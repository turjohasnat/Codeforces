//C Solution:
#include <stdio.h>
int main() {
    int costPerBanana, initialDollars, numBananas;
    scanf("%d %d %d", &costPerBanana, &initialDollars, &numBananas);

    int totalCost = 0;
    for (int i = 1; i <= numBananas; i++) {
        totalCost += costPerBanana * i;
    }

    int borrowAmount = totalCost - initialDollars;
    if (borrowAmount < 0) {
        borrowAmount = 0;
    }
    printf("%d\n", borrowAmount);

    return 0;
}
