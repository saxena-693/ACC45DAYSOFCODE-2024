#include <stdio.h>

int main() {
     int T,X,Y,N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&N,&X,&Y);
        if(Y%X==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;

}

