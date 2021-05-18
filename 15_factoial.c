#include <stdio.h>

int main(void)

{
  int product = 1, x;

  while ( x >=0){

  printf("Enter a postive integer ( or enter a negative integer to end the program):");
  scanf("%d", &x );

    product = 1;

    if(x >=0)
    {
      for(int n = x; n >= 1; n--)
      {
      product  *= n;
      }

    printf("The factorial integer of %d: %d\n", x, product);

  }
}

printf("Thank you for using my software :) -");
}
