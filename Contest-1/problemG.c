#include <stdio.h>
int main()
{
    long long eyes;
    long long mouth;
    long long body;
    scanf("%lld %lld %lld", &eyes, &mouth, &body);
    if(eyes==0 && body==0){
        printf("0");
    }
    long long a = eyes;
    if(mouth<a) a = mouth;
    if(body<a) a = body;
    eyes-=a;
    mouth-=a;
    body-=a;
    long long b = eyes/2;
    if(body<b) b = body;
    a += b;
    printf("%lld",a);
}
