#include <iostream>
#include <math.h>
using namespace std;

//Cau a (1 4 9 16 25 36 ... <= n)
int IsSquare(int n){
    int i=0;
    while(i*i<=n){
        if(i*i==n)
            return 1;
        i++;
    }
    return 0;
}

//Cau b
int IsPerfect(int n){
    int sum=0;
    for(int i=1;i<=n/2; i++)
        if(n%i==0)
            sum+=i;
    if(sum==n)
        return 1;
    return 0;    
}

//Cau c
int IsPrime(int n){
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(int i=3; i<=n/2 ; i+=2)
        if(n%i==0)
            return 0;
    return 1;
}

//Cau d
int IsSymmetrical(int n){
    int tam=n, a, sum=0;
    
    for(;n!=0; n=n/10){
        a=n%10;
        sum=sum*10+a;
    }

    if(tam==sum)
        return 1;
    else
        return 0;
}

//Cau f
int IsArmstrong(int n){
    int k=0, tam=n, tong=0;
    int S=n;

    while(S!=0){
        k++;
        S/=10;
    }                                                           

    while(tam!=0){
        tong=tong+(pow(tam %10,k));
        tam/=10;
    }
    
    if(n==tong)
        return 1;
    else
        return 0;
}


int main(){
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
//A   
    cout << "\nCac so chinh phuong nho hon hoac bang n: ";
    for(int i=0; i<=n ; i++)
        if(IsSquare(i))
            cout << i << "\t";
    cout <<endl;
//B
    cout << "\nCac so hoan chinh nho hon hoac bang n: ";
    for(int i=1; i<=n ; i++)
        if(IsPerfect(i)==1)
            cout << i << "\t";
    cout <<endl;
//C
    cout <<"\nCac so nguyen to nho hon hoac bang n: ";
    for(int i=2;i<=n; i++)
        if(IsPrime(i))
            cout << i << "\t";
    cout << endl;
//D
    cout <<"\nCac so can xung nho hon hoac bang n: ";
    for(int i=0;i<=n; i++)
        if(IsSymmetrical(i))
            cout << i << "\t";
    cout << endl;
//F
    cout <<"\nCac so Armstrong nho hon hoac bang n: ";
    for(int i=0;i<=n; i++)
        if(IsArmstrong(i))
            cout << i << "\t";
    cout << endl;

    system("pause");
    return 0;
}