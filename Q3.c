// [3] check vovel or consonent
#include<stdio.h>
int main(){
    char word;
    printf("enter your word:");
    scanf("%c,&word");

    if (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
        printf("vovel\n",word);

    } else{
        prifntf("consonant\n");
         
    }
    return 0;
}
