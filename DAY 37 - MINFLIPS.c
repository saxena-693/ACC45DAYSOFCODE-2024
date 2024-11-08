#include <stdio.h>

int main() {
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{int n,count=0;
	scanf("%d",&n);
	int a[n];
	    for(int i=0;i<n;i++){
	      scanf("%d",&a[i]);
	      if(a[i]==1)
	      count++;
	       }
	if(n%2!=0)
	printf("-1\n");
	else
	printf("%d\n",abs(count-n/2));
	}
	return 0;

}

