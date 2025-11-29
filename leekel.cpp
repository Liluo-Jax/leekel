#include <bits/stdc++.h>
using namespace std;
bool is_pal(const string &s, int l, int r){
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++; r--;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if(!(cin>>s)) return 0;
    int n = s.size();
    int l = 0, r = n-1;
    bool ok = true;
    while(l<r){
        if(s[l]==s[r]){ l++; r--; }
        else{
            if(is_pal(s, l+1, r) || is_pal(s, l, r-1)) ok = true;
            else ok = false;
            break;
        }
    }
    cout << (ok?"YES":"NO");
    return 0;
}