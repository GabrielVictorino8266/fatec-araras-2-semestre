/* Explanation: References
    // Inicialization
    // Pointing to a variable

    // Variable address
    To discover the address of a variable, we need to use the operator &, but we cannot confuse this operator with the && (and operator). So, the followinf the code presents the address of the variable:

    int a = 9;
    cout << &a; // Here we get the address.
*/

#include <iostream>
using namespace std;

// int main(int argc, char* argv[]){
//     // Declarations
//     int a = 9;
//     cout << &a;v
//     /*
//         Outputs tests results:
//         0xf86abffe2c
//         0xf2599ff7ec
//         0xe4bf7ff91c
//         0xfca2fff89c
//     */
//     return 0;
// }


// Exercise 1 - References
//    struct mydata{
//         int dia, mes, ano;
//     };

// int main(int argc, char *argv[]){
//     int outrodia, outromes, outroano;

//     struct mydata meusdados;

//     printf("sizeof (data) = %d\n", sizeof(meusdados));
//     cout << &meusdados.dia << endl;
//     cout << &meusdados.mes << endl;
//     cout << &meusdados.ano << endl;
//     cout << "Other variables: \n";
//     cout << &outrodia << endl;
//     cout << &outromes << endl;
//     cout << &outroano << endl;

//     return 0;
// }