#include <iostream>
using namespace std;

void resultado(int h, int p)
{
    float r;
    r = float(h)/float(p);
    printf("%.2f\n", r); 
}

int main()
{
    int h, p;
    cin >> h >> p;

    resultado(h, p);
}