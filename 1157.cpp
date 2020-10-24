#include <iostream>
#include<list>
using namespace std;

int main() {
    list<int> divs;
    int divNum;
    cin >> divNum;

    for(int i=1; i<=divNum; i++) {
        if(divNum%i == 0)
            divs.push_back(i);
    }

    for(int i: divs)
        cout << i << '\n';

    return 0;
}
