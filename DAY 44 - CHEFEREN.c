#include <stdio.h>

int main() {
	    int t,n,a,b,x,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&a,&b);
        x=0;
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                x+=a;
            }
            else
            x+=b;
        }
        printf("%d\n",x);
    }
	return 0;

}

