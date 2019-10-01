
#include <stdint.h>
#include <stdbool.h>
#include "hal.h"
#include "fonts.h"
#include "../drivers/fb/fb.h"

#define NULL 0


static uint32_t* fb; //Framebuffer pointer

/*
*  HAL Video Init
*/
uint32_t hal_video_init( void ){
    if( (fb=fb_init()) == NULL ){       //Init framebuffer
        return HAL_FAILED;
    }

    fonts_init();

    return HAL_SUCCESS;

}


/*
*  HAL Video Puts
*
*/
void hal_video_puts( uint8_t* string, uint32_t size, VideoColor color ){
    
  
    
    

    //Solution goes here


}

/*
*  HAL Video Putc
*
*/
void hal_video_putc( uint8_t c, uint32_t size, VideoColor color  ){
    //Solution goes here

//printToScreen(20);
}


/*
*  HAL Video Putc XY
*
*/
void hal_video_putc_x_y( uint32_t x, uint32_t y, uint8_t c, uint32_t size, VideoColor color  ){
    //Solution goes here
   // printToScreen(20);
}


/*
*  HAL Video Clear
*/
void hal_video_clear( void ){
    for(uint32_t i=0; i<SYSTEM_SCREEN_WIDTH*SYSTEM_SCREEN_LENGTH; i++)
    put_pixel_raw( i, 0x00000000 );
   
    //Solution goes here
}



//Solution goes here


///////////////////////////////
/////// DRIVER INTERFACE
//////////////////////////////
void put_pixel_raw( uint32_t raw_pos, uint32_t color ){
    *(fb + raw_pos) = color; //<<<-- Note that addition is pointer arithmetic!
}
