#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    bool f=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            f=false;
            break;
        }
    }
    if(f==true){
        printf("YES");
    }else{
        printf("NO");
    }
}
