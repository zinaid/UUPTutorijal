#include <iostream>
using namespace std;

int main(){
    int n;
    int suma = 0;
    cout<<"Unesite gornju granicu intervala"<<endl;
    cin>>n;
    for (int i = 0; i<=n; i++){
        suma += i; 
    }

    cout<<"Suma je: "<<suma;

    return 0;
}