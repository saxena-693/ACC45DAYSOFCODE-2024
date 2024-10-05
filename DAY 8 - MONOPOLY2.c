#include <stdio.h>

int main(void) {
	int t,a,b,c,d;
	scanf("%d",&t);
	while(t>0){
	    t--;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a>(b+c+d)  ||b>(a+c+d)  ||c>(b+a+d)  ||d>(b+c+a) ){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
return 0;
}
