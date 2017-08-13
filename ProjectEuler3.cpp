#include <iostream>
using namespace std;

int ProjectEuler3() {
    long long int Divider;
    for(long long int i = 2, x = 600851475143; i <= x; i = i+1) {
        if ((x % i) == 0) {Divider = i; x=x/i; i=i-1;} }
    cout << Divider;
    return 0;
}