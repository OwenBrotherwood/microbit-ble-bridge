/**
  * Compile time configuration options for the micro:bit runtime.
  */
  
#ifndef MICROBIT_CUSTOM_CONFIG_H
#define MICROBIT_CUSTOM_CONFIG_H

// Heap settings for a S130 softdevice build
#define MICROBIT_HEAP_BASE_BLE_ENABLED          0x20002500
#define MICROBIT_HEAP_SD_LIMIT                  0x20002800

#endif
