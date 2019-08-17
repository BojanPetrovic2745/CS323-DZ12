#ifndef ZIVOTINJA_H
#define ZIVOTINJA_H

#include <iostream>
using namespace std;

class Zivotinja
{
    public:
        Zivotinja();
        virtual ~Zivotinja();

        virtual void info() = 0;



    protected:

        string ime;
        string boja;
        int starost;
        double tezina;
        double visina;


    private:
};

#endif // ZIVOTINJA_H
