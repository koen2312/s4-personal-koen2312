#include "../include/logger.h"
#include <iostream>
#include <string>
#include <sstream>

int berekenFactorial(int n) {
    #ifdef ENABLE_LOGGING
    std::ostringstream start;
    start << "Start berekenFactorial met n = " << n;
    log(start.str());
    #endif

    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;

        #ifdef ENABLE_LOGGING
        std::ostringstream results;
        results << "Intermediate result at i = " << i << " is " << result;
        log(results.str());
        #endif
    }

    #ifdef ENABLE_LOGGING
    std::ostringstream eind;
    eind << "Eind berekenFactorial met result = " << result;
    log(eind.str());
    #endif
    
    return result;
}

int main() {
    std::cout << "Factorial van 5 is " << berekenFactorial(5) << "\n";
    return 0;
}