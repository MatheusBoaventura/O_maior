#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int A, B, C, maiorab, maior;

    cin >> A >> B >> C;

    maiorab = (A+B+abs(A - B))/2;
    maior = (maiorab+C+abs(maiorab-C))/2;

    cout << maior << " eh o maior" << endl;

    return 0;
}
