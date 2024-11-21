#include<stdio.h>
int main(){
    int i;
  //  loop to print number from 1 to 10
  for (i = 1; i <= 10; i++) {
    //if i is greater than 5, break the loop 
    if (i >5) {
        break;
    }
    printf ("%d ",i);
    }
    printf ("/nloop ended.\n");
    return 0;
}