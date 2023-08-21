#include<iostream>
#include<unordered_map>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void print_unordered_Map(unordered_map<string,int>& map1){
    unordered_map<string,int>::iterator it=map1.begin();
    cout<<endl;
    for(;it!=map1.end();it++){
        cout<<"[ "<<it->first<<" = "<< (*it).second<<" ]"<<endl;
    }
    cout<<endl;
}
void print_info(unordered_map<string,int>& map1){
    cout<<endl;
    cout<<"[ size= "<<map1.size()<<" , "<<" Empty = "<<map1.empty()<<" max_size "<<map1.max_size()<<" ] "<<endl;
    cout<<endl;
}

int main(){
    unordered_map<string,int> Map1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        string s;
        cin.ignore();
        cout<<"Enter the key = ";
        getline(cin,s);
        cout<<"Enter the value = ";
        cin>>temp;
        Map1[s]=temp;
    }
    unordered_map<string,int> map2;
    map2={{"akash",1214},
          {"verma",1203},
          {"bajaj",1295},
          {"amber",1250}
    };
    pair<string,int> array1[]{
        make_pair("january",1),
        make_pair("feburaray",2),
        make_pair("march",3),
        make_pair("april",4),
        make_pair("may",5)
    };
    unordered_map<string,int> map3(array1,array1+sizeof(array1)/sizeof(array1[0]));
    cout<<"Enter the size of the vector ";
    cin>>n;
    vector<pair<string,int>> v1;
    for(int i=0;i<n;i++){
        pair<string,int> temp;
        cin.ignore();
        string s;
        int number;
        getline(cin,s);
        cin>>number;
        temp=make_pair(s,number);
        v1.push_back(temp);
    }
    unordered_map<string,int> map4(v1.begin(),v1.end());
    unordered_map<string,int> map5(Map1);
    int length;
    cout<<"Enter the size of the map ";
    cin>>length;
    unordered_map<string,int> map6;
    for(int i=0;i<length;i++){
        string s;
        int number;
        cin.ignore();
        getline(cin,s);
        cin>>number;
        map6.insert(make_pair(s,number));
    }
    print_unordered_Map(Map1);
    print_unordered_Map(map2);
    print_unordered_Map(map3);
    print_unordered_Map(map4);
    print_unordered_Map(map5);
    if(map2.find("animesh")==map2.end()){
        cout<<"YES it is not found in the map "<<endl;
    }
    if(map3.find("may")!=map3.end()){
        cout<<"YES it is present in the map "<<endl;
    }
    cout<<"Before erase we have ";
    print_unordered_Map(map3);
    print_info(map3);
    map3.erase("january"); //!remove key
    cout<<"after erase we have";
    print_unordered_Map(map3);
    print_info(map3);
    map3.erase(map3.begin(),map3.find("april"));//!or range 
    cout<<"after Another erase we have";
    print_unordered_Map(map3);
    print_info(map3);
    cout<<"Before erase we have ";
    print_unordered_Map(map2);
    print_info(map2);
    map2.erase(map2.find("verma"));//!iterating position
    print_unordered_Map(map2);
    print_info(map2);
    cout<<"Before clear we have ";
    print_info(map5);
    map5.clear();
    cout<<"After clear we have ";
    print_info(map5);
    return 0;
}