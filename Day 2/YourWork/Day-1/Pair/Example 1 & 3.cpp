#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p;
    p.first = 10;
    p.second = 17;
    cout<<p.first<< endl;
    cout<<p.second<<endl;

    pair< string,pair<int,double> > q;
    q.first = "Asif";
    q.second.first = 17;
    q.second.second = 3.85;

    cout << q.first <<endl;
    cout << q.second.first <<endl;
    cout << q.second.second <<endl;

    pair< pair <double,string>,pair<int,pair<int,double> > >r[50];
    r[0].first.first= 17;
    cout<<r[0].first.first<<endl;
    
}