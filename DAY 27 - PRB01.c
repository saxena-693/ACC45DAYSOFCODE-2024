#include <stdio.h>

int main() {
     int Test_Cases;
    scanf("%d",&Test_Cases);
    while(Test_Cases--)
    {
        int  a,b,c=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
      {
        if(a%b==0)
        {
            c++;
        }
      }
    if(c==2)
      printf("yes\n");
    else
      printf("no\n");
    }
    return 0;
}

