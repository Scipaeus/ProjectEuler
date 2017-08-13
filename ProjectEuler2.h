#include <iostream>
using namespace std;

int main() {
    int SUM = 0;
    for(int a = 1, b = 1, c = 2; a < 4000000, b < 4000000, c < 4000000; a = b+c, b = a+c, c = a+b) {
        SUM = SUM+c; }
    cout << SUM;
    return 0;
}
