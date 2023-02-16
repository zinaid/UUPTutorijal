#include <iostream>
using namespace std;

int main(){
    int n;
    int suma = 0;
    cout<<"Unesite granicu: "<<endl;
    cin>>n;
    
    for(int i = 1; i<=n; i++){
        if(i%2==0){
            cout<<"Parni broj: "<<i<<endl;
            suma += i;
        }
    }

    cout<<"Suma je: "<<suma<<endl;
    
    return 0;
}