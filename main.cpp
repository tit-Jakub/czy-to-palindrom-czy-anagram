#include <iostream>
#include <fstream>
using namespace std;
fstream odczyt;
int a;
int i=0;
string b;
bool sprawdzpali (string s1)
{
    int dl=s1.size();
        for (int i=0; i<dl/2; i++)
    if (s1[i]!=s1[dl-i-1])
        return false;
        return true;
}
int main()
{   odczyt.open("dane.txt",ios::in);
    while(odczyt.good())
    {
        odczyt>>b;
        if(sprawdzpali(b)==true)
        {
            a++;
            i++;
            cout<<i<<", "<<b<< endl;
        }
    }
    cout<<"Jest "<<a<<" palindromow.";
    odczyt.close();
    return 0;
}
