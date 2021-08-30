
// include refererer til biblioteker
#include <cctype>   // char-behandling
#include <cstring>  // strengbehandling
#include <iostream> // innlesing/utskrift

using namespace std; 

int main() {               
  const int length = 5;
  double temp = 0;   //temperaturverdien
  int under_ti = 0;  //Antall under 10 
  int mellom_ti_og_tjue = 0; //Antall mellom 10 og 20
  int over_tjue = 0;
  
  for(int i = 0; i < length; i++){
      cout << "Temperatur nr " << (i+1) << ": "; // utskrift, bruker <iostream>
      cin >> temp;              // innlesing, bruker <iostream>
      if(temp < 10){
        under_ti++;
      } else if(temp > 20){
        over_tjue++;
      } else {
        mellom_ti_og_tjue++;
      }
  }

  cout << "Antall under 10 er " << under_ti << endl;
  cout << "Antall mellom 10 og 20 er " << mellom_ti_og_tjue << endl;
  cout << "Antall over tjue er " << over_tjue << endl;

  return 0;

}

/* Kjøring av programmet:
Skriv et ord: test
Bare store bokstaver: TEST
Bare små bokstaver: test
*/