//
// Created by Edoardo Wijaya Grappolini on 08/06/21.
//

#ifndef GESTIONALE_TAXI_CORSAFISSA_H
#define GESTIONALE_TAXI_CORSAFISSA_H


#include <string>
#include "Corsa.h"


class CorsaFissa : public Corsa {
public:
    CorsaFissa(std::string prov, std::string dest, int dat, int dur) : Corsa(prov, dest, dat, dur){
        //DISCLAIMER: il codice seguente è stato fatto da ing. Cane
        if((prov.find("Stazione") != std::string::npos) || (dest.find("Stazione") != std::string::npos)){
            importo = 15;
        } else if ((prov.find("Stazione") != std::string::npos) || (dest.find("Stazione") != std::string::npos)){
            importo = 23;
        } else {
            importo = 10; //ing cane
        }

    }

    void printInfo() override;
};


#endif //GESTIONALE_TAXI_CORSAFISSA_H
