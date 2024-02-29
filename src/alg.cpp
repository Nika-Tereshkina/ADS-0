#include <iostream>
int gcd(int a, int b) {
    while (b !=0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}
int main() {
 std::cout << gcd(10,15) << std::endl;
 return 0;
}

