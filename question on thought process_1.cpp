#include <iostream>
#include <string>

void printcities(const std::string cities[], int size) {
    std::cout << "Cities starting with 'N':" << std::endl;
    for (int i = 0; i < size; i++) {
        if (cities[i].front() == 'N' || cities[i].front() == 'n') 
        {
            std::cout << cities[i] << std::endl;
        }
    }
}

int main() {
    std::string cities[5] = {"New York", "Los Angeles", "Chicago", "New Jersey","new delhi"};

    printcities(cities, 5);

    return 0;
}
