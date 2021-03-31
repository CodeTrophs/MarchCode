#include<stdio.h>
#include<string.h>

int countWords(char* s){
    int words=0, i=0;
    while(s[i] != '\0'){
        if(s[i]==' '){
            words++;
        }
        i++;
    }
    if(s[i-1]!=' ')
        words++;
    return words;
}

int main(){
    char s[100];
    printf("Enter String : ");
    gets(s);
    printf("No. of words in the string is : %d ",countWords(s));
}
