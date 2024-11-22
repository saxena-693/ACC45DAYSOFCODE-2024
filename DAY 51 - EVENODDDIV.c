#include <stdio.h>

int main() {
		int t = 0;
	scanf("%d",&t);
	while(t--){
	    int n = 0, odd = 0, even = 0;
	    scanf("%d",&n);
	    for(int i = 1; i<=n; i++){
	        if(n%i==0 && i%2==0){
	            even++;
	        }
	        if(n%i==0 && i%2!=0){
	            odd++;
	        }
	    }
	    if(even>odd){
	        printf("%d\n",1);
	    }
	    else if(even==odd){
	        printf("%d\n",0);
	    }
	    else{
	        printf("%d\n",-1);
	    }
	}
	return 0;

}

