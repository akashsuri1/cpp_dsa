#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void print_stack(stack<int> st){
    cout<<endl;
    cout<<"THE STACK IS "<<endl;
    for(;!(st.empty());){
        cout<<st.top()<<endl;
        st.pop(); 
    }
    cout<<endl;
    //$ this should work because we are working with pass by value in which the value is copied in another by using copy constructor 
}
//? function overloading  
void print_stack(stack<string> st){
    cout<<endl;
    cout<<"THE STACK IS "<<endl;
    for(;!(st.empty());){
        cout<<st.top()<<endl;
        st.pop(); 
    }
    cout<<endl;
}
void print_info(stack<int>& st){
    cout<<"[ size = "<<st.size()<<" empty = "<<st.empty()<<" ]"<<endl;
}
void print_info(stack<string>& st){
    cout<<"[ size = "<<st.size()<<" empty = "<<st.empty()<<" ]"<<endl;
}
int main(){
    int n;
    cout<<"Enter the no of enterie\'s ";
    cin>>n;
    stack<int> s1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s1.push(temp);
    }
    cout<<"Before push the stack is "<<endl;
    print_stack(s1);
    print_info(s1);
    s1.push(4);
    cout<<"After push the stack is "<<endl;
    stack<int> s2(s1);
    while(!(s2.empty())){
        cout<<s2.top()<<endl;
        s2.pop();
    }
    print_info(s1);
    cout<<"Before pop the stack is "<<endl;
    print_stack(s1);
    print_info(s1);
    s1.pop();
    cout<<"After pop the stack is "<<endl;
    print_stack(s1);
    print_info(s1);
    stack<string> languages;
    cout<<"Enter the no of items you want to add "<<endl;
    cin>>n;
    cin.ignore();
    string lang;
    for(int i=0;i<n;i++){
        getline(cin,lang);
        languages.push(lang);
    }
    print_stack(languages);
    print_info(languages);
    cout<<"Printing info for an empty stack "<<endl;
    print_info(s2);
    return 0;
}
