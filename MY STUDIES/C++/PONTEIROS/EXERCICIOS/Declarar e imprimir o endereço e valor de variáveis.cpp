#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int *ponteiro; //declaracao de uma variável do tipo ponteiro
    a=1,b=2,c=3;
    ponteiro = &a;
    cout<<"O endereço do ponteiro é: "<<ponteiro<<", o valor do ponteiro é: "<<*ponteiro;
    system("PAUSE");
    return 0;
}
