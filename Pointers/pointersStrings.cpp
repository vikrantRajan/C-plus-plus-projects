#include <iostream>

using namespace std;

int main()
{
    string text = "this a test"; // t r a l a \0


    // for (int i = 0; i < text.length(); i++)
    // {
    //     cout << text[i] << endl;
    // }

    // char ch = text[0];

    // cout << ch << endl;

    // char characters[] = "123asdfasdfasdf4";

    // cout << characters[0] << endl;
    // cout << *(characters) << endl;

    // cout << characters[1] << endl;
    // cout << *(characters+1) << endl;

    // char *p = characters;

    // cout << p[0] << endl;
    // cout << *(p) << endl;

    // cout << p[1] << endl;
    // cout << *(p+1) << endl;

    // const char * text2 = text.c_str();

    // cout << text2 << endl;

    // char array[] = "here is a text";

    // string test = array;

    // cout << test << endl;


    // const char * a = "this is a test 12512412";

    // cout << a[0] << endl;

    // char b[] = "this a test 124124";

    // b[0] ='g';
    // cout << b << endl;

    // char * const dynamic_array = new char[50]; <-- randomly assigns space
    // dynamic_array[0] = 'k';
    // dynamic_array[1] = '\0';
    // // dynamic_array = "lalala"; // const array can't be overloaded like this

    // cout << dynamic_array << endl;

    // delete [] dynamic_array;
    cout << endl << endl << endl;
    string *const array_of_string = new string[20];
    array_of_string[0] = "this";
    array_of_string[1] = "i a text that will be in all of";
    array_of_string[2] =  "the elements of strings";
    // array_of_string = "afsdf"; // now we can't change the value/address/memory, cause the const string pointer doesn't allow to change
    // cout << array_of_string << endl;
    // cout << array_of_string[1] << endl;
    // cout << array_of_string[2] << endl;


    // Correct way to allocate and delete memory from a variable
    char *const inscription = new char[20]; //making sure with const somebody doesn't make a mistake
    
    inscription[0] = 'a';
    inscription[1] = 'b';
    inscription[2] = 'c';
    inscription[3] = '\0'; 
    
    char *temporaryPointer = inscription; //creating temporaryPointer for the sake of going 'through' the array
    
    while (*temporaryPointer)
        cout << *temporaryPointer++ << " address for pointer: " << &temporaryPointer << endl;
    
    delete [] inscription;

    cout << "address for original variable: " << &inscription << endl; // this takes up the next of memory

    return 0;
}
