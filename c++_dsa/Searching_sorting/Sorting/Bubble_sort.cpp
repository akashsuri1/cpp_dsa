#include<iostreeam>
using namespace std;
void Bubble_sort(vector<int>& array,int n){
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
void Print_array(vector<int>& array,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,temp;
    cin>>n;
    vector<int>& array;
    for(int i=0;i<n;i++){
        cin>>temp;
        array.push_back(temp);
    }
    Bubble_sort(array,n);
    Print_array(array,n);
    return 0;
}