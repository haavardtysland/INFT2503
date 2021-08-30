#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void read_temperatures(double temperatures[], int length){
    const char filename[] = "tempfile.dat";
    ifstream file;
    file.open(filename);
    if(!file) {
        cout << "Feil ved åpning av innfil." << endl;
        exit(EXIT_FAILURE); //uthopp av programmet
    }

    double number;
    int count = 0; 
    while(file >> number && count <= length) {
        temperatures[count] = number;
        count++;
    }
    file.close();
}

int main() {   
    const int length = 5;
    double temperatures[length];
    int under_ti = 0;  //Antall under 10 
    int mellom_ti_og_tjue = 0; //Antall mellom 10 og 20
    int over_tjue = 0;   
    read_temperatures(temperatures, length);
    for(int i = 0; i < length; i++){
      if(temperatures[i] < 10){
        under_ti++;
      } else if(temperatures[i] > 20){
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


