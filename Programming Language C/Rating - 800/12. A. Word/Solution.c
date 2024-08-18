//C Solution:
#include <stdio.h>
#include<string.h>

const int max = 123;

int main() {
    char word[max];
    fgets(word, 123, stdin);

    int length = strlen(word) - 1;
    int count_upper = 0, count_lower = 0;

    for ( int i = 0; i < length; i++ ){
        if ( word[i] >= 'A' && word[i] <= 'Z' ) count_upper++;
        else if ( word[i] >= 'a' && word[i] <= 'z' ) count_lower++;
    }

    for ( int i = 0; i < length; i++ ){
        if ( count_upper > count_lower ){
            if ( word[i] >= 'a' && word[i] <= 'z' ){
                word[i] -= 32;
            }
        }
        else {
            if ( word[i] >= 'A' && word[i] <= 'Z' ){
                word[i] += 32;
            }
        }
    }
    printf("%s", word);
    return 0;
}