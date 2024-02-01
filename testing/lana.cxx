// ***************************************************
// Projekt:      Uebung_1
// Copyright:    Muster AG
// Author:       Max Muster
// Datum:
// Programmname: Uebung_1.cpp
// ***************************************************

#include <cstdlib>
#include <iostream>
// #include <iomanip>
// #include <cmath>
// #include <locale>
using namespace std;

int main() {
  int ausfuehren = 1;
  char buchstabe;

  while (ausfuehren) {
    cout << " Guten Tag\n";
    cout << " e = Beenden\n\n\n";

    cout << "\n\n Waehlen Sie: ";
    cin >> buchstabe;

    // Auswahl des Buchstabens/Programms
    switch (buchstabe) {
    case 'e':
      ausfuehren = 0;
      return 0;
      break;
    default:
      cout << "Ungueltige Eingabe, bitte Eingabe wiederholen...\n";
    }

    getchar();
    getchar();
    system("CLS");
  } // Ende while(ausfuehren)
  return 0;
}
