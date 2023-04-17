#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
       int n;
    cout << "Sortowanie 3 liczb" <<endl;
    int liczb[3];
    for(int i=0;i<3;i++){
        cout<<""<<i<<" liczba: ";
        cin>>n;
        liczb[i]=n;

    }

    sort(liczb,liczb+3);
    for(int i=0;i<3;i++){
        cout<<liczb[i]<<endl;

    }
{
    int d;
    cout << "podaj ile ma byæ wieloktrotnoœci    ";
    cin >> d;
  int x=5;
cout << x << "\n";

for(int n=0;n<d;n++) {
x+=5;
cout << x << "\n";
}
}
    return 0;
}
