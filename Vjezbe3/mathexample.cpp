#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double broj1, broj2, proizvod;

    cout<<"Unesite prvi broj: ";
    cin>>broj1;
    cout<<"Unesite drugi broj: ";
    cin>>broj2;

    cout<<"Veci broj je: "<<max(broj1,broj2)<<endl;
    
    proizvod = broj1*broj2;
    cout<<"Proizvod ova dva broja je: "<<proizvod<<endl;

    cout<<"Zaokruzeni kvadratni korijen je: "<<round(sqrt(proizvod))<<endl;

    return 0;
}