#include <stdio.h>

int main() {
		int t,a,b,s,q;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&a,&b);
	    s=a+b;
	    q=21-s;
	    if(q>=0&&q<=10)
	    printf("%d\n",q);
	    else
	    printf("-1\n");
	    
	}
	return 0;

}

