#include "MentorBitExpander.h"

MentorBitExpander::MentorBitExpander() {}

/**
 * 
 */
void MentorBitExpander::conectar(uint8_t port, MentorPort& module) {

    MentorPort::Port module_port;

    switch (port)
    {

        case MentorBitExpander::PUERTO_1:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_1_DIGITAL_1;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_1_DIGITAL_2;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_2:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_1_ANALOG_1;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_1_DIGITAL_3;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_3:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_1_ANALOG_2;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_1_DIGITAL_4;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_4:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_1_DIGITAL_5;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_1_DIGITAL_6;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_5:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_2_DIGITAL_1;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_2_DIGITAL_2;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_6:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_2_ANALOG_1;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_2_DIGITAL_3;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_7:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_2_ANALOG_2;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_2_DIGITAL_4;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_8:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_2_DIGITAL_5;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_2_DIGITAL_6;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_9:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_3_DIGITAL_1;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_3_DIGITAL_2;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_10:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_3_ANALOG_1;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_3_DIGITAL_3;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_11:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_3_ANALOG_2;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_3_DIGITAL_4;
            module.configPort(module_port);
            break;

        case MentorBitExpander::PUERTO_12:
            module_port.type = 'm';
            module_port.location = port;
            module_port.gpios[0] = MentorBitPuertos::PUERTO_GENERICO_3_DIGITAL_5;
            module_port.gpios[1] = MentorBitPuertos::PUERTO_GENERICO_3_DIGITAL_6;
            module.configPort(module_port);
            break;

        default:
            break;

    }

}
