#include <iostream>
using namespace std;

int main() {
    int a = 100000;
    bool sort = true;

    if (sort == true) {
        cout << "Набор до " << a << "/n";

        for (int i = 0; i < a; i++) {
            int par = 0;
            par += i;
            cout << par << "\n";
        }
    }
    return 0;
}