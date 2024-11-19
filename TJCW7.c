#include <stdio.h>
int main(){
int x , y ;
printf("Enter the value of x :");
scanf("%d",&x);

printf("Enter the value of y :");
scanf("%d",&y);

if( x > 0){
if ( y > 0)       {  printf("1st quadrant.");  }
else if ( y < 0)  {  printf("4th quadrant.");  }
else if ( y == 0) {  printf("+ve x-axis.");    }

}

else if( x < 0){
if ( y > 0)       {  printf("2nd quadrant.");  }
else if ( y < 0)  {  printf("3rd quadrant.");  }
else if ( y == 0) {  printf("-ve x-axis.");    }

}

else if( x == 0){
if ( y > 0)       {  printf("+ve y-axis");  }
else if ( y < 0)  {  printf("-ve y-axis");  }
else if ( y == 0) {  printf("ORIGIN");      }

}

return 0;
}
