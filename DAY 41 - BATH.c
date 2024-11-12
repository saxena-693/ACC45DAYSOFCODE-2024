#include <stdio.h>

int main() {
	int t;
    scanf("%d", &t);
    while(t!=0)
    {
        int x,y;
        scanf("%d %d", &x, &y);
        printf("%d \n",((x)/(2*y)));
        t--;
    }
	return 0;

}

