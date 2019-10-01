#ifndef FONTS_H
#define FONTS_H

void fonts_init(void);
//Solution goes here
//0, T, D U E F L P

void drawO(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawT(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawD(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawU(uint32_t x, uint32_t y, uint32_t BOX_SIZE);

void drawE(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawF(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawL(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawP(uint32_t x, uint32_t y, uint32_t BOX_SIZE);

void drawA(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawX(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawC(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawI(uint32_t x, uint32_t y, uint32_t BOX_SIZE);
void drawN(uint32_t x, uint32_t y, uint32_t BOX_SIZE);


void zoomIn(uint32_t BOX_SIZE, uint32_t zoom);
void zoomOut(uint32_t BOX_SIZE, uint32_t zoom); 
int32_t abs(int32_t v);
void printToScreen(uint32_t BOX_SIZE);
uint32_t x_y_to_raw(uint32_t x, uint32_t y);

#endif
