#include <stdio.h>
#include <stdlib.h>

int vogal(char str[]){
    char vogais[] = "aeiouAEIOU";
   // const int strLength = strlen(str);
    int count = 0;

    for(int i=0;str[i] != '\0';i++){
        for(int j=0;vogais[j] != '\0'; j++){
            if(vogais[j] == str[i]){
                count++;
            }
        }
    }

return count;
}

void main(){

    char teste[] = "TestEAXcSEWEGQ";

    int result = vogal(teste);

    printf("%d",result);

}