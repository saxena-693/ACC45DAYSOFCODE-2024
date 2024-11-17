#include <stdio.h>

void solv() {
	int x,y,r;
	    scanf("%d%d%d",&x,&y,&r);
	    int total = x+(r/30);
	    if (total%y>1){
	        printf("%d\n",(total/y)+1);
	    }
	    else{
	        printf("%d\n",(total/y)+(total%y));
	    }
	}
	int main(){
	    int r;
	    scanf("%d",&r);
	    while(r--){
	        solv();
	  }
	return 0;
}

