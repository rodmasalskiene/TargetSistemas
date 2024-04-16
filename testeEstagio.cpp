#include <bits/stdc++.h>

using namespace std;

// Exercicio_1 -> 91

// Exercicio_2 ->

int fibonacci_num_check() {
    int num, fibonacci_num = 1;
    bool is_fibonacci = false;
    cin >> num;

    while(!is_fibonacci){
        fibonacci_num += fibonacci_num;
        if(num == fibonacci_num) is_fibonacci = true;
        if(fibonacci_num > num) break;
    }
    if(is_fibonacci){
        cout << "\n" << "Pertence a sequencia";
    }else{
        cout << "\n" << "Nao pertence a sequencia";
    }
}

/* Exercicio_3 ->
a) 9
b) 128
c) 49
d) 100
e) 13
f) 200
*/

/* Exercicio_4 ->
Temos três lampadas: L1, L2 e L3
E três interruptores: I1, I2 e I3

Deixo ligado os interruptores I1 e I2;
Vou para a sala 1:
SE a luz estiver APAGADA:
    Então o I3 -> L1;
    Deixo ligado o interruptor I1;
    Vou para a sala 2;
    SE a luz estiver APAGADA:
        Então: I1 -> L3 e I2 -> L2;
    SE a luz estiver ACESSA:
        Então: I1 -> L2 e I2 -> L3;
SE a luz estiver ACESSA:
    Deixo ligado os interruptores I2 e I3;
    Vou para a sala 2;
    SE a luz estiver APAGADA:
        Então: I1 -> L2, I2 -> L1 e I3 -> L3;
    SE a luz estiver ACESSA:
        Então: I1 -> L1, I2 -> L2 e I3 -> L3;
*/


// Exercicio_5 ->

string text_reverser(){
    string text;
    cout << "Enter a text to reverse: ";
    cin >> text;
    char reverse_text[text.length()];

    for(int i = 0, j = text.length(); i <= text.length(); i++, j--){
        reverse_text[j] = text[i];
    }

    cout << "\n";

    for(int i = 0; i <= text.length(); i++){
        cout << reverse_text[i];
    }
}

int main(){
//    fibonacci_num_check();
//    text_reverser();
    return 0;
}
