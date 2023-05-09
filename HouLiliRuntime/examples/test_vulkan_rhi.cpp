#include <stdexcept>
#include "source//Engine.h";


int main(int argc, char** argv) {

    HouLili::HouLiliEngine* engine = new HouLili::HouLiliEngine();
    engine->startEngine("");
    engine->initialize();

    engine->run();

    return EXIT_SUCCESS;
}