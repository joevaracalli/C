#include <stdio.h>
#include <math.h>

#define M_Pi 3.14159265358979323846

   int main(void)

   {

   float volume, radius, height;

   printf("Enter the radius and the height (r,h): ");
   scanf("%f,%f" , &radius, &height);

   if(radius >= 2 && height > radius )
   {
     volume = M_Pi*pow(radius,2)*height;
      printf("The volume is: %0.2f.\n", volume);
   }

   else if(height < radius ||  radius <= 2)
   {
     printf("The radius cannot be smaller than 2\n");
     printf("The height has to be bigger than the radius\n");
   }

   return 0;

   }
