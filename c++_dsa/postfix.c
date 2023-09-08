#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[100];
int top=-1;
void push(char c){
    if(top==99)
    {    
        return;
    }
    top++;
    stack[top]=c;
}
char top_pst(){
    if(top==-1){
        return 0;
    }
    return stack[top];
}
void pop(){
    if(top==-1){
        printf("the stack is empty\n");
    }
    top--;
}
int precedence(char ch){
    switch (ch)
    {
    case '+':
    case '-':
         return 1;
    case '*':
    case '/':
         return 2;
    case '^':
         return 3;
    default:
        return -1;
    }
}
int main(){
    char array[100];
    char ans[100];
    int j=0;
    fgets(array,100,stdin);
    array[strlen(array)-1]='\0';
    puts(array);
    for(int i=0;array[i]!='\0';i++){
        if(isalpha(array[i])){
            ans[j++]=array[i];
        }else{
            if(array[i]=='('){
                push(array[i]);
            }else{
                if(array[i]==')'){
                    while(top_pst()!='('){
                        ans[j++]=top_pst();
                        pop();
                    }
                    pop();
                }else{
                    while(!(precedence(array[i])>precedence(top_pst()))){
                        ans[j++]=top_pst();
                        pop();
                    }
                    push(array[i]);
                }
            }
        }
        printf("%c\n",top_pst());

    }
    while(top!=-1){
        ans[j++]=top_pst();
        pop();
    }
    ans[j]='\0';
    printf("%s\n",ans);
    return 0;

}


