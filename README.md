# LLVM Compiler for Kaleidoscope Language

## Installation & Dependencies

Scarica *llvm-17*
```bash
 wget https://apt.llvm.org/llvm.sh
 chmod +x llvm.sh
 sudo ./llvm.sh 17
```
Download **bison** and **flex**
```bash
 sudo apt install bison
 sudo apt install flex
```

## Usage

1. Create the compiler binary ```kcomp```
	+ ```bash make``` 
* Per la creazione degli eseguibili, per il testing
    + genera l'eseguibile utilizzando nuovamente il comando `make <script.k>` nella cartella contenente i *file.k*

Infine esegui l'eseguibile generato `./script`
