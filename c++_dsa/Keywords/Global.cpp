#include<iostream>
using namespace std;
int score=10;
void a(int i){
    cout<<i<<endl;
    cout<<"The score in a : "<<score<<endl;
    score++;
}
void b(int i){
    cout<<i<<endl;
    cout<<"The score in b : "<<score<<endl;
    score=score*10;
}
int main(){
    cout<<"Score : "<<score<<endl;
    a(5);
    b(5);
    cout<<"Score : "<<score<<endl;
    cout<<"We should not use global variable."<<endl
    <<"Beacuse any one could use it."<<endl;
    return 0;
}