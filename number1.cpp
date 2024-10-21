#include <iostream> 
using namespace std;

#define ABS(no) ((no) < 0 ? -(no) : (no))
#define MAX(a, b) ((a) > (b) ? (a) : (b)) 

int main() {
    cout << ABS(5) << endl;        
    cout << MAX(5, 15) << endl;    
    return 0;
}
