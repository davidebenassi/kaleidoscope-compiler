This folder is a collection of some kaleidoscope scripts.\
All scripts have an auxiliary "**call cpp program**" that allows the created kaleidoscope functions
to be called. \
Kaleidoscope does not support **print** and **input** functions, so auxiliary C++ code is used.

## Compile the examples

### Compile all examples
```bash
make all
make clean
```

### Compile a specific example
```bash
make <name>
make clean
```
Where _name_ can be:

1. **floor**  -> Exctracts the integer part of a number
2. **rand**   -> Generates pseudo-rando numbers between 0 and 1
3. **fibonacci** -> Computes yet another Fibonacci's number
4. **sqrt** -> Computes the square root of a number
5. **eqn2** -> Calculates the solutions of a second-degree equation ax**2+bx+c=0, given the coefficients a,b and c
6. **sqrt2** -> Equal to sqrt but it uses the logic OR operatori
7. **sqrt3** -> Equal to sqrt but it uses the logic AND and NOT operators


**NOTE**: clean will remove auxiliary files used to compile. If you want to remove also the binary run ```make cleanall```

## Run an example

Once you have generated the binary file you can run it with
```bash
./<name>
```