#include <stdio.h> 
int main () {
float x , y ;
    printf("Enter the length of the note book : ");
    scanf("%f",&x);

    printf("Enter the width of the note book : ");
    scanf("%f",&y);

if (x == y) {
    printf("The note book is Square.");
}
else {
    printf("The note book is Rectangle.");
}



return 0 ;    
}