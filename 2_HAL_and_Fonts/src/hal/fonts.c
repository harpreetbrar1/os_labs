
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "system.h"
#include "fonts.h"

//BOX SIZE is 30
#define WHITE 0xFFFFFFFF


uint32_t x_y_to_raw(uint32_t x, uint32_t y){
	return y*SYSTEM_SCREEN_WIDTH + x;
}


void fonts_init(void){
}

void drawN(uint32_t x, uint32_t y,uint32_t BOX_SIZE) {
    for (uint32_t i = 0; i < BOX_SIZE; i++){
        put_pixel_raw( x_y_to_raw(x+(0.1*BOX_SIZE), y+i), 0xFFFFFFFF );
        put_pixel_raw(x_y_to_raw(x+(0.1*BOX_SIZE)+i, y+i), 0xFFFFFFFF );
        put_pixel_raw( x_y_to_raw(x+(1.1*BOX_SIZE), y+i), 0xFFFFFFFF );      
    }
}



void drawA(uint32_t x, uint32_t y, uint32_t BOX_SIZE) {
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

void drawX(uint32_t x, uint32_t y, uint32_t BOX_SIZE) {
    
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+i, y+i), 0xFFFFFFFF );
        put_pixel_raw(x_y_to_raw(x+BOX_SIZE-i-2, y+i), 0xFFFFFFFF );
        
    }
}

void drawC(uint32_t x, uint32_t y, uint32_t BOX_SIZE) {

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

void drawI(uint32_t x, uint32_t y, uint32_t BOX_SIZE) {
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+i+(0.25*BOX_SIZE), y), 0xFFFFFFFF );
        put_pixel_raw(x_y_to_raw(x+i+(0.25*BOX_SIZE), y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+(0.50*BOX_SIZE), y+i), 0xFFFFFFFF );
        
    }

}



void drawO(uint32_t x, uint32_t y, uint32_t BOX_SIZE) { 

    for(uint32_t i=0; i<BOX_SIZE*0.60; i++) {
        //top line
        put_pixel_raw(x_y_to_raw(x+i+(BOX_SIZE/4), y), 0xFFFFFFFF );
        //bottom line
        put_pixel_raw(x_y_to_raw(x+i+(BOX_SIZE/4), y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
        //left edge
        put_pixel_raw(x_y_to_raw(x, y+i+0.25*BOX_SIZE), 0xFFFFFFFF);
        //right right
        put_pixel_raw(x_y_to_raw(x+BOX_SIZE-1, y+i+0.25*BOX_SIZE), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<0.25*BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+i, y-i+0.25*BOX_SIZE), 0xFFFFFFFF);
        put_pixel_raw(x_y_to_raw(x+i, y+(0.75*BOX_SIZE)+i), 0xFFFFFFFF);
        put_pixel_raw(x_y_to_raw(x+(0.95*BOX_SIZE)-i, y+(0.75*BOX_SIZE)+i), 0xFFFFFFFF);
        
        put_pixel_raw(x_y_to_raw(x+(0.75*BOX_SIZE)+i, y+(0.01*BOX_SIZE)+i), 0xFFFFFFFF);
    
    }

}

void drawT(uint32_t x, uint32_t y,uint32_t BOX_SIZE) {
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+i+(0.08*BOX_SIZE), y), 0xFFFFFFFF );
        //put_pixel_raw(x_y_to_raw(x+i+(0.25*BOX_SIZE), y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+(0.50*BOX_SIZE), y+i), 0xFFFFFFFF );  
    }
}

