/*************************************************************************
	> File Name: 51nod1046.cpp
	> Author: 17qingyu
	> Mail: 
	> Created Time: Thu 24 Oct 2019 03:09:45 PM CST
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c;
ll qpow(){
    ll res = 1;
    a %= c;
    while(b){
        if(b & 1) res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }

    return res;
}

int main(){
    cin>>a>>b>>c;
    cout<<qpow()<<endl;

    return 0;
}
