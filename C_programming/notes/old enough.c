//IG 6th Condidtionals notes
#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    printf("How old are you: ");
    scanf("%d", &age);
   
     if(age >= 18){
        printf("you are old enough to vote!\n");
     }else if(age == 16){
        printf("your are old enough to drive!\n");
     }else if(age == 15){
        printf("you are old enough to get your permit!");
     }else if(age >= 5){
        printf("your are old enough to go to school!");

     }else{
        printf("you arent old enough to do anything on this list \n");

    
    
    }

    

    
    

    

    return 0;
}