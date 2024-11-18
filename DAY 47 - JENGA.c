#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n, x;
	    scanf("%d %d", &n, &x);
	    if(x >= n)
	    {
	        if((n%x == 0) || (x%n == 0))
	        {
	            printf("YES\n");
	        }
	        else
	        {
	            printf("NO\n");
	        }
	    }
	    else
	    printf("NO\n");
	}
	return 0;
}
		
