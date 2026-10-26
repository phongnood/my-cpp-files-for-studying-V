#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 //data types    
    cout << "int\n";
    cout << INT_MIN << endl; 
    cout << INT_MAX << endl;
    cout << "long long\n";
    cout << LLONG_MIN << endl;
    cout << LLONG_MAX << endl;
    cout << "char\n";
    cout << CHAR_MIN << endl;
    cout << CHAR_MAX << endl;
    cout << sizeof(bool) << "byte" << endl;
    cout << sizeof(float) << "byte" << endl;
    cout << sizeof(double) << "byte" << endl;
    int float_size = sizeof(float);
    int min = 2^(float_size - 1);
    int max = 2^(float_size - 1) - 1; // output
    cout << min << "min/max" << max << endl;
    /* 
       each byte = 8 bits
       int = 4 bytes = 32 bits *
       long long = 8 bytes = 64 bits *
       float = 4 bytes = 32 bits *
       double = 8 bytes = 64 bits *
       formula: min = -2^(n-1), max = 2^(n-1) - 1, where n = number of bits
    */

 //variable    
    // data_type + name_variable = value;
    // note*: no space, no number, no special character, no same keyword (even same with data types)
    float a;
    cin >> a;
    cout << fixed << setprecision(1) << a << endl;
    
    
    return 0;
}
// i have no idea now :_) 