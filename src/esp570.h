#include <stdint.h>

int esp570_eeprom_read(int fd, uint16_t addr, uint8_t len, char *buf);
int esp570_i2c_read(int fd, uint8_t addr, uint8_t reg, uint16_t *val);
int esp570_i2c_write(int fd, uint8_t addr, uint8_t reg, uint16_t val);
void esp570_setup_unknown_3(int fd);
