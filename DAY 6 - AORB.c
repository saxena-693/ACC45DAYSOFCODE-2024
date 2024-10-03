#include <stdio.h>

int main() {

	int n;
    scanf("%d", &n);
    int a,b,x,y;
    while(n){
        
        scanf("%d %d", &a, &b);
        
        x=((500-(a*2))+(1000-((a+b)*4)));
        y=((1000-(b*4))+(500-((a+b)*2)));
        
        if(y>x){
            printf("%d\n", y);
        }else{
            printf("%d\n", x);
        }
    n--;
}
}