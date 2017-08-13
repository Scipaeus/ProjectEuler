#include <iostream>
using namespace std;

int main() {
    int SUM = 0;
    for(int a = 3; a < 1000; a = a+3) {
        SUM = SUM+a; }
    for(int a = 5; a < 1000; a=a+5) {
        SUM = SUM+a; }
    for(int a = 15; a<1000; a = a+15) {
        SUM = SUM-a;
    }
    cout << SUM;
    return 0;
}

