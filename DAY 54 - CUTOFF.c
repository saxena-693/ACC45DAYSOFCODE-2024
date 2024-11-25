#include <stdio.h>

int main() {
    	int t;
	scanf("%d",&t);
	while(t--){
	    int N,X,temp;
	    scanf("%d %d",&N,&X);
	    int arr[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<N;i++){
	        for(int j=i+1;j<N;j++){
	            if(arr[i]>arr[j]){
	                temp=arr[i];
	                arr[i]=arr[j];
	                arr[j]=temp;
	            }
	        }
	    }
	    printf("%d\n",arr[N-X]-1);
	}
	return 0;
}
