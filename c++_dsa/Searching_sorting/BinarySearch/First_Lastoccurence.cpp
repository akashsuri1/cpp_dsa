#include<iostream>
using namespace std;
void  Printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swaping=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                //inbuilt functiopn to swap
                swaping=true;
            }
        }
        if(swaping!=true){
            break;
        }
    }
}
int firstoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid =start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            //as we have to find the leftmost occurence so we will look definetly in the left part
            end=mid-1;
        }else if(arr[mid]<key){
            //we have to look in the right part now 
            start=mid+1;
        }else{
            //we have to look in left part
            end=mid-1;
        }
        mid=start+(end-start)/2;
        //recalculate new mid and also taking care of integer overflow
    }
    return ans;
}
int lastoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid =start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            //as we have to find the rightmost occurence so we will look definetly in the right part
            start=mid+1;
        }else if(arr[mid]<key){
            //we have to look in the right part now 
            start=mid+1;
        }else{
            //we have to look in left part
            end=mid-1;
        }
        mid=start+(end-start)/2;
        //recalculate new mid 
    }
    return ans;
}
int No_of_occurence(int arr[],int n,int key){
    int first=firstoccurence(arr,n,key);
    int last=lastoccurence(arr,n,key);
    if(first>=0){
        return last-first+1;
    }else{
        return 0;
    }
    //no of ocuurence code
}
pair<int,int> First_Last(int arr[],int n,int key){
    //pair is an specially designed class to hold two datatypes together 
    pair<int,int> p;
    p.first=firstoccurence(arr,n,key);
    p.second=lastoccurence(arr,n,key);
    return p;
}
int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    //dynamic allocation of an array on heap
    int* array=new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    Printarray(array,n);
    Bubblesort(array,n);
    Printarray(array,n);
    int key;
    cout<<"Enter the key ";
    cin>>key;
    pair<int,int> ans=First_Last(array,n,key);
    cout<<"First occurence = "<<ans.first<<endl;
    cout<<"Last occurence = "<<ans.second<<endl;
    cout<<"No of occurence = "<<No_of_occurence(array,n,key)<<endl;
    delete []array;
    //freeing the dynamically allocated memory
    return 0;
}
//this is an example of functional programming compeletely illustrating the algromithic approach
//we could solve this problem using linear search also but this way we have achieved an complexity of O(logn) thus an efficent solution  