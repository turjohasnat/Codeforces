//C Solution:
#include<stdio.h>
char string[1023];
int main(){
    fgets(string, 1023, stdin);
    if ( string[0] >= 'a' && string[0] <= 'z' ){
        string[0] -= 32;
    }
    printf("%s",string);
    return 0;
}