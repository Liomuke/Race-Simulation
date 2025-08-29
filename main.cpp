#include <iostream>
using namespace std;

int main() {
 // Integers need to have proper meaningful names    
    cout << "Race Simulation" << endl;
// Name of the code
    int Lamborghini_position = 0;
    int Ferrari_position = 0;
    int finish_line = 100;
    
    
    

    while (Lamborghini_position < finish_line && Ferrari_position < finish_line) {
        Lamborghini_position += rand() % 25;
        Ferrari_position += rand() % 25;
        cout << "Lamborghini: " << Lamborghini_position << " Ferrari: " << Ferrari_position << endl;
    }


    if (Lamborghini_position >= finish_line && Ferrari_position >= finish_line) {
        cout << "It's a tie! 🏁" << endl;
    } else if (Lamborghini_position >= finish_line) {
        cout << "Lamborghini wins! 🏁" << endl;
    } else {
        cout << "Ferrari wins! 🏁" << endl;
    }

    return 0;
}

