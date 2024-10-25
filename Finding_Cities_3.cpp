#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Generic function that checks if a string starts with a specific letter
bool checkStringStartsWith(const string& item, char startLetter) {
    return !item.empty() && item[0] == startLetter;
}

// Modified filter function to take a starting letter as an additional parameter
vector<string> filter(const vector<string>& source, char startLetter) {
    vector<string> filteredStrings;
    for (const string& item : source) {
        // Use the generic check function with the start letter as a parameter
        if (checkStringStartsWith(item, startLetter)) {
            filteredStrings.push_back(item);
        }
    }
    return filteredStrings;
}

// Function to print filtered cities
void printFilteredCities(const vector<string>& cities, char startLetter) {
    vector<string> filteredCities = filter(cities, startLetter);
    cout << "Cities that start with '" << startLetter << "':" << endl;
    for (const string& city : filteredCities) {
        cout << city << endl;
    }
}

int main() {
    // List of cities
    vector<string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey", "Cleveland"};

    // Print cities that start with 'N', 'L', and 'C'
    printFilteredCities(cities, 'N');
    printFilteredCities(cities, 'L');
    printFilteredCities(cities, 'C');

    return 0;
}
