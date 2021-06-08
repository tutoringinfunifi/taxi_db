#include <iostream>
#include "CorsaVariabile.h"
#include "CorsaFissa.h"
#include "SOCOTA_DB.h"

int main() {
    SOCOTA_DB socota_db;

    socota_db.aggiungiCorsa("Viale Morgagni", "Via di Santa Marta", 20210405, 10, "variabile");
    socota_db.aggiungiCorsa("Stazione campo di marte", "Stazione rifredi", 20210505, 20, "fissa");
}
