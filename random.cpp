#include<bits/stdc++.h>
using namespace std;
void print_queue(queue<int> q){
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
  cout<<endl;
}
int main(){
  queue<int> q1;
  q1.push(2);
  q1.push(3);
  q1.push(5);
  queue<int> q2;
  q2.push(3);
  q2.push(5);
  q2.push(7);
  print_queue(q1);
  print_queue(q2);
  q1.swap(q2);
  print_queue(q1);
  print_queue(q2);
  return 0;
  

}
