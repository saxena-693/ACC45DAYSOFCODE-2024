#include <stdio.h>

int main() {
	int i,t,n,arr[1000],max,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    max=0;
	    scanf("%d",&n);
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    for(j=0;j<n;j++)
	    {
	        if(arr[j]!=0)
	        max=j;
	    }
	    printf("%d\n",max);
	    
	}
	return 0;

}

