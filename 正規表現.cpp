//正規表現　regexが大変便利？自力実装もできるが美しくない
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
int main(void)
{
    string S;cin>>S;
    regex reg{R"(^metho+d)"};
    smatch m;

    bool search=regex_search(S,m,reg);
    if(search)cout<<"Yes";
    else cout<<"No";
}