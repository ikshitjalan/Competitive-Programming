#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    ll arr[n];

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    ll ans =0;

    for(int i=1;i<=n;i++){
        ans = ans ^ i;
    }

    for(int i=0;i<n-1;i++){
        ans = ans ^ arr[i];
    }

    cout<<ans<<"\n";
    return 0;
}