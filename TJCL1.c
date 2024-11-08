#include <stdio.h>
int main (){
float x , y ,d ;

printf("Enter the 1st number : ");
scanf("%f", & x );

printf("Enter the 2nd number : ");
scanf("%f", & y);

if ( x > y ) {
    d = x - y ;
} 
else { d = y - x; }

printf("Here's the difference of the given numbers : %f\n" , d );

return 0 ;
}