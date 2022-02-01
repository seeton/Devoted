#include<bits/stdc++.h>
using namespace std;

/* 4 方向への隣接頂点への移動を表すベクトル */
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };


int main() {
    /* 縦と横の長さ */
    int R, C;
    cin >> R >> C;

    /* スタート地点とゴール地点 */
    int sx, sy, gx, gy;
    cin>>sx>>sy>>gx>>gy;

    /* 盤面 */
    vector<string> field(R);
    for (int h = 0; h < R; ++h) cin >> field[h];

    // 各セルの最短距離 (訪れていないところは -1 としておく)

    vector<vector<int> > dist(R, vector<int>(C, -1)); 
    dist[sx-1][sy-1] = 0; // スタートを 0 に


    // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
    queue<pair<int, int> > que; 
    que.push(make_pair(sx-1,sy-1) ); // スタートを push

    /* キューが空になるまで */
    
    while (!que.empty()) {
        pair<int, int> current_pos = que.front();
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop(); // キューから pop を忘れずに

        // 隣接頂点を探索
        for (int direction = 0; direction < 4; ++direction) {
            int next_x = x + dx[direction];
            int next_y = y + dy[direction];
            if (field[next_x][next_y] == '#') continue; // 壁はダメ
            
            // まだ見ていない頂点なら push
            if (dist[next_x][next_y] == -1) {
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1; // (next_x, next_y) の距離も更新

                //cerr<<" 距離"<<dist[next_x][next_y]<<"座標"<<next_y<<","<<next_x<<endl;
            }
        }
    }

    for(int h=0;h<R;h++){
        for(int w=0;w<C;w++){
            cerr<<dist[h][w]<<",";
        }
        cerr<<endl;
    }

    cout<<dist[gx-1][gy-1]<<endl;
}