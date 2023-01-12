#include <iostream>
#include <stdlib.h>
#include <math.h>

#define pi 3.1419

float eingabeDurchmesser = 0;
float ergebnissKreisflaeche = 0;
bool exitProgramm = false;
char einheit[3] = "";
int eingabeCode = 0;

void calcFlaeche();

int main()
{   while(true){
        if(exitProgramm == true){return(0);}
        calcFlaeche();
        std::cin >> eingabeCode ;
        if(eingabeCode == 2){exitProgramm=true;}

    }
    return 0;

}

void calcFlaeche(){
            system("cls");
        std::cout << " Bitte geben Sie den Durchmesser und die Einheit f""\x81""r die Kreisfl""\x84""chenberechnung ein." << std::endl;
        std::cout << " Durchmesser: ";
        std::cin >> eingabeDurchmesser;
        std::cout << " Einheit: ";
        std::cin >> einheit;
        //do the math
        ergebnissKreisflaeche = (pi/4)*pow(eingabeDurchmesser,2);
        system("cls");
        std::cout << " Die Kreisfl""\x84""che ist: " << ergebnissKreisflaeche << " " << einheit <<"\xFD";
        std::cout << "\n\n Um eine weitere Kreisfl""\x84""che zu berechnen geben Sie bitte die - 1 - ein."
                     "\n Um das Program zu beenden geben sie bitte die - 2 - ein.\n";
}
