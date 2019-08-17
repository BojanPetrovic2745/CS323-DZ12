#ifndef DIVLJAZIVOTINJA_H
#define DIVLJAZIVOTINJA_H

#include "Zivotinja.h"


class DivljaZivotinja: public Zivotinja
{
    public:
        DivljaZivotinja();
        DivljaZivotinja(string ime, string boja, int starost, double tezina, double visina, string loviste);
        virtual ~DivljaZivotinja();

        void setLoviste(string loviste);
        string getLoviste();

        void setIme(string ime);
        string getIme() const;

        void setBoja(string boja);
        string getBoja() const;

        void setStarost(int starost);
        int getStarost() const;

        void setTezina(double tezina);
        double getTezina() const;

        void setVisina(double visina);
        double getVisina() const;


        virtual void info(){
            cout << "Ime: " << DivljaZivotinja::getIme() << " Boja: " << DivljaZivotinja::getBoja() << " Starost: " << DivljaZivotinja::getStarost() << " godina! Tezina: " << DivljaZivotinja::getTezina() << " kg! Visina: " << DivljaZivotinja::getVisina() << "m! Loviste: " << DivljaZivotinja::getLoviste() << endl;
        }

        friend ostream &operator << ( ostream &output, const DivljaZivotinja &Divlja );
        friend istream &operator >> (istream &input, DivljaZivotinja &Divlja);

        friend bool operator==(const DivljaZivotinja& d, const DivljaZivotinja &other) {

            if(d.ime == other.ime && d.boja == other.boja && d.starost == other.starost && d.tezina == other.tezina && d.visina == other.visina && d.loviste == other.loviste){
                return true;
            }else{
                return false;
            }
        }





    protected:

    private:
        string loviste;




};

#endif // DIVLJAZIVOTINJA_H
