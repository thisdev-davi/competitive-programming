// https://codeforces.com/problemset/problem/231/A

#include <iostream>

using namespace std;

int main() {
    int x; // num quest
    cin >> x;
    
    int result = 0;
    while(x--) {
        int a, b, c;
        cin >> a >> b >> c;

        if((a+b+c) >= 2){
            result += 1;
        }
    }
    
    cout << result << endl;
    return 0;
}