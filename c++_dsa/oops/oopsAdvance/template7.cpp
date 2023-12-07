#include<iostream>
using namespace std;
template <typename T,int max>
class vector{
    public:
        T arr[max];
        int size=max;
    vector(){
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int sum(){
        int sum=0;
        for(int i=0;i<max;i++){
            sum+=arr[i];
        }
        return sum;
    }
};
int main(){
    vector<int,5> vec;
    vec.display();
    cout<<vec.sum()<<endl;
    return 0;
}