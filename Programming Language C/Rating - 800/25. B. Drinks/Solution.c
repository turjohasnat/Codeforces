//C Solution:
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sum = 0;
    for ( int i = 0; i < n; i++ ){
        double juice;
        scanf("%lf", &juice);

        sum += juice;
    }
    double avg = sum / n;
    printf("%.12lf", avg);
    
    return 0;
}