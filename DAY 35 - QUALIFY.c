#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int a,b,x;
	    scanf("%d %d %d",&x,&a,&b);
	    if((a+b*2)>=x)
	        printf("Qualify\n");
	   else
	    printf("NotQualify\n");
	}
	return 0;

}

