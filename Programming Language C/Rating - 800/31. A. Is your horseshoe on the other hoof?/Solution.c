//C Solution:
#include <stdio.h>

int main() {
    int horseshoe1, horseshoe2, horseshoe3, horseshoe4;
    scanf("%d %d %d %d", &horseshoe1, &horseshoe2, &horseshoe3, &horseshoe4);

    int count = 0;
    if (horseshoe1 == horseshoe2 || horseshoe1 == horseshoe3 || horseshoe1 == horseshoe4){
        count++;
    }
    if (horseshoe2 == horseshoe3 || horseshoe2 == horseshoe4){
        count++;
    }
    if (horseshoe3 == horseshoe4){
        count++;
    }
    printf("%d", count);
    return 0;
}