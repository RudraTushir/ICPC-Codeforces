#include <stdio.h>
int main()
{
    int n, x, y = 0;
    scanf("%d", &n);
    x = n;
    for (; n > 0; n = n / 10)
    {
        y = y * 10 + n % 10;
    }
    printf("%d\n", y);
    if (x == y)
        printf("YES");
    else
        printf("NO");
 
    return 0;
}
