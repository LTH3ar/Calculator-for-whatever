#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "list of options: ";
    cout << "Please choose an option" << endl << "0: exit" << endl << "1: Horizontal range" << endl;
    int choice;
    cin >> choice;
    while (choice <= 1 & choice >= 0) {
        switch (choice){
            case 0:
                cout << "Quitting";
                return 0;
            
            case 1:
                cout << "System is on"<< endl << "Calculator start" << endl;
                
                float V0;
                cout << "Initial velocity: ";
                cin >> V0;

                float Theta;
                cout << "Angle: ";
                cin >> Theta;

                float g;
                g = 10;

                float h;
                cout << "Initial height: ";
                cin >> h;

                float d;
                d = (V0 * cos(Theta * M_PI *pow(180,-1)) / g) * (V0 * sin(Theta* M_PI *pow(180,-1)) + sqrt(pow(V0, 2)*(pow(sin(Theta * M_PI * pow(180,-1)), 2)) + (2 * g * h)));

                float t;
                t = 2 * V0 * sin(Theta* M_PI * pow(180,-1));

                cout << "Horizontal range: " << d << endl << "Time: " << t << endl;

                cout << "Do you want to do it again?" << endl << "1 for yes or 0 for no" << endl;
                
                bool choice1;
                cin >> choice1;
                if (choice1 == true){
                    continue;
                }
                else if (choice1 == false){
                    choice = 0;
                }



        }
    }
    return 0;
}
