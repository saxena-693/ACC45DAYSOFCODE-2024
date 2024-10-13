#include <stdio.h>

int main() {
	 int t, n, notebooks;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        notebooks = (n * 1000) / 100;

        printf("%d\n", notebooks);
        
    }

    return 0;


}

