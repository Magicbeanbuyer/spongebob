# include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // char a {"a"}; 
    // cannot initialize a variable of type 'char' with an lvalue of type 'const char[2]'
    // '' is used to declare char, and "" is for strings

    char a {'a'};
    char b {65}; // A
    char c {32}; // spacde
    cout << a << c << b << endl;

    // cast data type
    // d = static_cast<int>(a);
    cout << typeid(static_cast<int>(a)).name() << c << static_cast<int>(a) 
    << endl;

    return 0;
}
// https://youtu.be/8jLOx1hD3_o