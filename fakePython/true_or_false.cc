#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // boolean has size 1 byte, because 1 byte is the smallest unit addressable by CPU
    // https://stackoverflow.com/questions/4626815/why-is-a-boolean-1-byte-and-not-1-bit-of-size?answertab=trending#tab-top
    bool a {true};

    cout << sizeof(a) << endl;

    bool b {1};
    cout << a << " " << b << endl;
    cout << boolalpha << a << " " << b << endl;
    return 0;
}
