// ===========================================================
// AERO ENGINE V3 - USER_SETUP.H (QUIRURGIC BYPASS)
// No modificar manualmente. Los cambios seran sobrescritos.
// Origen: HardwareConfig.h -> E32N32P_BOARD
// ===========================================================
#ifndef TFT_USER_SETUP_H
#define TFT_USER_SETUP_H

#define ST7789_DRIVER 1
#define TFT_WIDTH 240
#define TFT_HEIGHT 320
#define TFT_INVERSION_ON 1
#define TFT_RGB_ORDER TFT_BGR
#define USE_HSPI_PORT 1
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS 15
#define TFT_DC 2
#define TFT_RST -1
#define TFT_BL 27
#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000
#define LOAD_GLCD 1
#define LOAD_FONT2 1
#define LOAD_FONT4 1
#define LOAD_FONT6 1
#define LOAD_FONT7 1
#define LOAD_FONT8 1
#define LOAD_GFXFF 1
#define SMOOTH_FONT 1
#define SPI_OPTO_DELAY_US 2

#endif // TFT_USER_SETUP_H