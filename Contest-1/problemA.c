#include <stdio.h>
 
int main() {
    float x, p;
    scanf("%f %f", &x, &p); 
    float o = (p * 100.0) / (100.0 - x);
    printf("%.2f\n", o);
 
    return 0;
}