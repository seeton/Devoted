#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 10;

    for (int bit = 0; bit < (1 << n); bit++) {
        vector<string> S;
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                S.push_back(to_string(i));
            }else {
                S.push_back("N");
            }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); i++) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}