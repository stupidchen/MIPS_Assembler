#include "assembler.h"

assembler::assembler()
{
    variableNumber=0;
    labelNumber=0;
    programLen=0;
}

assembler::~assembler()
{

}

int assembler::firstSearch(){

    return 0;
}

int assembler::finalAssmemble(){

    return 0;
}

int assembler::assemble(std::string fileName){

    return 0;
}

void assembler::output(std::string fileName){
    freopen(fileName.data(),"w",stdout);
    for (int i=0;i<programLen;i++) printf("%c",*(binaryProgram+i));
    fclose(stdout);
}
