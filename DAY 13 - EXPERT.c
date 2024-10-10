#include <stdio.h>

int main() {
		int t;
	float x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%f %f",&x,&y);
	    if((y/x)*100>=50)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

