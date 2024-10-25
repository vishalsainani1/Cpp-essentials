#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Predicate to check if a string starts with 'N'
bool checkStringStartWithN(const string& item) {
    return !item.empty() && item.substr(0, 1) == "N";
}

// Predicate to check if a string starts with 'L'
bool checkStringStartWithL(const string& item) {
    return !item.empty() && item.substr(0, 1) == "L";
}

// Filter function using a predicate
vector<string> filter(const vector<string>& source, bool(*predicate)(const string&)) {
    vector<string> filteredStrings;
    for (const string& item : source) {
        if (predicate(item)) {
            filteredStrings.push_back(item);
        }
    }
    return filteredStrings;
}

int main() {
    // Create an array of cities
    vector<string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};

    // Find cities that start with "N"
    vector<string> newCities = filter(cities, &checkStringStartWithN);
    cout << "Cities that start with 'N':" << endl;
    for (const string& newCity : newCities) {
        cout << newCity << endl;
    }

    // Find cities that start with "L"
    vector<string> lCities = filter(cities, &checkStringStartWithL);
    cout << "Cities that start with 'L':" << endl;
    for (const string& lCity : lCities) {
        cout << lCity << endl;
    }

    return 0;
}
