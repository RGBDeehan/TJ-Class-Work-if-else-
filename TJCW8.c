#include <stdio.h>
int main() {
float x , y ;
    printf("Enter the amount of electricity usage in KWh :");
    scanf ("%f",&x);
if ( x < 200 ) {
     y = x * 8 ;
}
else if( x > 200 && x <= 400) {
        y = (x-200) * 12 + (200*8);   
}
else if( x > 400 && x <= 700) {
        y = (x-400) * 18 + (200*12)+(200*8);
}
else { y = (x-700) * 25 + (300*18) + (200*12) + (200*8);}

printf("Your Bill : %.2f\n",y);

    return 0;
}