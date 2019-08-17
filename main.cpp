#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stack>
#include <string>

#include "Zivotinja.h"
#include "DivljaZivotinja.h"


using namespace std;
void print(std::vector <int> const &a);


int main()
{
    vector <DivljaZivotinja> vec(5);


    for(int i = 0; i < vec.size(); i++){
        cout << "Unesite ime, boju, starost, tezinu, visinu i loviste: ";
        cin >> vec.at(i);
    }


    vec.at(3).setIme("Ime zivotinje");
    vec.at(3).setBoja("Crna");
    vec.at(3).setStarost(10);
    vec.at(3).setTezina(150);
    vec.at(3).setVisina(2);
    vec.at(3).setLoviste("Tara");


    vec.pop_back();

    for(int i=0; i < vec.size(); i++)
        cout << vec.at(i);


    DivljaZivotinja o1("Pera", "Bela", 20, 30, 4, "Tara");

    vector<DivljaZivotinja>::iterator it;
    it = find(vec.begin(), vec.end(), o1);


    if( it != vec.end()){
        cout << "Element je pronadjen u vektoru";
    }else{
        cout << "Element nije pronadjen u vektoru";
    }

    ofstream pisi("ulaz.txt");

    if(pisi.is_open()){
        for(int i = 0; i < vec.size(); i++){
            pisi<< vec.at(i);
        }
    }

    pisi.close();

    stack<string> divljiStek;

    ifstream citaj("ulaz.txt");
    ofstream uIzlaz("izlaz.txt");


    string readLine;

    while(!citaj.eof()){
       getline(citaj, readLine);
       divljiStek.push(readLine);

    }

    int velicina = divljiStek.size();


    string temp[velicina];
    int i = 0;

    while(!divljiStek.empty()){
        string p = divljiStek.top();
        divljiStek.pop();
        temp[i]= p;
        uIzlaz << temp[i] << endl;
        i++;

    }

    citaj.close();
    uIzlaz.close();

    return 0;
}


















