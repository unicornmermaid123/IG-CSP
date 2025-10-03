// IG 6th Variables notes
#include <stdio.h>

int main(void){
    int num = 4;  
    float pi = 3.14;
    printf("%d", num);
    char grade = 'A'; //will only hold one letter
    char name[]= "Isabella";
    //bool passing = true;

    printf("What is your letter grade: ");
    scanf("%c", &grade);

    printf("%d\n", num);
    printf("%s has a %c grade in the class!\n", name, grade);

    return 0; 
}