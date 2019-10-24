#include<bits/stdc++.h>

int main () {
    std::string a;
    int d, h, m, s, df, hf, mf, sf, hx[3], v;
    char p = ':';

    std::cin >> a >> d;
    std::cin >> h >> p >> m >> p >> s;
    std::cin >>  a >> df;
    std::cin >> hf >> p >> mf >> p >> sf;

   v=(60-s+sf) + ((60-m-1+mf)*60) + ((24-1-h+hf)*3600) + ((df-d-1)*86400);

    hx[0]=v/86400;
   std::cout << hx[0] << " dia(s)\n";

    hx[0]=v%86400;
    hx[1]=hx[0]/3600;
   std::cout << hx[1] << " hora(s)\n";

    hx[1]=hx[0]%3600;
    hx[2]=hx[1]/60;
   std::cout << hx[2] << " minuto(s)\n";

   hx[2]=hx[1]%60;
   std::cout << hx[2] << " segundo(s)\n";

    return 0;
}
