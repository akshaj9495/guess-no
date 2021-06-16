#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number,guess,nguess=1;
    
    srand(time(0));
    number = rand()%100+1;
    
    do{
        printf("Guess the number between 1 and hundred\n");
        scanf("%d",&guess);
        if(guess == number){
            printf("You guessed it in %d attempts\n",nguess);
        }
            
        else if(guess > number){
            printf("please try smaller number\n"); 
        } 
           
         else{
                printf("please try bigger number\n");

         }
         nguess++;
         
    }while(guess!=number);
  
  return 0;
}