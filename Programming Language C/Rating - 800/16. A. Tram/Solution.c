//C Solution:
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int maxPassenger = 0;
    int currentPassenger = 0;
    for( int i = 0; i < n; i++ ){
        int exitPassengers, enterPassenger;
        scanf("%d %d", &exitPassengers, &enterPassenger);

        currentPassenger  -= exitPassengers;
        currentPassenger += enterPassenger;

        if ( maxPassenger < currentPassenger ) maxPassenger = currentPassenger;
    }

    printf("%d", maxPassenger);
    return 0;
}