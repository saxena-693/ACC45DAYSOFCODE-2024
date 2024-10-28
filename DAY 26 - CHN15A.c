#include <stdio.h>

int main(void) 
{
	int i,t,n,k,j,val,count;
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    count=0;
	    scanf("%d %d",&n,&k);
	    int arr[n];
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&val);
	        arr[j] = val+k;
	    }
	    for(j=0;j<n;j++)
	    {
	        if(arr[j]%7==0)
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

