#include <iostream>
using namespace std;

// 'main' must return 'int'
int main(){
    int foo = 1;
    int & refFoo = foo;
    int & refRefFoo = refFoo;

    // alias (refRefFoo) of an alias (refFoo) is still an alias of the original varaible (foo)
    cout << &foo << " " << &refFoo << " " << &refRefFoo << " " << endl;

    int * pBar;
    cout << "Address of pBar: " << &pBar << endl;
    cout << "Value of pBar: " << pBar << endl;
    cout << "Value of Bar: " << *pBar << endl;
    cout << endl;
    pBar = new int(1);
    cout << "Address of pBar: " << &pBar << endl; // same as before
    cout << "Value of pBar: " << pBar << endl; // different from before dynamic memory allocation
    cout << "Value of Bar: " << *pBar << endl;
    delete pBar;

    return 0;
}