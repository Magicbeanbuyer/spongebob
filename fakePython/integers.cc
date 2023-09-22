//https://en.wikipedia.org/wiki/64-bit_computing#64-bit_data_models
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // int is signed and 32 bits
    int a = 1;
    // 16 bits
    short b = 2;
    // 32 bits for 64 bits
    long c = 3;
    // 64 bits
    long long d = 4;
    signed int e = 5;

    cout << "size of long: " << sizeof(c) * 8 << " bits" << endl;
    return 0;
}
