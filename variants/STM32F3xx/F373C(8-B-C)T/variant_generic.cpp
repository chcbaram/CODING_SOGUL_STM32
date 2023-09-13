/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_GENERIC_F373C8TX) || defined(ARDUINO_GENERIC_F373CBTX) || defined(ARDUINO_GENERIC_F373CCTX)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D0/A0
  PA_1,   // D1/A1
  PA_2,   // D2/A2
  PA_3,   // D3/A3
  PA_4,   // D4/A4
  PA_5,   // D5/A5
  PA_6,   // D6/A6
  PA_8,   // D7
  PA_9,   // D8
  PA_10,  // D9
  PA_11,  // D10
  PA_12,  // D11
  PA_13,  // D12
  PA_14,  // D13
  PA_15,  // D14
  PB_0,   // D15/A7
  PB_1,   // D16/A8
  PB_2,   // D17
  PB_3,   // D18
  PB_4,   // D19
  PB_5,   // D20
  PB_6,   // D21
  PB_7,   // D22
  PB_8,   // D23
  PB_9,   // D24
  PB_14,  // D25
  PB_15,  // D26
  PC_13,  // D27
  PC_14,  // D28
  PC_15,  // D29
  PD_8,   // D30
  PE_8,   // D31
  PE_9,   // D32
  PF_0,   // D33
  PF_1,   // D34
  PF_6,   // D35
  PF_7    // D36
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  3,  // A3,  PA3
  4,  // A4,  PA4
  5,  // A5,  PA5
  6,  // A6,  PA6
  15, // A7,  PB0
  16  // A8,  PB1
};

#endif /* ARDUINO_GENERIC_* */