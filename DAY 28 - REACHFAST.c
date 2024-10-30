#include <stdio.h>

int main() {
		int kp;
    scanf("%d",&kp);
    while(kp--){
        int one,two,three;
        scanf("%d %d %d",&one,&two,&three);
        
        int sum=abs(one-two);
        if(one==two){
            printf("0\n");
            continue;
        }
         else if(sum%three==0){
            int b = (sum/three);
            printf("%d\n",b);
        }
        else if(sum<=three){
            printf("1\n");
            continue;
        }
        else{
            int a=((sum/three)+1);
            printf("%d\n",a);
        }
    }
	return 0;
}



