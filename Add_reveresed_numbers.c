#include <stdio.h>

// source: https://www.javatpoint.com/cpp-program-to-reverse-number
int reverseNum (int n) {
  int reverse = 0, rem;
  while (n != 0)
    {
      rem = n % 10;
      reverse = reverse * 10 + rem;
      n /= 10;
    }

  return reverse;
}

int main () {
  int n, k, f, result1 = 0, result2 = 0, i, j, revSums[10000], sum=0;
  scanf("%d", &n);
  for(i=0;i<n;i++) {
    scanf ("%d %d", &f, &k);
    result1 = reverseNum(f);
    result2 = reverseNum(k);
    sum = result1 + result2;
    revSums[i] = reverseNum(sum);
  }
  
   for(j=0;j<i;j++) { 
  printf ("%d", revSums[j]);
  if(i!=j) {
      printf("\n");
  }
   }
  return 0;
}
