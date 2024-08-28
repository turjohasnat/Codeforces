//C Solution:
#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int totalDrink = k * l;
    int totalLimes = c * d;

    int drinkToast = totalDrink / nl;
    int limeToast = totalLimes;
    int saltToast = p / np;

    int maxToast = drinkToast;
    if ( maxToast > limeToast ){
        maxToast = limeToast;
    }
    if ( maxToast > saltToast ){
        maxToast = saltToast;
    }

    int toastPerFriend = maxToast / n;
    printf("%d", toastPerFriend);
    return 0;
}