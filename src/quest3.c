#include <stdio.h>


int fib (int f); 
   

int main()
{
    int f, b;
    b =scanf("%d", &f);
    if (b ==1) 
	 printf("%d", fib(f));
	else printf("n/a");
    return 0;
}

int fib(int f) {
	if (f==0) 
	return 0;
	if (f==1)
 	return 1;
        return fib(f-1) + fib(f-2);
 }


