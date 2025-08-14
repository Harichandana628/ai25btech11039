#include <stdio.h>
int main() {
    int num = 1, i;
    for(i=0;i<4;i++) num *= 25;
    for(i=0;i<3;i++) num /= 5;
    printf("%d\n", num);
    return 0;
}
