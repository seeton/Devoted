#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using Graph = vector<vector<long long int> >;
void comb(Graph &v){
  for(int i = 0;i <v.size(); i++){
    v[i][0]=1;
    v[i][i]=1;
  }
  for(int k = 1;k <v.size();k++){
    for(int j = 1;j<k;j++){
      v[k][j]=(v[k-1][j-1]+v[k-1][j]);
    }
  }
}

int main(){
  int N,K;
  cin >> N >>K;
  Graph v(N+1,vector<long long int>(N+1,0));
  comb(v);
  cout << v[N][K];
  return 0;
}