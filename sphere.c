#include <stdio.h>

#define Pi 3.14252

int main(void)
{
   float volume, radius;
   printf("Enter the radius: "");
   scanf("%f", &radius);
   volume = (4.0f/3.0f*Pi*radius*radius*radius);
   printf("The volume is: %0.2f\n" , volume);
   return 0;
}
