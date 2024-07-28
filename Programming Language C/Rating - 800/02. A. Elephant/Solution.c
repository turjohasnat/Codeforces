//C Solution:
#include<stdio.h>
int main(){
    int x, result;
    scanf("%d", &x);
    if ( x % 5 == 0 ) result = x/5;
    else result = x/5+1;
    printf("%d\n", result);
    return 0;
}