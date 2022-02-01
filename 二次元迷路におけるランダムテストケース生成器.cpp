#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
int main(void)
{
    //二次元迷路におけるランダムテストケース生成器

    random_device rnd;// 非決定的な乱数生成器を生成
    mt19937 mt(rnd());//メルセンヌ・ツイスタ
    uniform_int_distribution<> rand0to1(0, 2);//2や3にすることで障害物の多さを変えることができる
    uniform_int_distribution<> randHW(2, 50);//高さや幅用の乱数、初期値は100

    int H=randHW(mt);//高さ
    int W=randHW(mt);//幅

    cout<<H<<" "<<W<<endl;//高さと幅を出力

    rep(i,W){
        rep(i,H){
            if(rand0to1(mt)==1)cout<<'#';//1なら'#'、当然'1'や'•'などに変更も可能
            else cout<<".";//elseのため0以外にも2や3の場合も'.'になる
        }
        cout<<endl;
    }
    
    return 0;
}

//参考サイト:http://vivi.dyndns.org/tech/cpp/random.html