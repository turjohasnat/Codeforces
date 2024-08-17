//C Solution:
#include<stdio.h>
#include<string.h>
char string[123];
int main(){
    fgets(string, 123, stdin);
    int length = strlen(string) - 1;
    int count = 0;
    for ( int i = 0; i < length; i++ ){
        int isUnique = 1;
        for ( int j = 0; j < i; j++ ){
            if ( string[i] == string[j] ){
                isUnique = 0;
                break;
            }
        }
        if (isUnique) count++;
    }
    ( count % 2 == 0 ) ? printf("CHAT WITH HER!") : printf("IGNORE HIM!");
    return 0;
}