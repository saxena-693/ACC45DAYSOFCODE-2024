#include <stdio.h>

int main() {
		int t,a,b,c,d,e,f;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    
	    e=a+c;
	    f=b+d;
	    
	    
	if(e==180 || f==180){
	    printf("YES\n");
	}
	else{
	    printf("NO\n");
	}
	}
	return 0;

}

