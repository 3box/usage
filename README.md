# usage
Easy way to get cpu usage to Linux C program

## How to use it

1. Include usage.def
2. Declare a `RESUSE` var
3. Start with `usage_start` function
4. Code your algorithm
5. Stop calling `usage_end` function
6. Print result calling `usage_summary` function

## Example:

```C
#include "usage.def"

int main(int argc, char** argv)
{
  RESUSE res;

  usage_start(&res);

  // your code here

  usage_end(&res);
  usage_summary(&res);

  return 0;
}
```

