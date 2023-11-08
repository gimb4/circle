#include <iostream>
using namespace std;

int main() {
    int radius = 6; 
    int centerX = 10; 
    int centerY = 10; 

    for (int y = 0; y <= 2 * radius; ++y) {
        for (int x = 0; x <= 2 * radius; ++x) {
            int dx = x - radius;
            int dy = y - radius;
            if (dx * dx + dy * dy <= radius * radius) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}