#include <stdio.h>

int main() {
	int n,a,b;
	scanf("%d", &n);
	while(n){
	    scanf("%d %d", &a, &b);
	    int temp;
	    temp=(b-1)/a;
	    printf("%d\n", temp);
	    n--;
	}

}
