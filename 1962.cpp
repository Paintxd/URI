#include <iostream>
#include <cmath>
using namespace std;

void c(int ano)
{
        if (ano >= 2015)
        {
            cout << abs(2014-ano) << " A.C.\n";
        } else {
            cout << 2015-ano << " D.C.\n";
        }   
}

int main() 
{
    int vezes, ano;

    cin >> vezes;

    for (int i=0; i<vezes; i++) 
    {
        cin >> ano;
        c(ano);
    }
}