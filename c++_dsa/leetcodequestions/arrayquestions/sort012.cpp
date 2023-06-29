#include <iostream>
using namespace std; 
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort012(int *arr, int n)
{  int nexto=0,nexttwo=n-1;
   int i=0;
   //was not able to find out this terminating poisition other was able to find out easily 
   while(i<=nexttwo){
       if(arr[i]==0){
           swap(&arr[nexto++],&arr[i++]);
        }
        //was not able to figure out to keep swapping 2 until we get an memeber other than two at that position if zero than move ahead
       else if(arr[i]==2){
           swap(&arr[nexttwo--],&arr[i]);
        
       }else{
       i++;
       }
   }
}
int main(){
    int n;
    cin>>n;
    int *numbers=new int[n];
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    sort012(numbers,n);
    for(int i=0;i<n;i++){
        cout<<numbers[i]<<' ';
    }
    cout<<endl;
    delete []numbers;
    //this is an way to delte dynamically allocated memory in heap
    return 0;
    //this is an three pointer approach to sort 0 1 and 2
}
// we can use auto keyword to define an variable type we dont know and can be used as an return type for an function 
//while we can also use set which conatins only distinct elements in it