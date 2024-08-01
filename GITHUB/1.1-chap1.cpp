#include <iostream>
#include <math.h>
using namespace std;

//Câu a
int S1(int n){
    if(n==1)
        return 1;
    return n + S1(n-1);
}

//Câu b
int S2(int n){
    if(n==1)
        return 1;
    return pow(n,2) + S2(n-1);
}

//Câu c
int giaithua(int n){
    if(n==1)
        return 1;
    return n*giaithua(n-1);
}

int S3(int n){
    if(n==0 || n==1)
        return 1;
    return giaithua(n)+S3(n-1);
}

//Câu d
int S4(int n){
    if(n==1)
        return 2;
    return n*(n+1)*(2*n) + S4(n-1);
}

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cau a = " << S1(n) << endl;
    cout << "Cau b = " << S2(n) << endl;
    cout << "Cau c = " << S3(n) << endl;
    cout << "Cau d = " << S4(n) << endl;

    system("pause");
    return 0;
}