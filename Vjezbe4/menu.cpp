#include <iostream>
using namespace std;

int main(){
    int broj1, broj2, suma;
    do{
        cout<<"Unesite prvi broj: "<<endl;
        cin>>broj1;
        cout<<"Unesite drugi broj: "<<endl;
        cin>>broj2;
        suma = broj1+broj2;
        cout<<"Suma je: "<<suma<<endl;
    }while(suma<10);

    return 0;
}