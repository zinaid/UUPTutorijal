#include<iostream>
using namespace std; 
main( ) 
{  
    int n,m;
    cout<<"Unesite broj redova: "<<endl;
    cin>>n;
    cout<<"Unesite broj kolona: "<<endl;
    cin>>m;
    int  matrica[n][m];
    int  i, j;
    cout<<"\n Unesite matricu:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"\n matrica["<<i<<"]["<<j<<"]=  ";
            cin>>matrica[i][j];
        }
    } 
    
    cout<<"\n Matrica je:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"\t"<<matrica[i][j];
        }
        cout<<endl;
    } 
} 