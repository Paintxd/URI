#include<bits/stdc++.h>

int main () {

    std::string a;
    int x, b, tc(0), tr(0), ts(0);
    std::cin >> x;

    for (int i = 0; i < x;i++) {
        std::cin >> b;
        std::cin.ignore();
        std::getline(std::cin, a);

        if (a=="C") {
            tc+=b;
        }
        else if (a=="R") {
            tr+=b;
        }
        else if (a=="S") {
            ts+=b;
        }
    }

    char t='%';
    std::cout << "Total: " << tc+tr+ts << " cobaias\n";
    std::cout << "Total de coelhos: " << tc << std::endl;
    std::cout << "Total de ratos: " << tr << std::endl;
    std::cout << "Total de sapos: " << ts << std::endl;
    printf("Percentual de coelhos: %.2f %c\n", (float)tc/(tc+tr+ts)*100, t);
    printf("Percentual de ratos: %.2f %c\n", (float)tr/(tc+tr+ts)*100), t;
    printf("Percentual de sapos: %.2f %c\n", (float)ts/(tc+tr+ts)*100), t;


    return 0;
}
