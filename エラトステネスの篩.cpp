//与えられた整数nに対して、n以下の素数はいくつ存在しますか?
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 3; i < (int)(n); i++)
typedef long long ll;
int main(void)
{
    clock_t start = clock();//時間計測開始
    int N;cin>>N;
    int ans=0;
    int PrimeNumber[N];
    if(N>=2){//Nが2以上かどうか判断する
            PrimeNumber[0]=2;
            cout<<PrimeNumber[0]<<endl;
            ans++;
    }else{
        return 0;//もし2未満なら何も表示しないで終了
    }
    rep(i,N){
        for(int j=0;j<ans;j++){
            if(__gcd(PrimeNumber[j],i)!=1){//最大公約数が1以外ならbreak
                break;
            }
            if(j+1==ans){
                PrimeNumber[ans]=i;//素数なら素数配列に挿入
                ans++;
                cout<<i<<endl;
            }
        }
    }
    //処理時間の計測
    clock_t end = clock();
    const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
    printf("time %lf[ms]\n", time);
}
//参考にしたサイト
//http://www.sanko-shoko.net/note.php?id=rnfd