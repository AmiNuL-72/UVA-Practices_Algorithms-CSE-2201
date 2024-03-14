#include <stdio.h>

void decimalToTernary(int n) {
    int ternary[32];     
    if (n == 0) {
        printf("0\n");
        return;
    }
    int i=0,j;
    while (n > 0) {
        ternary[i] = n % 3;
        n /= 3;
        i++;
    }
    for ( j = i - 1; j >= 0; j--) {
        printf("%d", ternary[j]);
    }
    printf("\n");
}

int main() {
    int n;
    while(1){
        scanf("%d", &n);
        if(n<0) break;
        else decimalToTernary(n);
    }

    return 0;
}
