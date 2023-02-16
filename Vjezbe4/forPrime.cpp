#include <iostream>
using namespace std;

int main(){
    int broj;
    bool flag=true;
    cout<<"Unesite broj: "<<endl;
    cin>>broj;
    // i<sqrt(broj)
    for(int i=2; i<broj; i++){
        if(broj%i == 0){
            flag = false;
            cout<<"Broj "<<broj<<" je dijeljiv sa: "<<i<<endl;
            //break;
        }
    }

    if(flag){
       cout<<"Broj "<<broj<<" je prost."<<endl; 
    }else{
        cout<<"Broj nije prost."<<endl;
    }

    return 0;
}