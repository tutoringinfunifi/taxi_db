//
// Created by Edoardo Wijaya Grappolini on 08/06/21.
//

#ifndef GESTIONALE_TAXI_SOCOTA_DB_H
#define GESTIONALE_TAXI_SOCOTA_DB_H


#include <vector>
#include "Corsa.h"
#include "CorsaFissa.h"
#include "CorsaVariabile.h"

class SOCOTA_DB {
public:
    void aggiungiCorsa(std::string prov, std::string dest, int dat, int dur, std::string type);
    //easy TODO: make method to print all records in 'corse'

private:
    std::vector<Corsa*> corse;
};


#endif //GESTIONALE_TAXI_SOCOTA_DB_H
