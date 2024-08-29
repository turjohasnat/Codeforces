//C Solution:
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int lateBro = 0;
    if (( a == 1 && b == 2 ) || ( a == 2 && b == 1 )) lateBro = 3;
    else if (( a == 2 && b == 3 ) || ( a == 3 && b == 2)) lateBro = 1;
    else lateBro = 2;
    printf("%d", lateBro);
    return 0;
}
