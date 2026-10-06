#include<bits/stdc++.h>
using namespace std;
int main (){
    double n;
    cin>>n;

    double l =0,h=max(1.0,n);

    for (int iter =0 ;iter <100;iter++){
        double mid = (l+h)/2;

        if(mid * mid <=n ){
            l = mid;
        }
        else{
            h = mid;
        }

    }

    cout <<fixed <<setprecision(6);
    cout<<"Precise Square Root = " <<l <<endl;
    return 0;
}