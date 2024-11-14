#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) 
	{
	    int n,x,p;
	    scanf("%d%d%d",&n,&x,&p);
	    if((x*3+(n-x)*-1)>=p)
	    {
	        printf("PASS\n");
	        
	    }
	    else
	    {
	        printf("FAIL\n");
	        
	    }
	    
	}
	return 0;
}

