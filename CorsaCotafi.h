// NON GUARDARE FINO ALL'ULTIMO!!!!!

#ifndef GESTIONALE_TAXI_CORSACOTAFI_H
#define GESTIONALE_TAXI_CORSACOTAFI_H


#include <string>

class CorsaCotafi {
public:
    CorsaCotafi(std::string prov, std::string dest, int dat, int dur, std::string tipo) : provenienza(prov), destinazione(dest), data(dat), durata(dur){}

private:
    std::string provenienza;
    std::string destinazione;
    std::string tipo; //ing. cane parte due
    int data;
    int durata;

};


#endif //GESTIONALE_TAXI_CORSACOTAFI_H
