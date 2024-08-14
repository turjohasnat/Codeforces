//C Solution:
#include<stdio.h>
int main(){
    char word[123];
    int n;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ){
        scanf("%s", word);
        int length = 0;
        while (word[length] != 0 ){
            length++;
        }
        if ( length > 10 ) printf("%c%d%c\n",word[0], length-2, word[length-1]);
        else printf("%s\n",word);
    }
    return 0;
}
