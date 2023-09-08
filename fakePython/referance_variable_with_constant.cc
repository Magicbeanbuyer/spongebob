#include <iostream>

using namespace std;

int refTriple(int & refNum);
int tripple(int num);
int trippleConstParam(const int num);
int refTripleConstParam(const int & refNum);

int main(){

    int foo = 1;
    const int alwaysFoo = 2;

    cout << "foo address: " << &foo << endl; 
    cout << "alwaysFoo address: " << &alwaysFoo << endl; 

    int a = refTriple(foo);
    // constant can be used with pass-by-value into function
    cout << "foo value: " << foo << endl; 
    cout << "refTriple(foo) value: " << a << endl; 
    cout << "a address: " << &a << endl; 

    // constant cannot be used with pass-by-reference into function
    // refTriple(alwaysFoo); //qualifiers dropped in binding reference of type "int &" to initializer of type "const int"C/C++(433)
    a = refTripleConstParam(alwaysFoo);
    cout << "refTripleConstParam(alwaysFoo) value: " << a << endl; 

    // constant can be used with pass-by-value into function
    a = tripple(alwaysFoo);
    cout << "tripple(alwaysFoo) value: " << a << endl; 
    cout << "alwaysFoo value: " << alwaysFoo << endl;
    
    a = trippleConstParam(alwaysFoo);
    cout << "trippleConstParam(alwaysFoo) value: " << a << endl; 
    cout << "alwaysFoo value: " << alwaysFoo << endl;

}

int tripple(int num) {
    cout << "num address in function trippl: " << &num << endl; 
    num = num * 3;
    return num;
}

int trippleConstParam(const int num) {
    // cannot reassign a new value to constant num
    // num = num * 3; expression must be a modifiable lvalueC/C++(137)
    int newNum = num * 3; 
    return newNum;
}

int refTriple(int & refNum) {
    refNum = refNum * 3;
    return refNum;
}

int refTripleConstParam(const int & refNum) {
    cout << "refNum address in function refTripleConstParam: " << &refNum << endl; 
    int newRefNum = refNum * 3; 
    return newRefNum;
}