#include <bits/stdc++.h>
using namespace std;

int main() {
	   int n;
    scanf("%d", &n);  
    
    while (n--) {
        int people = 0;
        int price = 0;
        
        scanf("%d %d", &people, &price);
       
        int subscriptions = (people + 5) / 6;
        int total_price = subscriptions * price;
        
        
        printf("%d\n", total_price);
    }
    
    return 0;
}


