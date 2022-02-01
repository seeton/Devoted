#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;

bool solve(int N){
    if(N%2==0){
        return true;
    }else{
        return false;
    }
    return -1;
}

int main(void)
{
    int N;cin>>N;

    if(solve(N)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}