#include<bits\stdc++.h>
using namespace std;
int main(){
    string b = "Shukria";
   
    //reverse
   
    cout<<b<<endl;
    reverse(b.begin(),b.end());
    cout<<b<<endl;

    //sort
    sort(b.begin(),b.end());
    cout<<b<<endl;

    sort(b.begin()+3,b.begin()+6);
    cout << b<<endl;


    //count
    string c ="shukriaaaa";
    int cot= 0;
    for(int i =0;i<c.size();i++){
if (c[i]=='a'){
    cot++;
}

    }
    cout<<cot<<endl;
    int cnt = count (c.begin(),c.end(),'a');
    cout<<cnt<<endl;

    



}