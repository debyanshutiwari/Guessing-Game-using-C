#include<stdlib.h>
#include <stdio.h>
#include<time.h>

int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
   number=rand()%100+1;
  
   
   do{
       printf("Guess the number between 1 to 100\n");
       scanf("%d\n",&guess);
       if(guess>number){
           printf("Lower number please\n");
           
           
       }
       else if(guess<number){
           printf("higher  number please\n");
       }
       else{
           printf("You guessed in %d attempt\n");
       }
       nguesses++;
   }while(guess!=number); 
    return 0;
}
