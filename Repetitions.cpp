#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ios:: sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    int mn = INT_MIN;

    int i=0;

    for(;i<s.size();i++){
        int count =1;
        while(s[i]==s[i+1]){
            count++;
            i++;
        }
        mn = max(mn,count);
    }

    cout<<mn<<"\n";

    return 0;
}