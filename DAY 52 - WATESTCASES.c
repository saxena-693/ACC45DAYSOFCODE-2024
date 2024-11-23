#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int s[n],cases=101;
	    char r[n];
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&s[j]);
	    }
	    scanf("%s",r);
	    for(int j=0;j<n;j++)
	    {
	        if(r[j]=='0' && s[j]<cases)
	        {
	            cases=s[j];
	        }
	    }
	    printf("%d\n",cases);
	}
	return 0;
}
