#include <stdio.h>
int main(){
float x , y , a , b ;
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("Enter the value of y:");
    scanf("%f",&y);
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:"); 
    scanf("%f",&b);

 if ( x * y == 0 && a * b ==0 ) {
    printf("The two point is ORIGIN");
 }

 else if  ( x * y == 0){
        printf("The 1st point is'nt situated is any quardent");
      }
       else if ( a * b == 0){
        printf("The 2nd point is'nt situated is any quardent");
      }
      else if (( x > 0 && y > 0 && a > 0 && b > 0 ) ||
      ( x < 0 && y > 0 && a < 0 && b > 0 ) ||
      ( x > 0 && y < 0 && a > 0 && b < 0 ) ||
      ( x < 0 && y < 0 && a < 0 && b > 0 ) ){
        printf("They are in same quardent");
      }
    
     
else {
       printf("They are'nt in same quardent");
}     
     return 0;
}