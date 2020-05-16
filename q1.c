#include <stdio.h>

int main()
{
  // define an array to store the input in the array
  int store[10];

  // a loop asking for the input of 5 ints and storing them in the array
  for(int input = 0; input < 5; input++)
  {
    // ask user for input
    printf("Enter a number:\n");
    // stores input
    scanf("%d", &store[input]);
  }

  // creates a new line for more space
  printf("\n");

  // a loop for the out of the first 3 ints in the array
  for(int output = 0; output < 3; output++)
  {
    // outputs a int
    printf("%d\n", store[output]);
  }

  return 0;
}
