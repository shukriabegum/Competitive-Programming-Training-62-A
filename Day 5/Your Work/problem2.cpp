#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()




int main() {
    optimize();
    
   string s;
   cin >> s;
   
   int i = 0 ;
   int j = s.size()-1;
   bool is_palindrome = true;

   while(i<j){

    if ( s[i] != s[j]){
        is_palindrome = false ;
        break;
    }
    i++,j--;

   }

   if(is_palindrome == true){
    cout<<"The string is a palindrome. \n";
   }
   else{
    cout<<"The string is Not a palindrome.\n";
   }
    
    return 0;
}