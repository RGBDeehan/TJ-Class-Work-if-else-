#include <stdio.h> 
int main() {
float x , y ,z ;
    printf("Enter the 1st angle of the triangle: ");
    scanf("%f",&x);

    printf("Enter the 2nd angle of the triangle: ");
    scanf("%f",&y);
    
    printf("Enter the 3rd angle of the triangle: ");
    scanf("%f",&z);

    if ( x == 90 || y == 90 || z == 90){
        printf("The triangle is RIGHT");
    }
    else if ( x > 90 || y > 90 || z > 90) {
        printf("The triangle is OBTUSE");
    }
    else if ( x < 90 || y < 90 || z < 90) {
        printf("The triangle is ACUTE");
    }

    return 0;
}