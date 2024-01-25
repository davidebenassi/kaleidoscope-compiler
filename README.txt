# Progetto di Linguaggi e Compilatori - Benassi Davide



***
## Installazione

Scarica *llvm-17*
```bash
 wget https://apt.llvm.org/llvm.sh
 chmod +x llvm.sh
 sudo ./llvm.sh 17
```
Scarica *bison* e *flex*
```bash
 sudo apt install bison
 sudo apt install flex
```
***
## Utilizzo

Nel progetto sono presenti due **MakeFile**;
* Per la generazione del kcomp, ovvero del compilatore
    + genera il *kcomp* digitando `make` 
* Per la creazione degli eseguibili, per il testing
    + genera l'eseguibile utilizzando nuovamente il comando `make <script.k>` nella cartella contenente i *file.k*

Infine esegui l'eseguibile generato `./script`

***
>## Primo Livello

Nella grammatica di primo livello sono state sviluppate le seguenti implementazioni:
* **Operazioni di assegnamento**
    + aggiunta la classe **`AssignmentExprAST`**

* **Variabili Globali**
    + aggiunta la classe **`GlobalVariableAST`**

####Modifiche aggiuntive
* modificata la classe **`VarBindingAST`** → permessa la definizione di una variabile senza inizializzarne il valore.
* modificata la classe **`VariableExprAST`** → permessa la rappresentazione delle variabili globali, controllando prima lo scope locale, e in caso di assenza della variabile, controlla lo scope globale.
* modificata la classe **`BlockExprAST`** → permesso l'inserimento di un numero indefinito di istruzioni per blocco.

>## Secondo Livello

Nella grammatica di secondo livello sono state sviluppate le seguenti implementazioni:
* **IF**
    * modificata la classe **`IfExprAST`** → implementata la possibilità di utilizzare costrutti if/else, non più solo *inline IF*, tramite parametro di default

* **FOR**
    * aggiunta la classe **`ForExprAST`**

####Modifiche aggiuntive

* Operatori di incremento (++i) e decremento (--i) nel *parser.yy*
* Gestione di identificatori *negativi* (es: -2)




>## Terzo Livello
Nella grammatica di terzo livello sono state sviluppate le seguenti implementazioni:
* **Operatori logici AND OR NOT -- ('&', '|', '!')**
    * aggiunta la classe **`LogicalExprAST`**