// IG 6th strings notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name [] = "isabella";
    char last_name[25];
    char full_name[100];

    printf("please tell me your last name:  \n");
    scanf("%s", last_name);

    strcat(name, " ");
    printf("[%s]", name);

     strcat(last_name, " ");
    printf("[%s]", last_name);



    return 0;
}