#include <bits/stdc++.h>
using namespace std;




 int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
  int q ;
  cin >> q; // number of queries
  
  queue<string> qe ;
  
  cout<<"Processing Queue Operations: "<<"\n";
  while (q--){
      int type ;
      cin>>type ;
      
      if(type == 1 ){
          // type 1 : person joins the queue
          
          string name;
          cin>> name;
          qe.push(name);
          cout<< name << " joined the line. "<<"\n";
          
      }
      else if (type == 2 )
      {
          // type 2 : Front person is served 
          
          if(qe.empty()){
              cout<<" Line is already empty!"<<"\n";
          }else{
              cout<< qe.front() << " has been served and left the line"<<"\n";
              qe.pop();
          }
      }else if (type == 3){
          // Type 3: check who is at the front 
          if (qe.empty()){
              cout<<"Nobody is in the line. "<<"\n";
          }
          
          else{
              cout<< "Next in line is : "<<qe.front()<<"\n";
          }
      }
  }
  cout<< "\nRemaining people in line : "<<qe.size()<<endl;
}
