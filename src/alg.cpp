#include <iostream>
int gcd(int a, int b) {
    int c;
    while (b !=0) {
        b = a % b;
        a = c;
    }
    return a;
}
int main() {
 std::cout << gcd(10,15) << std::endl;
 return 0;
}

