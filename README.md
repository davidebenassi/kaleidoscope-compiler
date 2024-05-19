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
**NOTE**: check to have **make** and **wget** installed, otherwise install them with ```sudo apt install make wget``` 

## Usage

1. Clone the repository
```
git clone https://github.com/davidebenassi/kaleidoscope-compiler
```

2. Create the compiler binary ```kcomp```
```
cd kaleidoscope-compiler
make
``` 
This will create the **kcomp** compiler 

3. Compile your ```.k``` files using ```kcomp```
```bash
./kcomp <file.k> 2> <file.ll>
./tobinary <file.ll>
```

## Test your own Kaleidoscope Scripts
Use the **test** folder as a "_workspace_" to create your own ```.k``` file and compile them adding proper instructions in the Makefile.

### Examples
You can find some examples in **example-tests** folder.

## Contributors
 - Davide Benassi [[@davidebenassi]](https://github.com/davidebenassi)
 - Luca Lodesani [[@StayLode]](https://github.com/StayLode)
 - Ivan Giove [[@giove29]](https://github.com/giove29)
