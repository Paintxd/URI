#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int tam, num;
    cin >> tam;
    int vet[tam];
    for (int i=0;i<tam;i++) {
        cin >> num;
        vet[i]=num;
    }
     int n = sizeof(vet)/sizeof(vet[0]);

    sort(vet, vet+n);

    for (int i=0;i<tam;i++)
        if (vet[i]%2==0)
            cout << vet[i] << '\n';

    for (int i=tam;i>=0;--i)
        if (vet[i]%2!=0)
            cout << vet[i] << '\n';
    return 0;
}
