La presente cartella contiene i file test su cui
verrà provato il software prodotto come elaborato d'esame.
Per compilare i programmi (oltre ad avere llvm installato) è necessario 
che l'eseguibile del front-end (qui chiamato kcomp) sia presente nella directory
che include la presente cartella. L'eseguibile viene infatti
richiamato usando il comando ../kcomp
Si modifichi opportunamente tale chiamata in caso l'eseguibile si trovasse
in altra directory del file system.
Dopo aver eventualmente operato tale modifica, per compilare i 
programmi in linguaggio "kaleidoscope imperativo" (suffisso .k)
e i file .cpp ausiliari è sufficiente digitare

> make <nome programma>

dove <nome programma> è uno fra:

1) floor  -> calcola la parte intera di un numero (intero o frazionario)
2) rand   -> genera e stampa 10 numeri pseudocasuali
3) fibonacci -> calcola l'ennesimo numero di Fibonacci
4) sqrt -> Calcola la radice quadrata (approssimata) di un numero arbitrario
5) eqn2 -> Calcola le soluzioni di un'equazione di secondo grado ax**2+bx+c=0, dati i coefficienti a,b e c
6) sqrt2 -> come sqrt ma fa uso dell'operatore logico or
7) sqrt3 -> come sqrt ma fa uso degli operatori logici and e not


