//
// Created by Edoardo Wijaya Grappolini on 08/06/21.
//

#include <iostream>
#include "CorsaFissa.h"

void CorsaFissa::printInfo() {
    std::cout << "┌ --------CORSA FISSA del " << data << "---------------- " << std::endl;
    std::cout << "| Provenienza: " << provenienza << std::endl;
    std::cout << "| Destinazione: " << destinazione << std::endl;
    std::cout << "| Durata: " << durata << " minuti" << std::endl;
    std::cout << "| Importo: " << importo << "EUR" << std::endl;
    std::cout << "└ --------------------------------------------- " << std::endl;

}