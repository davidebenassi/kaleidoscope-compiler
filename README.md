# LLVM Compiler for Kaleidoscope Language

## Dependencies

For this project you need to have **llvm-17**, **bison** and **flex** installed in your machine.
```bash
 wget https://apt.llvm.org/llvm.sh
 chmod +x llvm.sh
 sudo ./llvm.sh 17
```

```bash
 sudo apt install bison
 sudo apt install flex
```

## Usage

1. Clone the repository
```
git clone ---- add link ----
```

2. Create the compiler binary ```kcomp```
```
cd kaleidoscope-llvm-compiler
make
``` 
This will create the compile inside **test** folder

3. Compile your ```.k``` files using ```kcomp``` 
