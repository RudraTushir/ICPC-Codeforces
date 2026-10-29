#include <stdio.h>
 
int main() {
    int x,n;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        scanf("%d", &n);
        long long m = 1;
        for (int i = 1; i <= n; i++) {
            m = m * i;
        }
         printf("%lld\n", m);
    }
}
