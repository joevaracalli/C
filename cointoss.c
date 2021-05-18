#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip() {
  return rand() % 2;
}

int main(void){

  int heads, tails, counter, side;

  heads = 0;
  tails = 0;

  srand(time(NULL));

  for(counter = 1; counter <= 100; counter++){

    if (flip() == 0) {
      tails ++;
      printf("TAILS ");
    } else {
      heads ++;
      printf("HEADS ");
    }
  }


  printf("\n\nThe total number of heads was %d times\n", heads );
  printf("The total number of tails was %d times\n", tails );

  return 0;
}
