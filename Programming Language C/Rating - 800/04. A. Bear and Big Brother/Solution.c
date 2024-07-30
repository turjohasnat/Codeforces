//C Solution:
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b );
    int count = 0;
    while ( 1 ){
        a *= 3;
        b *= 2;
        count++;
        if ( a > b ) break;
    }
    printf("%d", count);
    return 0;
}
