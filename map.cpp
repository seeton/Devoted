//連想配列(map)、有用だということは分かっているのになかなか使い方が分からない
//そんなことはありませんか？
//今回はmapの使い方を調べてみました！

//https://atcoder.jp/contests/abc206/tasks/abc206_c

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
int main(void)
{
    int N, A[301010];
    cin >> N;
	rep(i,N) cin >> A[i];
 
	map<int, int> cnt;
	ll ans = 0;
	rep(j,N) {
		ans += j - cnt[A[j]];
		cnt[A[j]]++;//既出の値を+1する
	}
	cout << ans << endl;
}

/*
mapを使う問題一覧
もはや完全にマスターしたのでNan


*/