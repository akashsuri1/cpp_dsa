#include<iostream>
using namespace std;
template <typename T>
class vector{
    private:
        T* arr;
        int size;
    public:
        vector(int size){
            this->size=size;
            arr=new T[size];
        }
        void input();
        void print();
};
template<typename T>
void vector<T>::input(){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }    
}
//template specialization
template<>
void vector<char>::input(){
    cout<<"character array inputed : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }  
}
template<typename T>
void vector<T>::print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
}
template<>
void vector<char>::print(){
    cout<<"printing character array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int  main(){
    vector<char> vec(5);
    vec.input();
    vec.print();
    return 0;
}