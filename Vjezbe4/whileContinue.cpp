#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int suma = 0;
    while(i<=10){
        if(i==4){
            i++;
            continue;
    }
        suma += i;
        i++;
    }

    cout<<"Suma je: "<<suma<<endl;
    return 0;
}