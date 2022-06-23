/* Logisim automatically generated file for a VGA-component */

#ifndef __VGA_SCREEN_460_310_H__
#define __VGA_SCREEN_460_310_H__

#define SOFT_MODE_160X120_MASK 1
#define SOFT_MODE_320X240_MASK 2
#define SOFT_MODE_640X480_MASK 4
#define SOFT_MODE_800X600_MASK 8
#define SOFT_MODE_1024X768_MASK 16

/* With the following functions the vga mode can be manipulated.
 * Reading the vga mode returns the supported modes (see above defines of possible modes)
 * Writing a supported mode will change the display mode of the VGA display
 */
void setVGA_SCREEN_460_310VgaMode(unsigned int value);
unsigned int getVGA_SCREEN_460_310VgaMode();

#endif
