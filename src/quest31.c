#include <stdio.h>


int fib(int N) {
  if (N == 1 || N == 2)
    return 1; 
  return fib(N - 1) + fib(N - 2);
}

int main() {
  int N;
    scanf("%d", &N); 
  for (int i = 1; i <= N; i++) 
    printf("%d", fib(i));
  getchar();
  return 0;
}
