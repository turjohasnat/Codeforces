//C Solution:
#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++ ){
        int n;
        scanf("%d", &n);

        int sum = 0;
        for ( int j = 1; j <= n; j++ ){
            int num;
            scanf("%d", &num);

            if ( j % 2 == 0 ){
                sum -= num;
            }
            else sum += num;
        }
        printf("%d\n", sum);
    }
    return 0;
}