#include<bits/stdc++.h>
using namespace std;

void printweird(long long int n){
    
    cout<<n<<" ";
    if(n == 1){
        return;   
    }

    if(!(n & 1)){
        printweird(n/2);
    }else{
        printweird(n*3 + 1);
    }
}

int main(){
    long long int n;
    cin>>n;
    printweird(n);

    return 0;
}