

#include "SOCOTA_DB.h"


void SOCOTA_DB::aggiungiCorsa(std::string prov, std::string dest, int dat, int dur, std::string type) {
    //TODO il codice funziona.. è bello? Refactor usando factory method design pattern
    if(type == "fissa"){
        corse.push_back(new CorsaFissa(prov, dest, dat, dur));
    } else if(type == "variabile"){
        corse.push_back(new CorsaVariabile(prov, dest, dat, dur));
    }
}