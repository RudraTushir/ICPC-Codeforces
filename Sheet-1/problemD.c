#include <stdio.h>
int main()
{
    int a ,b ,c ,d;
    scanf("%d %d %d %d", &a ,&b ,&c ,&d);
    long long multiply1 = 1ll*a*b;
    long long multiply2 = 1ll*c*d;
    long long diff = multiply1-multiply2;
    printf("Difference = %lld",diff);
}
