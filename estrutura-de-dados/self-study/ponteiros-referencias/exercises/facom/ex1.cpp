/*Challenge:
Write a program that declares an integer, a float, and a char, along with pointers for integer, float, and char. Associate the variables with the pointers (use &). Modify the values of each variable using the pointers and print the values of the variables before and after the modification.

*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int int_var = 10;
    float float_var = 4.6;
    char char_var = 'c';

    int *int_p = &int_var;
    float *float_p = &float_var;
    char *char_p = &char_var;

    cout << "-----------Before modification:-----------" << endl;

    cout << "int_var: " << int_var << endl;
    cout << "float_var: " << float_var << endl;
    cout << "char_var: " << char_var << endl;

    //Modification
    *int_p = 20;
    *float_p = 9.6;
    *char_p = 'a';

    cout << "-----------After modification:-----------" << endl;

    cout << "int_var: " << int_var << endl;
    cout << "float_var: " << float_var << endl;
    cout << "char_var: " << char_var << endl;

    return 0;
}