void drawD(uint32_t x, uint32_t y, uint32_t BOX_SIZE) { 

    for(uint32_t i=0; i<BOX_SIZE*0.8; i++) {
        //top line
        put_pixel_raw(x_y_to_raw(x+i+(BOX_SIZE/64), y), 0xFFFFFFFF );
        //bottom line
        put_pixel_raw(x_y_to_raw(x+i+(BOX_SIZE/64), y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<BOX_SIZE; i++) {
     //left edge
        put_pixel_raw(x_y_to_raw(x, y+i), 0xFFFFFFFF);
    }


    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
       
        //right right
        put_pixel_raw(x_y_to_raw(x+BOX_SIZE-1, y+i+0.25*BOX_SIZE), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<0.25*BOX_SIZE; i++) {
       
        //bottom right corner
        put_pixel_raw(x_y_to_raw(x+(0.95*BOX_SIZE)-i, y+(0.75*BOX_SIZE)+i), 0xFFFFFFFF);
        //top right corner
        put_pixel_raw(x_y_to_raw(x+(0.75*BOX_SIZE)+i, y+(0.01*BOX_SIZE)+i), 0xFFFFFFFF);
    
    }

}

void drawU(uint32_t x, uint32_t y, uint32_t BOX_SIZE) { 
//COLOR_WHITE
    for(uint32_t i=0; i<BOX_SIZE*0.60; i++) {
        //top line
    
        //bottom line
        put_pixel_raw(x_y_to_raw(x+i+(BOX_SIZE/4), y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
        //left edge
        put_pixel_raw(x_y_to_raw(x, y+i+0.25*BOX_SIZE), 0xFFFFFFFF);
        //right right
        put_pixel_raw(x_y_to_raw(x+BOX_SIZE-1, y+i+0.25*BOX_SIZE), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<0.25*BOX_SIZE; i++) {
       
        //bottom left
        put_pixel_raw(x_y_to_raw(x+i, y+(0.75*BOX_SIZE)+i), 0xFFFFFFFF);
    //bottom right
        put_pixel_raw(x_y_to_raw(x+(0.95*BOX_SIZE)-i, y+(0.75*BOX_SIZE)+i), 0xFFFFFFFF);
        
    
    }

}

void drawE(uint32_t x, uint32_t y, uint32_t BOX_SIZE) {
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
        //top line
        put_pixel_raw(x_y_to_raw(x+i, y), 0xFFFFFFFF );
        //middle line
         put_pixel_raw(x_y_to_raw(x+i, y+(BOX_SIZE*0.5)-1), 0xFFFFFFFF);
        //bottom line
        put_pixel_raw(x_y_to_raw(x+i, y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+(0.01*BOX_SIZE), y+i), 0xFFFFFFFF );
        
    }

}

void drawF(uint32_t x, uint32_t y, uint32_t BOX_SIZE) {
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
        //top line
        put_pixel_raw(x_y_to_raw(x+i, y), 0xFFFFFFFF );
        //middle line
         put_pixel_raw(x_y_to_raw(x+i, y+(BOX_SIZE*0.5)-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+(0.01*BOX_SIZE), y+i), 0xFFFFFFFF );
        
    }

}

void drawL(uint32_t x, uint32_t y, uint32_t BOX_SIZE) {
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
 //bottom line
        put_pixel_raw(x_y_to_raw(x+i, y+BOX_SIZE-1), 0xFFFFFFFF);
    }
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+(0.01*BOX_SIZE), y+i), 0xFFFFFFFF );
        
    }

}

void drawP(uint32_t x, uint32_t y, uint32_t BOX_SIZE) {
    for(uint32_t i=0; i<0.50*BOX_SIZE; i++) {
        //top line
        put_pixel_raw(x_y_to_raw(x+i, y), 0xFFFFFFFF );
        //middle line
        put_pixel_raw(x_y_to_raw(x+i, y+(BOX_SIZE*0.5)-1), 0xFFFFFFFF);
     
    }
    for(uint32_t i=0; i<BOX_SIZE; i++) {
        put_pixel_raw(x_y_to_raw(x+(0.01*BOX_SIZE), y+i), 0xFFFFFFFF );
        put_pixel_raw(x_y_to_raw(x+(0.5*BOX_SIZE), y+(i*0.5)), 0xFFFFFFFF );
       
        
    }

}













int32_t abs(int32_t v){
		if(v<0) return v*(-1);
		else return v;
}

void printToScreen(uint32_t BOX_SIZE){
    uint32_t i = 1, j=1,x=0;
    int32_t y=BOX_SIZE*i,counter = 0;
        for(uint32_t i=0; i<1000000; i=i+BOX_SIZE) {
            
            switch (counter) {
                case 0:
                    drawP(x,y,BOX_SIZE);
                    break;       
                case 1:
                    drawX(x,y,BOX_SIZE);
                    break;       
                case 2:
                    drawC(x,y,BOX_SIZE);
                    break;       
                case 3:
                    drawA(x,y,BOX_SIZE);
                    break;
                case 4:
                    drawU(x,y,BOX_SIZE);
                    break;
                case 5:
                    drawE(x,y,BOX_SIZE);
                    break;       
                case 6:
                    drawF(x,y,BOX_SIZE);
                    break;
                case 7:
                    drawO(x,y,BOX_SIZE);
                    break;
                case 8:
                    drawL(x,y,BOX_SIZE);
                    break;    
                case 9:
                    drawD(x,y,BOX_SIZE);
                    break;      
                case 10:
                    drawI(x,y,BOX_SIZE);
                    break; 
                case 11:
                    drawT(x,y,BOX_SIZE);
                    break;                        
            }
            counter++;
            x = x+BOX_SIZE;

            if (counter==12) {
                counter=0;
                
            }
            
            if(x>=1020-1.10*BOX_SIZE) {
                y+=BOX_SIZE;
                x=0;

            }
            if(y>700-1.10*BOX_SIZE) {
                break;
            }
            
        }
       
}


void zoomIn(uint32_t BOX_SIZE, uint32_t zoom) {
    
        for(uint32_t i=0; i<SYSTEM_SCREEN_WIDTH*SYSTEM_SCREEN_LENGTH; i++) {
            put_pixel_raw( i, 0x00000000 );
        }
        
        printToScreen(BOX_SIZE+zoom);
    


}

void zoomOut(uint32_t BOX_SIZE, uint32_t zoom) {
     for(uint32_t i=0; i<SYSTEM_SCREEN_WIDTH*SYSTEM_SCREEN_LENGTH; i++) {
            put_pixel_raw( i, 0x00000000 );
        }
        printToScreen(zoom);
    
}




//Solution goes here