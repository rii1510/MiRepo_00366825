#include <iostream>
using namespace std;

int main (){
    int num; 
    cout <<"Ingrese un numero" << endl;
    cin >> num;
    for (int i = 1; i <= 20; i++) {
        cout << i * num << " ";
        
    }

    return 0;

}