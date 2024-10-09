#include <stdio.h>

int main() {
    int t,x,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&x);
                if(x<(n-x)){
                    printf("%d\n",x);
                    
                }
                else{
                    printf("%d\n",(n-x));
                }

    }
	
	return 0;
}

