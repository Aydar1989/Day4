iinclude <stdio.h>
#include <stdlib.h>
 
int fib(int n,int a, int b) {
    int f;
    if(n==0) return a;
    else if(n==1) return b;
    else
    {
        f = fib(n-1,a,b)+fib(n-2,a,b);
        printf("%d\n", f);
        return f;
    }
}
int main()
{
    int n;
    while(1)
    {
        if (!scanf("%d", &n) || (n<=2 || n>2000000))
        {
            fflush(stdin);
            continue;
        }
        fflush(stdin);
        break;
    }
    fib(n, 0, 1);
    return 0;
}


