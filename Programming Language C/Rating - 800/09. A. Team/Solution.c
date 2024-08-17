//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int count = 0;
    for ( int i = 0; i < n; i++ ){
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);

        if (( petya == 1 && vasya == 1)||(petya == 1 && tonya == 1)||(vasya == 1 && tonya == 1)){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
