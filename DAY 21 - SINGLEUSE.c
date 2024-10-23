#include <stdio.h>

int main() {
	int t;
	scanf("%d\n",&t);
	while(t--){
	    int x,y,h;
	    scanf("%d %d %d",&h,&x,&y);
	  if((h-y)%x==0 ) printf("%d\n",(h-y)/x+1);
	  else printf("%d\n",((h-y)/x)+2);
	}
	return 0;

}

