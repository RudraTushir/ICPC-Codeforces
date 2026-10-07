#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    if(
        a == b && a > 0
    ){
        printf("YES");
    }
    else if(
        a == b + 1
    ){
        printf("YES");
    }
    else if(
        b == a + 1
    ){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
