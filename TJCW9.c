#include <stdio.h>
int main () {
float x , y ;
    printf("Enter your annual income:");
    scanf("%f",&x);

if( x <= 500000 ) {
    y = 0;
}
else if ( x > 500000 && x <= 800000 ){
    y = (x-500000) * 0.1;
}
else if ( x > 800000 && x <= 2000000) {
    y = (x-800000) * 0.2 + (300000*0.1);
}
else {
    y = (x-2000000) * 0.3 + (1200000*0.2)+ (300000*0.1);
}

printf("Your income tax is : %.2f\n",y);

    return 0;
}