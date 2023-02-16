#include <iostream>
using namespace std;

int main(){
    for (int i=13; i<=43;i++){
        if(i%3==0 && i%2==0){
            cout<<"Prvi broj djeljiv sa 2 i 3 je: "<<i<<endl;
            break;
        }
    }
    return 0;
}