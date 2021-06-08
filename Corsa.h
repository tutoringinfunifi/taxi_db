
#ifndef GESTIONALE_TAXI_CORSA_H
#define GESTIONALE_TAXI_CORSA_H


#include <string>

class Corsa {
public:
    Corsa(std::string prov, std::string dest, int dat, int dur) : provenienza(prov), destinazione(dest), data(dat), durata(dur){}
    virtual void printInfo() = 0;
    float getImporto();

protected:
    std::string provenienza;
    std::string destinazione;
    float importo;
    int data;
    int durata;
};


#endif //GESTIONALE_TAXI_CORSA_H
