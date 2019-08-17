#include "DivljaZivotinja.h"

DivljaZivotinja::DivljaZivotinja()
{
    //ctor
}

DivljaZivotinja::DivljaZivotinja(string ime, string boja, int starost, double tezina, double visina, string loviste){
        this->ime = ime;
        this->boja = boja;
        this->starost = starost;
        this->tezina = tezina;
        this->visina = visina;
        this->loviste = loviste;
}

DivljaZivotinja::~DivljaZivotinja()
{
    //dtor
}

void DivljaZivotinja::setLoviste(string loviste){
    this->loviste = loviste;
}

string DivljaZivotinja::getLoviste(){
    return loviste;
}

void DivljaZivotinja::setIme(string ime){
            this->ime = ime;
        }

string DivljaZivotinja::getIme()const {
            return ime;
        }

void DivljaZivotinja::setBoja(string boja){
            this->boja = boja;
        }

string DivljaZivotinja::getBoja()const{
            return boja;
        }

void DivljaZivotinja::setStarost(int starost){
            this->starost = starost;
        }

int DivljaZivotinja::getStarost() const{
            return starost;
        }

void DivljaZivotinja::setTezina(double tezina){
            this->tezina = tezina;
        }

double DivljaZivotinja::getTezina() const{
            return tezina;
        }

void DivljaZivotinja::setVisina(double visina){
            this->visina = visina;
        }

double DivljaZivotinja::getVisina() const{
            return visina;
        }

ostream &operator <<(ostream &output, const DivljaZivotinja &Divlja){
    output << Divlja.ime << " " << Divlja.boja << " " << Divlja.starost << Divlja.tezina << " kg! " << Divlja.visina << "m! " << Divlja.loviste<< endl;
    return output;
}

istream &operator >> (istream &input, DivljaZivotinja &Divlja){
    input >> Divlja.ime >> Divlja.boja >> Divlja.starost >> Divlja.tezina >> Divlja.visina >> Divlja.loviste;
    return input;
}




