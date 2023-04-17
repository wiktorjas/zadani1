#include <iostream>


    using namespace std;

    int main()
{
    int n = 8;
    int k = 8;

    int tab[n];
    for(int i = 0; i < n; i++)
{
        tab[i] = rand()%(10);
                cout<< tab[i]<<" ";
}
                cout<<endl;

    int tab1[k];
    for(int j = 0; j < k; j++)
{
        tab1[j] = rand()%(10);
                cout<< tab1[j]<<" ";
}
                cout<<endl;
                cout<<"liczby parzyste ";


    
    if(tab[i]%2==0)
                cout<<tab[i]<<" ";
                cout<<"/ ";
    
    if(tab1[j]%2==0)
                cout<<tab1[j]<<" ";


                cout<<endl;
                cout<<"liczby nieparzyste ";
    
    if(tab[i]%2)
                cout<<tab[i]<<" ";
                cout<<"/ ";
    
    if(tab1[j]%2)
                cout<<tab1[j]<<" ";
                cout<<endl;


return 0;
}
