
#include <iostream>
#include "Corsa.h"

void Corsa::printInfo() {
    std::cout << "Provenienza: " << provenienza << std::endl;
    std::cout << "Destinazione: " << destinazione << std::endl;
    std::cout << "Importo: " << importo << std::endl;
    std::cout << "Data: " << data << std::endl;
}

float Corsa::getImporto(){ return importo; }

