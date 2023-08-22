#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
void print_map(map<string,string>& map1){
    map<string,string>::iterator it=map1.begin();
    cout<<endl;
    for(;it!=map1.end();it++){
        cout<<"[ "<<it->first<<" = "<<it->second<<" ] "<<endl;
    }
    cout<<endl;
}
void print_map_reverse(map<string,string>& map1){
    map<string,string>::reverse_iterator it=map1.rbegin();
    cout<<endl;
    for(;it!=map1.rend();it++){
        cout<<"[ "<<it->first<<" = "<<it->second<<" ] "<<endl;
    }
    cout<<endl;
}
void print_map_rev(map<string,string>& map1){
    map<string,string>::iterator it=--(map1.end());
    map<string,string>::iterator itr=--(map1.begin());
    cout<<endl;
    for(;it!=itr;it--){
        cout<<"[ "<<it->first<<" = "<<it->second<<" ] "<<endl;
    }
    cout<<endl;
}
void key_value(string& a,string& b,map<string,string>& map1){
      
        cout<<"Enter the key = ";
        getline(cin,a);
        cout<<"Enter the value = ";
        getline(cin,b);
        map1[a]=b;
        return;
}
//$ function overloading
void key_value(string& a,string& b){
        cout<<"Enter the key = ";
        getline(cin,a);
        cout<<"Enter the value = ";
        getline(cin,b);
}
void print_info(map<string,string>& a){
    cout<<endl;
    cout<<" [ size = "<<a.size()<<" empty = "<<a.empty()<<" ] "<<endl;
    cout<<endl;
}
void details(map<string,string>& a){
    print_map(a);
    print_info(a);
}
int main(){
    int n;
    cout<<"Enter the size of the map = ";
    cin>>n;
    string key,value;
    map<string,string> map1;
    //$ intiliaze using subscript operator and assignment operator
    cin.ignore();
    for(int i=0;i<n;i++){
        key_value(key,value,map1);
    }
    //$ intilaize using array list
    map<string,string> map2;
    map2={{"red","is vissible from larger distance"},
        {"yellow","is the colour of turmeric"},
        {"black","absorbs most radiation"},
        {"white ","is the perfect reflector of light"}};
    //$ intialize from pair of array
    pair<string,string> array[]={make_pair("janaury","first month"),
    make_pair("feburary","second month"), make_pair("march","third month")};
    map<string,string> map3(array,array+sizeof(array)/sizeof(array[0]));
    cout<<"Enter the size of the vector ";
    cin>>n;
    //$ intialize from vectors
    vector<pair<string,string>> v;
    pair<string,string> temp;
    cin.ignore();
    for(int i=0;i<n;i++){
        key_value(key,value);
        temp=make_pair(key,value);
        v.push_back(temp);
    }
    map<string,string> map4(v.begin(),v.end());
    //$from insert method
    cout<<"Enter the size of the map ";
    cin>>n;
    map<string,string> map5;
    cin.ignore();
    for(int i=0;i<n;i++){
        key_value(key,value);
        temp={key,value};
        map5.insert(temp);
    }
    map<string,string> map6(map1);
    print_map(map1);
    print_map_rev(map2);
    print_map_reverse(map3);
    print_map(map4);
    print_map_rev(map5);
    print_map(map6);
    if(map2.find("red")!=map2.end()){
        cout<<"yes it is present in the map"<<endl;
    }
    if(map3.find("april")==map3.end()){
        cout<<"YES it is not present in the map"<<endl;
    }
    cout<<"Before erase ";
    details(map3);
    map3.erase(map3.find("feburary"));
    cout<<"after erase ";
    details(map3);
    cout<<"Before erase ";
    details(map2);
    map2.erase("black");
    cout<<"after erase ";
    details(map2);
    map2.erase(map2.find("yellow"),map2.find("white"));
    cout<<"after another erase ";
    details(map2);
    cout<<"Before clear ";
    print_info(map6); 
    map6.clear();
    cout<<"After the clear ";
    print_info(map6); 
    return 0;
}