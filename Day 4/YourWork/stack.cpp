#include <bits/stdc++.h>
using namespace std;


bool solve(string s){
    stack<char>st;
    
    for(auto ch : s){
        if(ch=='(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        
        else {
            if(st.empty()) return false;//closing bracket with no open
            
            char top = st.top();
            
            if((ch == ')' && top =='(')||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '['))
                {
                    st.pop(); //match is found,remove opening bracket
                }
                else{
                    return false ; // match is not found 
                }
        }
    }
    
    return st.empty(); // if stack is empty ,all brackets were matched 
}

 int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
  int t ;
  cin >> t;
  
  while (t--){
      string s ;
      cin >> s;
      
      if(solve(s)){
          cout<<s << " -> Balanced "<<"\n";
      }
      else{
          cout<<s<<" -> Not Balanced "<<"\n";
      }
  }
}
