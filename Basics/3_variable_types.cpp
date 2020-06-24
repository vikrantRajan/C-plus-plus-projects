#include <iostream> // Input Output Stream

using namespace std; // Namespace is used to save a bunch of functions. I used std, which means standard

// TYPE OF VARIABLES

int main() {
    // std::cout << "text is here"; <-- can also write 'std::' to access namespaces

    // int a = 4;
    // c out = Console Output
    // cout << "text is here" + a;
    // cout << a << endl;
    // cout << &a; 

    // int = -2 billion to 2 billion // 4 bytes memory
    // short int = -32768 to 32767 // 2 bytes  memory
    // float = upto 38 zeros // 4 bytes
    // double = upto 308 zeros // 8 bytes

    int a =40, b, c =20;
    cout << "a : " << a << " address: " << &a << endl;
    cout << "b : " << b << " address: " << &b << endl;
    cout << "c : " << c << " address: " << &c << endl;

    short t1 = 5; // or short int
    float t2 = 5.125;
    double t3 = 5.135131631;


    char t4 = 'a'; // single character only
    string t5 = "lots of letters"; // many characters inside the quotes
    string x = "part 1";
    string y = "part 2";
    string combinedStrings = x + " " + y;

    cout << combinedStrings << endl; 

    // 0 = false, 1 or any other number = true
    bool t6 = true;
    cout << t6 << endl; 

    // unsigned short int = 0 to 65535
    unsigned short t7  = 3700;

    const string KEEPING_IT_ALL_CAPS_IS_EASIER_TO_FIND = "Conquerer of C++";
    cout << KEEPING_IT_ALL_CAPS_IS_EASIER_TO_FIND << endl;

    return 0;
}