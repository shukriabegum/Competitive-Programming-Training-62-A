#include<bits\stdc++.h>
using namespace std;

int binarySearch(vector<int>& v,int target){
    int l = 0,r = v.size()-1;

    while(l<=r){
        int mid = (l+r)/2;

        if(v[mid]<target){
            l= mid+1;
        }
        else if(v[mid]>target){
        
           r = mid - 1;
        }   
        else
         {
            return mid ;
          }
    }
    return -1;
}
int main(){
    int n,target;
    cin >> n >> target;
    vector<int>v(n);
    for(int i = 0;i<v.size();i++){
        cin>> v[i];
    }

    sort(v.begin(),v.end());

    int index = binarySearch(v,target);
    if(index != -1){
        cout<< "Found at index " <<index <<"\n";

    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}