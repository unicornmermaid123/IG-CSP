//IG 6th Function notes
#include <stdio.h>

void birthday(char* name, int age){

    printf("happy birthday to youuuuu!\n");
    printf("happy birthday to youuuuu!\n");
    printf("happy birthday dear %s!\n", name);
    printf("happy birthday to youuuuu!\n");
    printf("happy birthday %s is now %d\n", name, age);
}

int add(int num_1, int num_2){
    return num_1 + num_2;
}

int main(void){
    birthday("victoria", 20);
    birthday("sophie", 67);
    birthday("charlie", 21);
    int addition = add(35,32);
    printf("%d\n", addition);
}
