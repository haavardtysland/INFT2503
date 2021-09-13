#include <string>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    //a
    string word1;
    string word2;
    string word3;

    cout << "Skriv tre ord: " << endl;
    cin >> word1;
    cin >> word2;
    cin >> word3;

    //b
    string sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << sentence << endl;
    
    //c
    cout << word1.length() << endl;
    cout << word2.length() << endl;
    cout << word3.length() << endl;
    cout << sentence.length() << endl;

    //d
    string sentence2 = sentence;
    //e
    for(size_t i = 9; i < 12; i++){
        if(sentence2.length() >= i){
            sentence2[i] = 'x';
        }
    }

    cout << sentence << endl;
    cout << sentence2 << endl;

    //f
    string sentence_start = sentence.substr(0, 5);
    cout << sentence << endl;
    cout << sentence_start << endl;

    //g 
    int pos = sentence.find("hallo");
    string finnes = (pos > -1) ? "hallo finnes" : "hallo finnes ikke";
    cout << finnes << endl;

    //h
    int pos1 = sentence.find("er");
    while(pos1 != -1){
        cout << pos1 << endl;
        pos1 = sentence.find("er", pos1 + 2);
    }

    return 0;
}