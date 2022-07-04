

#ifndef INTEGRATION_FUNCTIONSWITCHER_H
#define INTEGRATION_FUNCTIONSWITCHER_H

#include "../include/OptionHandler.h"
#include "../include/FileParser.h"
#include "../da/CDAGenerator.h"


class FunctionSwitcher {
private:
  
    ExeType thisExe;
    SubExeType thisSubExe;
    SymBreakType thisSymType;

    string testFile;
    string modelFile;

   
    ObjType fromObj;
    ObjType toObj;

    int valueOfD;
    int valueOfT;
    int valueOfS;
    bool overlineOfD;
    bool overlineOfT;

   
    int timeForRepeat;
    int specifiedSize;
    int timeoutForSMT;

    
    void cdaGeneration();
    std::vector<std::tuple<bool, int, long, int>> cdaSMTGen(FileParser *fpPointer, Sut *sutPointer, CDAGenerator *cdaGen);


public:
   
    explicit FunctionSwitcher(OptionHandler oh);
    
    int processSelector();
};


#endif //INTEGRATION_FUNCTIONSWITCHER_H
