#include <stdio.h>

int main() {
    int t,a,b;
    scanf("%d", &t);
    while(t){
        scanf("%d %d", &a, &b);
        int d=a-b;
        if(d<0){
           d=d*-1; 
        }
        printf("%d\n", d);
        t--;
    }
}


