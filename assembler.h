#ifndef ASSEMBLER_H
#define ASSEMBLER_H

#include <string>
#include <cstdio>
#include <cstdlib>

class label{
public:
    std::string name;
    int addr;
};
class variable{
public:
    int *value;
    int len;
};

class assembler{
private:
    label globalLabel[1000];
    int labelNumber;
    variable globalVariable[1000];
    int variableNumber;
    int firstSearch();
    int finalAssmemble();
public:
    int *binaryProgram;
    int programLen;

    assembler();
    ~assembler();
    int assemble(std::string);
    void output(std::string);
};

#endif // ASSEMBLER_H
