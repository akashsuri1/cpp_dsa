#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isfull(int top, int size)
{
    if (top == size - 1)
    {
        return true;
    }
    return false;
}
bool isempty(int top)
{
    if (top == -1)
    {
        return true;
    }
    return false;
}
void push(int stack[], int *top_ptr, int size, int number)
{
    if (isfull(*top_ptr, size))
    {
        printf("the stack is full\n");
    }
    else
    {
        (*top_ptr)++;
        stack[*top_ptr] = number;
        printf("inserted successfully\n");
    }
}
int pop(int stack[], int *top_ptr)
{
    int temp;
    if (isempty(*top_ptr))
    {
        printf("the stack is empty\n");
        return -1;
    }
    else
    {
        temp = stack[*top_ptr];
        (*top_ptr)--;
        return temp;
    }
}
int peek(int stack[],int *top_ptr){
    if(isempty(*top_ptr)){
        printf("the stack is empty\n");
    }else{
        return stack[*top_ptr];
    }
}
void display(int stack[],int *top_ptr){
    if(isempty(*top_ptr)){
        printf("the stack is empty\n");
    }
    for(int i=0;i<=(*top_ptr);i++){
        printf(" %d ",stack[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100], top;
    int size=100;
    top = -1;
    pop(arr,&top);
    push(arr,&top,size,1);
    push(arr,&top,size,2);
    push(arr,&top,size,3);
    push(arr,&top,size,4);
    push(arr,&top,size,5);
    push(arr,&top,size,6);
    push(arr,&top,size,456);
    push(arr,&top,size,90);
    push(arr,&top,size,12);
    push(arr,&top,size,64);
    push(arr,&top,size,33);
    push(arr,&top,size,11);
    display(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    display(arr,&top);
    printf("%d",peek(arr,&top));
    printf("%d",peek(arr,&top));
    printf("%d",peek(arr,&top));
    return 0;

}