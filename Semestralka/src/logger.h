#pragma once
#include <string>

class CLogger{
public:
    // function only acts as a switch to call one of the corresponding methods
    void log ( std::string );

private:
    void database ( std::string );

    void file ( std::string );

    void terminal ( std::string );
};