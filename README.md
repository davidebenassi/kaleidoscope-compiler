# LLVM Compiler for Kaleidoscope Language

## Dependencies

For this project you need to install **llvm-17**, **bison** and **flex** on your machine.

Install **llvm-17** using the [automatic script](https://apt.llvm.org/).
```bash
 wget https://apt.llvm.org/llvm.sh
 chmod +x llvm.sh
 sudo ./llvm.sh 17
```
_You can delete the file llvm.sh after running it_

```bash
 sudo apt install bison flex
```
**NOTE**: check to have **make** installed, otherwise install it with ```sudo apt install make``` 

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
This will create the **kcomp** compiler 

3. Compile your ```.k``` files using ```kcomp```. You can find some examples in **test** folder.
