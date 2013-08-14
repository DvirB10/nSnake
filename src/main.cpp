//
//

#include <iostream>
#include "StateManager.hpp"
#include "Ncurses.hpp"
#include "Log.hpp"

// Shuts up the compiler about unused parameters.
#define UNUSED(x) ((void)(x))

int main(int argc, char* argv[])
{
    // Shut up, compiler!
    UNUSED(argc);
    UNUSED(argv);

    try
    {
        StateManager manager(80, 24);

        manager.run();
    }
    catch (...)
    {
        Log::error("Exception caught! Quitting...");
        std::cout << "coisa" << std::endl;
        Ncurses::exit();
        return -1;
    }
    return 0;
}

