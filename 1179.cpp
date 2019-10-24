#include<bits/stdc++.h>

int main () {
    int x[15], vp[5], vi[5], ci=0, cp=0;

    for (int i=0;i<15;i++) {
        std::cin >> x[i];
    }

    for (int j=0;j<15;j++) {
        if (x[j]%2==0) {
            vp[cp] = x[j];
            cp++;
        } else {
            vi[ci] = x[j];
            ci++;
        }

        if (cp==4) {
            for(int i=0;i<5;i++) {
                std::cout << "par[" << i << "] = " << vp[i] << std::endl;
                vp[i]=0;
            }
            cp=0;
        } else {
            for(int i=0;i<5;i++) {
                std::cout << "impar[" << i << "] = " << vi[i] << std::endl;
                vi[i]=0;
            }
            ci=0;
        }
    }
    for(int i=0;i<5;i++)
        if (vp[i]!=0)
        std::cout << "par[" << i << "] = " << vp[i] << std::endl;

    for(int i=0;i<5;i++)
        if(vi[i]!=0)
        std::cout << "impar[" << i << "] = " << vi[i] << std::endl;

    return 0;
}
