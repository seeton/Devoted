//めぐる式二分探索(以下めぐる式)は上下を決めないことでコードテンプレートを画一的なものにするものだと解釈した
//以降はめぐる式を使用することでtypical-algorithmの1問目にあたる「二分探索の練習問題」を解く

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;

int main(void)
{
    int N,K;cin>>N>>K;
    vector<int>A(N);rep(i,N)cin>>A[i];

    int ok=N;
    int ng=0;

    while(abs(ok-ng)>1){
        int mid=(ok + ng) / 2;
        if(A[mid]>=K){
            ok=mid;
        }else{
            ng=mid;
        }
    }
    
}