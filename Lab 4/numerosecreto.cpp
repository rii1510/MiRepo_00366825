#include <iostream> 
using namespace std;

int main () {
    int num = 0;
    do{
        cout << "Intenta adivinar el numero: ";
        cin >> num;
        if (num > 10)
        cout << "Muy lejos: " << num << endl;
        
        
        else 
             cout << "No estas lejos: " << num << endl;

    }while (num != 10);
    return 0;


}