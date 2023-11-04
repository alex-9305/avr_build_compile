#ifndef __UC_DEFINITIONS_H
#define __UC_DEFINITIONS_H

#include <stdint.h>

    /* Template struct */
    typedef struct uc_def
    {
        uint16_t stack_pointer_pos;
        uint16_t sram_start;
        uint16_t sram_end;
        uint16_t ram_size = sram_end - sram_start;
    } UC_DEF;

    /* Choose supported uc */
    #define DEF_DEVICE_ATTINY2313
    // # define DEF_DEVICE_????

    /* Definitions */
    #ifdef DEF_DEVICE_ATTINY2313
        const struct uc_def DEVICE =    {
                                            .stack_pointer_pos = 0xDF,
                                            .sram_start = 0x60,
                                            .sram_end = 0xDF,
                                        };
    #endif // DEF_DEVICE_ATTINY2313



#endif // __UC_DEFINITIONS_H