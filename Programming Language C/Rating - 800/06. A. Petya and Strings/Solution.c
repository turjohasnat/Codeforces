//C Solution:
#include<stdio.h>
#include<string.h>
char string_1[123], string_2[123];
int main(){
    fgets(string_1, 123, stdin);
    fgets(string_2, 123, stdin);
    for ( int i = 0; string_1[i] != 0; i++ ){
        if ( string_1[i] >= 'A' && string_1[i] <= 'Z' ){
            string_1[i] += 32;
        }
    }
    for ( int i = 0; string_2[i] != 0; i++ ){
        if ( string_2[i] >= 'A' && string_2[i] <= 'Z' ){
            string_2[i] += 32;
        }
    }
    int result = strcmp(string_1, string_2);
    if ( result < 0 ) printf("-1");
    else if ( result > 0 ) printf("1");
    else printf("0");
    return 0;
}
