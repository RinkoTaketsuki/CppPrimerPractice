#include <iostream>
using namespace std;

/**
 * 鲁棒性增强版
 */
int main() {
    cout << "Please input 2 numbers..." << endl;
    int v1 = 0, v2 = 0;
    if (!(cin >> v1 >> v2)) {
        cout << "Input Error" << endl;
        return -1;
    }
    if (v1 > v2) {
        while (v1 >= v2) {
            cout << v1 << ' ';
            --v1;
        }
    }
    else {
        while (v1 <= v2) {
            cout << v1 << ' ';
            ++v1;
        }
    }
    cout << endl;
    return 0;
}