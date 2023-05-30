#include<stdio.h>
void lowtoup(char array[]);
void hightolow(char array[]);
void togglecase(char array[]);
void counter(char array[]);
void vowel(char array[]);
int main(){
    char array[1000];
    gets(array);
    togglecase(array);
    puts(array);
    lowtoup(array);
    puts(array);
    hightolow(array);
    puts(array);
    counter(array);
    vowel(array);
    return 0;
}
void lowtoup(char array[]){
    for(int j=0;array[j]!='\0';j++){
        if(array[j]>='a' && array[j]<='z'){
            array[j]=array[j]-32;
        }
    
    }
}
void hightolow(char array[]){
    for(int j=0;array[j]!='\0';j++){
        if(array[j]>='A' && array[j]<='Z'){
            array[j]=array[j]+32;
        }
    }
}
void togglecase(char array[]){
    for(int j=0;array[j]!='\0';j++){
        if(array[j]>='a' && array[j]<='z'){
            array[j]=array[j]-32;
        }else if(array[j]>='A' && array[j]<='Z'){
            array[j]=array[j]+32;
        }
    }

}
void counter(char array[]){
    int charcater,digit,special;
    charcater=digit=special=0;
    for(int j=0;array[j]!='\0';j++){
        if(array[j]>='a' && array[j]<='z'){
            charcater++;
        }else if(array[j]>='A' && array[j]<='Z'){
            charcater++;
        }else if(array[j]>='0' && array[j]<='9'){
            digit++;
        }else{
            special++;
        }
    }
    printf("%d %d %d\n",charcater,digit,special);
}
void vowel(char array[]){
    int vowel,consonant;
    vowel=consonant=0;
    for(int j=0;array[j]!='\0';j++){
        if(array[j]>='A' && array[j]<='Z'){
            array[j]+=32;
        }
        if(array[j]>='a' && array[j]<='z'){
            if(array[j]=='e'||array[j]=='a'||array[j]=='i'||array[j]=='o'||array[j]=='u'){
                vowel++;
            }else{
                consonant++;
            }
        }
    }
    printf("vowel=%d consonat=%d",vowel,consonant);
}