// https://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;

int main () {
    int k; //banana
    int n; // dolars
    int w; // wanted

    cin >> k;
    cin >> n;
    cin >> w;
    int total = 0;

    for(int i=1; i <= w; i++) {
        total += k * i;
    }
    
    if((total - n) <= 0 ) {
        cout << 0 << endl;
    } else {
        cout << total - n << endl;
    }
    return 0;
}