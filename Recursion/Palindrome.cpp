// TUF
// Check Palindrome or Not
#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int n,int i){
    
    if(i>=n/2) return true;
    
    if(s[i]!=s[n-i-1])
    return false;
return palindrome(s,n,i+1);

}
int main(){

    string s;
    cin>>s;

    int n = s.size();
    cout<<palindrome(s,n,0)<<endl;

    return 0;
}