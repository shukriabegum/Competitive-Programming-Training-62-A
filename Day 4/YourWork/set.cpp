#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
    int n;
    cin>> n;
    set<int>s;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        s.insert(x);

    }

    cout<<"Total unique elements: "<<s.size()<<"\n";

    cout<< "Elements in sorted order:";
    for(int x : s){
        cout<<x<<" ";
    }
    cout<<endl;
 // statement e bola hoyese je jodi element tahke 1 return koro otherwise 0.If we use find but find() cann't return 1 or 0 so we use count .Although set store value uniquely and every count must 1

    int target ;
    cin >> target ;

    if(s.count(target)){
        cout<<target << "  is present in the set." << "\n";

    }
    else{
        cout<<target<< " is not present in the set."<<"\n";

    }
    return 0 ;
  
}
