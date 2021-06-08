//
// Created by Edoardo Wijaya Grappolini on 08/06/21.
//

#include <iostream>
#include "CorsaVariabile.h"

void CorsaVariabile::printInfo() {
    std::cout << "┌ --------CORSA VARIABILE del " << data << "------------ " << std::endl;
    std::cout << "| Provenienza: " << provenienza << std::endl;
    std::cout << "| Destinazione: " << destinazione << std::endl;
    std::cout << "| Durata: " << durata << " minuti" << std::endl;
    std::cout << "| Importo: " << importo << "EUR" << std::endl;
    std::cout << "└ --------------------------------------------- " << std::endl;

}