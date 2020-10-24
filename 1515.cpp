#include <iostream>
#include <string>

int main() {
  int planets, year, travelTime, years, aux;
  std::string planetName, planetAux;

  while(std::cin >> planets && planets!=0) {
    for(int i=0; i< planets; i++) {
        std::cin >> planetName >> year >> travelTime;
        years = year-travelTime;
        if(years<aux || i==0) {
            aux = years;
            planetAux = planetName;
        }
    }
    std::cout << planetAux << '\n';
  }


    return 0;
}
