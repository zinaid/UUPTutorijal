#include <iostream>
using namespace std;

int main(){
    int broj, suma = 0;
    cout<<"Unesite pozitivan broj: "<<endl;
    cin>>broj;
    while(broj>=0){
        suma=suma+broj;
         //suma += broj;
        cout<<"Suma je: "<<suma<<endl;
        cout<<"Unesite novi pozitivan broj:"<<endl;
        cin>>broj;

        if(broj < 0 ){
            cout<<"Unijeli ste negativan broj"<<endl;
        }
    }

    return 0;
}