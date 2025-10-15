//IG 6th family loop
#include <stdio.h>

int main(void){
    char* family[] = {"karen, Raul, mariel, isabella"};
    printf("My family members are:\n");
    for(int i = 0; i < 4; i++){
        printf("%s\n", family[i]);
}
    return 0;
}