#include <stdio.h>
int main (){
float x , y ;
    printf("Enter the value of x:");
    scanf("%f",&x);

    printf("Enter the value of y:");
    scanf("%f",&y);

    if ( x > 0 && y > 0) {
        printf("The point is situated in 1st quardent");
    }
    else if( x < 0 && y > 0) {
        printf("The point is situated in 2nd quardent");
    }
    else if ( x < 0 && y < 0) {
        printf("The point is situated in 3rd quardent");
    }
    else if ( x > 0 && y < 0) {
        printf("The point is situated in 4th quardent");
    }
    else if ( y == 0 && (x < 0 || x > 0)){
        printf("The point is situated on X axis");
    }
    else if ( x == 0 && y != 0 ){
        printf("The point is situated on Y axis");
    }
    else {printf("The point is ORIGIN");}


return 0;
}
