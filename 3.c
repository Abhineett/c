#include <stdio.h>

long long HCF(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return HCF(b, a % b);
}





int main()
{
    int a = 15, b = 20;
    printf("HCF of a and b is\n");
    printf("%d",HCF(a, b));
    return 0;
}
