#include <iostream>
#include "CorsaVariabile.h"
#include "CorsaFissa.h"
#include "SOCOTA_DB.h"

int main() {
    SOCOTA_DB socota_db;

    socota_db.aggiungiCorsa("Viale Morgagni", "Via di Santa Marta", 20210405, 10, "variabile");
    socota_db.aggiungiCorsa("Stazione campo di marte", "Stazione rifredi", 20210505, 20, "fissa");
}

/* Pt.1 In questo progetto, c'è una possibile implementazione di un database simulato, che registra le corse
 * taxi fatte da una società cooperativa (socota).
 * Ti hanno commissionato di migliorare il codice, dopo una lunga analisi decidi di migliorare il codice
 * implementando il design pattern 'factory method' per permettere una migliore gestione dell'aggiunta e
 * gestione delle corse. Contrassegnati con "TODO" ci sono alcuni suggerimenti sul da farsi.
 *
 * Pt.2 Il comune di Firenze decide che vuole, nel solito database, avere anche la traccia delle corse fatte
 * dalle autovetture di cotafi. Cotafi però ha una gestione lievemente diversa delle corse! (vedi file "corsa cotafi").
 * Come risolvi la questione?
 * */