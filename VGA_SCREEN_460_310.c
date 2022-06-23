/* Logisim automatically generated file for a VGA-component */

void setVGA_SCREEN_460_310VgaMode(unsigned int value) {
  volatile unsigned int* base;
  base = (unsigned int *) 0x0;
  base[0] = value;
}

unsigned int getVGA_SCREEN_460_310VgaMode() {
  volatile unsigned int* base;
  base = (unsigned int *) 0x0;
  return base[0];
}

