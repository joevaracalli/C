#include <stdio.h>

  int main(void)

  {

  float commission, rivalCommission, value, shares, pricePerShare;

  printf("Enter number of shares: ");
  printf("Enter number of price per shares: ");
  scanf(" %f%f ", &value , &shares);

  if (shares < 2000)
   rivalCommission = 33 + .03 * shares;
  else if (shares >= 2000)
   rivalCommission = 33 + .02 * shares;

  if (value < 2500.00f)
    commission = 30.00f + .017 * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .011f * value;
  else
    commission = 255.00f + .0009f * value;

   if (commission < 39.00f)
    commission = 39.00;

	printf(" The orginal brokers commission is : %.2f\n", commission);
  printf("The rival brokers commission is: %.2f\n", rivalCommission);

	return 0;

	}
