#include <iostream>

using namespace std;

int main(){
    int opcija;
    double broj1, broj2, rezultat;
    char operacija;

    cout<<"#########Dobrodosli u kalkulator##########";
    cout<<"Odaberite opciju:"<<endl;
    cout<<"Sabiranje - 1"<<endl;
    cout<<"Oduzimanje - 2"<<endl;
    cout<<"Mnozenje - 3"<<endl;
    cout<<"Izlaz"<<endl;

    cin>>opcija;

    if(opcija == 1 || opcija == 2 || opcija == 3){

        
        cout<<"Unesite brojeve"<<endl;
        cin>>broj1;
        cin>>broj2;

        if(opcija == 1){
            operacija='+';
            rezultat = broj1+broj2;
        }else if(opcija == 2){
            operacija='-';
            rezultat = broj1-broj2;
        }else if(opcija == 3){
            operacija='*';
            rezultat = broj1*broj2;
        }

        cout<<"Rezultat operacije "<<operacija<<" nad brojevima: "<<broj1<<" i "<<broj2<<" je "<<rezultat;
    }else{
        cout<<"Izasli ste iz programa";
    }

    return 0;
}