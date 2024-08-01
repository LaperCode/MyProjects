#include <iostream>
using namespace std;

int main(){
    int a[] = {12,10,11,18,13,6}, *p;
    p = &a[0];
    cout << *p << endl;
    p = &a[3];
    cout << *p << endl;
    *p = *p + 100;
    cout << a[3] << endl;
    p = p-2;
    cout << *p << endl;

    system("pause");
    return 0;
}