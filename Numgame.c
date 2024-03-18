#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int num,usernum,nguess=1;
    
    srand(time(0));
    num = rand()%100+1;
    
    do{
    
    printf("Guess the number between 1 to 100\n");
    scanf("%d",&usernum);
    
    
        if(usernum > num)
        {
        
            printf("Lower number please!\n");
            
        }
        else if(usernum < num)
        {
        
            printf("Greater number please!\n");
         
        }
        else
        {
          
            printf("You guess the number in %d attempts.\n",nguess);
            
        }        
      nguess++;  
    } //do close
    while(usernum != num);
    
    
    return 0;
}