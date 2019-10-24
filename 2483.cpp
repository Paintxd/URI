#include <iostream>
using namespace std;

void aaa(int v)
{
    for (int i=0; i<v; i++)
    {
        printf("a");
    }
    printf("l!\n");
}

int main()
{
    int vezes;

    scanf("%d", &vezes);

    printf("Feliz nat");
    aaa(vezes);
}