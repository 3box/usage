#include <stdio.h>

#include "usage.def"

int main(int argc, char** argv)
{
  int num = 1;
  int primes = 0;
  int limit = 100000;

  RESUSE res;
  usage_start(&res);


  for (num = 1; num <= limit; num++) { 
    int i = 2; 
    while(i <= num) { 
      if(num % i == 0)
        break;
      i++; 
    }
    if(i == num)
      primes++;
  }

  usage_end(&res);

  printf("Calculated all %d prime numbers under %d\n", primes, limit);
  usage_summary(&res);

  return 0;
}
