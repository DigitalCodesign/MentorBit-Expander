#include "Arduino.h"

#ifndef MentorBitExpander_h
#define MentorBitExpander_h

#include <MentorPort.h>
#include <MentorBitPuertos.h>

class MentorBitExpander : public MentorBitPuertos
{

    public:

        static const uint8_t PUERTO_1 = 0x11;
        static const uint8_t PUERTO_2 = 0x12;
        static const uint8_t PUERTO_3 = 0x13;
        static const uint8_t PUERTO_4 = 0x14;
        static const uint8_t PUERTO_5 = 0x15;
        static const uint8_t PUERTO_6 = 0x16;
        static const uint8_t PUERTO_7 = 0x17;
        static const uint8_t PUERTO_8 = 0x18;
        static const uint8_t PUERTO_9 = 0x19;
        static const uint8_t PUERTO_10 = 0x20;
        static const uint8_t PUERTO_11 = 0x21;
        static const uint8_t PUERTO_12 = 0x22;

        MentorBitExpander();
        void conectar(uint8_t port, MentorPort& module);

};

#endif