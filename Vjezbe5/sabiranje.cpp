#include<iostream>
using namespace std; 
main( ) 
{  
    int n;
    cout<<"Unesite oblik matrice: "<<endl;
    cin>>n;
    int  matrica1[n][n];
    int  matrica2[n][n];
    int  i, j;

    cout<<"\n Unesite matricu 1:\n";
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\n matrica1["<<i<<"]["<<j<<"]=  ";
            cin>>matrica1[i][j];
        }
    }

    cout<<"\n Unesite matricu 2:\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\n matrica2["<<i<<"]["<<j<<"]=  ";
            cin>>matrica2[i][j];
        }
    }  
    
    cout<<"\n Matrica je:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\t"<<matrica1[i][j]+matrica2[i][j];
        }
        cout<<endl;
    } 
} 