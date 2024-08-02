#include <iostream>
#include <math.h>
using namespace std;

struct triangle{
    int a;
    int b;
    int c;
};

int main(){
    triangle T[100];
    int n;
    cout << "Nhap so tam giac: ";
    cin >> n;
    //Câu a (Nhập số tam giác và chiều dài mỗi cạnh)
    for(int i=0; i<n; i++){
        do{
            cout << "Tam giac " << i+1 << ": " << endl;
            cout << "Canh BC = ";
            cin >> T[i].a;
            cout << endl;
            cout << "Canh AC = ";
            cin >> T[i].b;
            cout << endl;
            cout << "Canh AB = ";
            cin >> T[i].c;
            cout << endl;
        }while(T[i].a <= 0 || T[i].b <= 0 || T[i].c <= 0); 
    }
    cout << "\nXuat cac tam giac: " << endl;
    for(int i=0; i<n; i++){
        cout << "Tam giac " << i+1 << " co chieu dai cac canh ";
        cout << "AB = " << T[i].c << ", AC = " << T[i].b << ", BC = " << T[i].a << endl;
    }
    //Câu b (Đếm tam giác vuông)
    int dem=0;
    for(int i=0; i<n; i++){
        if(T[i].a==sqrt(pow(T[i].b,2)+pow(T[i].c,2)) || T[i].b==sqrt(pow(T[i].a,2)+pow(T[i].c,2)) || T[i].c==sqrt(pow(T[i].b,2)+pow(T[i].a,2))){
            dem++;
        }
    }
    cout << "\nCo " << dem << " tam giac vuong.\n" << endl;

    //Câu c (Tổng diện tích  của n tam giác)
    float sum=0.0;
    for(int i=0; i<n; i++){
        float p=0.0;
        float S=0.0;
        p=(T[i].a+T[i].b+T[i].c)/2;
        S=sqrt(p*(p-T[i].a)*(p-T[i].b)*(p-T[i].c));
        sum+=S;
    }
    cout << "Tong dien tich cua " << n << " tam giac tren = " << sum << endl;

    system("pause");
    return 0;
    // giỏi ghê 👍👍👍 . Đề CTDL-GT ám ảnh :)))
}
