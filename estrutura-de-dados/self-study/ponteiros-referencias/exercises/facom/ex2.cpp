/*Challenge 2
url: https://www.facom.ufu.br/~backes/wordpress/ListaC09.pdf

Write a program that contains two integer variables. Compare their addresses and display the larger address.
*/

#include <iostream>

using namespace std;

int main(int charc, char *argv[]){
    int a, b;
    b = 10;
    a = 300;

    cout << "Address A: " << &a << endl;
    cout << "Address B: " << &b << endl;

    int* b_p = &b;
    int* a_p = &a;

    if(a_p > b_p){
        cout << "A is the biggest." << endl;
    }else if(b_p > a_p){
        cout << "B is the biggest." <<endl;
        // printf("*b_p %d", (void *)b_p);
    }else{
        cout << "Both are equal size." << endl;
    }

    cout << "Sizes: (by int representation)" << endl;
        printf("\n*a_p: %d", (void *)a_p);
        printf("\n*b_p: %d", (void *)b_p);


    return 0;
}