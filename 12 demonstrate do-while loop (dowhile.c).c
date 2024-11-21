#include<stdio.h>
int main (){
    int i = 1;
   // print numbers from 1 to 10 using a do-while loop 
   printf("Numbers from 1 to 10 :\n");
   do {
    printf("%d ", i);
    i++;
   } while (i <= 10);
   printf("/n");
    return 0; 
}