#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
using Graph = vector<vector<int>>;

vector<int>BFS(const Graph &G,int s){
    int N=(int)G.size();
    vector<int>sign(N,-1);
    queue<int>que;

    sign[1]=0;
    que.push(1);

    //BFS
    while(!que.empty()){
        int v=que.front();
        que.pop();//お忘れなく

        for(int x:G[v]){
            if(sign[x]!=-1)continue;

            sign[x]=v;
            que.push(x);
        }
    }

    return sign;
}

int main(void)
{
    int N,M;cin>>N>>M;
    N++;
    Graph G(N);
    int A,B;
    rep(i,M){
        cin>>A>>B;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    vector<int> sign=BFS(G,1);//始点は頂点

    for (int v = 2; v < N; v++)
    {
        if(sign[v]==-1){
            cout << "No" << "\n";
            return 0;
        }
    }

    cout << "Yes" << "\n";
    for (int v = 2; v < N; v++)
    {
        cout << sign[v] << "\n";
    }
    
    

}