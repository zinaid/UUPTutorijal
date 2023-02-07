#include <iostream>

using namespace std;

int main(){
    int broj1, broj2, broj3;
    cout<<"Unesite tri prirodna broja"<<endl;
    cout<<"Unesite prvi broj"<<endl;
    cin>>broj1;
    cout<<"Unesite drugi broj"<<endl;
    cin>>broj2;
    cout<<"Unesite treci broj"<<endl;
    cin>>broj3;

    if(broj1>=broj2){
        if(broj1>=broj3){
            cout<<"Broj: "<<broj1<<" je najveci"<<endl;
        }else{
            cout<<"Broj: "<<broj3<<" je najveci"<<endl;
        }
    }else{
        if(broj2>=broj3){
            cout<<"Broj: "<<broj2<<" je najveci"<<endl;
        }else{
            cout<<"Broj: "<<broj3<<" je najveci"<<endl;
        }
    }

    return 0;
}