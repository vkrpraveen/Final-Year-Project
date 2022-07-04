

#include <string>
#include "FunctionSwitcher.h"

int main(int argc, char *argv[]) {

    std::string sysName = "Constrained Combinatorial Testing Tool Set";
    Printer::printSystemInfo(sysName);
   
    OptionHandler oh(argc, argv);
    oh.printOptions();
    
    FunctionSwitcher mainSwitcher(oh);
    mainSwitcher.processSelector();

    Printer::printTln("System Terminating", true);
    Printer::printEqualLine(true);
    return 0;
}
