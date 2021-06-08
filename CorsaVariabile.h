//
// Created by Edoardo Wijaya Grappolini on 08/06/21.
//

#ifndef GESTIONALE_TAXI_CORSAVARIABILE_H
#define GESTIONALE_TAXI_CORSAVARIABILE_H


#include "Corsa.h"

class CorsaVariabile : public Corsa{
public:
    CorsaVariabile(std::string prov, std::string dest, int dat, int dur) : Corsa(prov, dest, dat, dur) {
        importo = dur * 0.10 + 2.40;
        if(importo < 5)
            importo = 5;
    }

    void printInfo() override;
};


#endif //GESTIONALE_TAXI_CORSAVARIABILE_H
