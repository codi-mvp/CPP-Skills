#include <iostream>
using namespace std;

int main() {
    int a = 100000;
    bool sort = true;

    if (sort == true) {
        cout << "Набор до " << a << "/n";

        int par = 0;
        for (int i = 0; i < a; i++) {
            par += i;
            cout << par << "\n";
        }
    }
    return 0;
}