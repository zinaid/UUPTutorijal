#include <iostream>
#include <string>

using namespace std;

int main(){
    string ime, prezime, punoIme;
    cout<<"Unesite vase ime:\t";
    getline(cin, ime);
    cout<<"Unesite vase prezime:\t";
    getline(cin, prezime);

    cout<<"Vase ime je: "<<ime<< endl;
    cout<<"Vase prezime je: "<<prezime<< endl;

    punoIme = ime + " " +prezime;

    cout<<"Vase puno ime i prezime je: "<<punoIme<<endl;

    cout<<"Duzina stringa: "<<ime<<" je: "<<ime.length()<<endl;    
    cout<<"Duzina stringa: "<<prezime<<" je: "<<prezime.length()<<endl;
    cout<<"Duzina stringa: "<<punoIme<<" je: "<<punoIme.length()<<endl;

    punoIme[0] = 'D';
    cout<<"Izmjenjeni string je: "<<punoIme<<endl;                

    return 0;
}