#include <iostream>
using namespace std;

int main()
{
    int so;
    string ngay;
    cout <<"Nhap vao so: ";
    cin >> so;

    switch (so)
    {
        case 1:
            //ngay="Monday";
            //break;
        case 2:
            //ngay="Tuesday";
            //break;
        case 3:
            //ngay="Wednesday";
            //break;
        case 4:
            ngay="Thursday";
            break;
        case 5:
            ngay="Friday";
            break;
        case 6:
            ngay="Saturday";
            break;
        case 7:
            ngay="Sunday";
            break;
        default:
            ngay="Ngay khong hop le";
            break;
    }
    cout <<"Ngay trong tuan: "<< ngay << endl;

    system("pause");
}