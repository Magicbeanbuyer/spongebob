# include <iostream>
# include <string>
# include <typeinfo>

using namespace std;

// https://en.cppreference.com/w/cpp/language/initialization

int main() {

    string name (5, 'a');
    string go {3, 'b'};

    cout << go + ' ' << name << endl;
    cout << 'w' + 'v' << endl; //237
    cout << "w" "v" << endl;

    // int by default is signed
    int a = (2.9);
    cout << "Decimal 2.9 narrowed to: " << a << endl;

    signed int b = -1;
    unsigned int c = 10;
}
