
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "system.h"
#include "fonts.h"

//BOX SIZE is 30



uint32_t x_y_to_raw(uint32_t x, uint32_t y){
	return y*SYSTEM_SCREEN_WIDTH + x;
}
void fonts_init(void){

}

void drawA(uint32_t x, uint32_t y) {
     for(uint32_t i=(BOX_SIZE/2); i>0; i--) {
        put_pixel_raw(x_y_to_raw(x+i+(BOX_SIZE/2),y+i+i), 0xFFFFFFFF );
        put_pixel_raw(x_y_to_raw(x-i+(BOX_SIZE/2),y+i+i), 0xFFFFFFFF );
        //put_pixel_raw(x_y_to_raw(x+(BOX_SIZE/2)+i,y-i), 0xFFFFFF00 );
    }
    
    uint32_t newX = x + 2;
     for(uint32_t i=0; i<BOX_SIZE-4; i++) {
        put_pixel_raw(x_y_to_raw(newX+i,y+BOX_SIZE-BOX_SIZE/3), 0xFFFFFFFF );
    }

     
}

void drawX(uint32_t x, uint32_t y) {
    
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+i, y+i), 0xFFFFFFFF );
        put_pixel_raw(x_y_to_raw(x+BOX_SIZE-i-2, y+i), 0xFFFFFFFF );
        
    }
}

void drawC(uint32_t x, uint32_t y) {


    
//0xFFFFFFFF
    for(uint32_t i=0; i<BOX_SIZE*0.60; i++) {
        put_pixel_raw(x_y_to_raw(x+i+(BOX_SIZE/4), y), 0xFFFFFFFF );
        put_pixel_raw(x_y_to_raw(x+i+(BOX_SIZE/4), y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x, y+i+0.25*BOX_SIZE), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<0.25*BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+i, y-i+0.25*BOX_SIZE), 0xFFFFFFFF);
        put_pixel_raw(x_y_to_raw(x+i, y+(0.75*BOX_SIZE)+i), 0xFFFFFFFF);
    }
}

void drawI(uint32_t x, uint32_t y) {
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+i+(0.25*BOX_SIZE), y), 0xFFFFFFFF );
        put_pixel_raw(x_y_to_raw(x+i+(0.25*BOX_SIZE), y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+(0.50*BOX_SIZE), y+i), 0xFFFFFFFF );
        
    }

}

int32_t abs(int32_t v){
		if(v<0) return v*(-1);
		else return v;
}

void printToScreen(){
    uint32_t i = 1, j=1,x=0;
    int32_t y=BOX_SIZE*i,counter = 0;
        for(uint32_t i=0; i<500000; i=i+BOX_SIZE) {
            
            switch (counter) {
                case 0:
                    drawI(x,y);
                    break;       
                case 1:
                    drawX(x,y);
                    break;       
                case 2:
                    drawC(x,y);
                    break;       
                case 3:
                    drawA(x,y);
                    break;       
            }
            counter++;
            x = x+BOX_SIZE;

            if (counter==4) {
                counter=0;
            }
            
            if(x>=1020) {
                y+=BOX_SIZE;
                x=0;

            }
            if(y>700) {
                break;
            }
            
        }
       
}




//Solution goes here