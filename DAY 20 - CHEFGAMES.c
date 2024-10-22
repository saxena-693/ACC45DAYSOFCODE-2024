#include <stdio.h>

int main() {
		// your code goes here
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a==0 && b==0 && c==0 && d==0)
	    {
	        printf("IN\n");
	    }
	    else
	    {
	        printf("OUT\n");
	    }
	}
	return 0;

}

