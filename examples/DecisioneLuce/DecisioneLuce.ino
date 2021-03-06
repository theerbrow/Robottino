#include "Robottino.h"

Robottino Peppino;           

void setup() {                     
  Peppino.begin();              
}

void loop() {
  Peppino.leggiLuce(antenne);   // necessaria per aggiornare il valore utilizzato da luceAccesa
  
  if ( luceAccesa() ) {                   // restituisce 1 se la luce supera una soglia preimpostata, 0 altrimenti
    Peppino.naso(verde);             // colori disponibili: nero (cioè spento), bianco, rosso, arancio, giallo, verde, blu, indaco, viola
    Peppino.espressione(felice);  // facce disponibili: vuota (cioè spento), neutra, felice, spaventato, fablabLogo, robottinoLogo
    Peppino.beep(silenzio);         // valori disponibili: silenzio e allarme; si può inserire un qualsiasi numero che, in millisecondi, indica la distanza tra due suoni consecutivi
    Peppino.ruota(lento);            // valori disponibili: lento, veloce, impazzito
  }
  
  else {
    Peppino.naso(rosso);
    Peppino.beep(allarme);
    Peppino.espressione(spaventato);
    Peppino.ruota(impazzito);
  }       
}
