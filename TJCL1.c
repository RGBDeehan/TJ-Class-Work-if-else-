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

// ANOTHER SOLUTION //

#include <stdio.h>
int main()
{
float x , y ,d ;
    printf("Enter the 1st nunber :");
    scanf("%f", &x);
    printf("Enter the 2nd number :");
    scanf("%f",&y);

d = x - y;

if(d < 0) {
    d = d * (-1);
}
   printf("The difference of the two number is : %f\n",d); 

return 0;
}
