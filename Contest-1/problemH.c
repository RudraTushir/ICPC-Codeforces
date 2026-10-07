#include <stdio.h>
int main()
{
    int n;
    long long k;
    int a;
    scanf("%d %lld %d", &n, &k, &a);

    if(
         (n*k) % a != 0
    ){
        printf("double");
    }
    else if(
        -2147483648 <= (n*k)/a && (n*k)/a <= 2147483647
    ){
        printf("int");
    }
    else{
        printf("long long");
    }
}
