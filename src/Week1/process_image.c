#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "image.h"


// Lets look at the image struct
//typedef struct{
//     int h,w,c;
//     float *data;
// } image;


// FILL THIS METHOD TO GET THE PIXEL AT THE LOCATION IN THE IMAGE STORED AS CHW (CHANNEL-->c, HEIGHT-->y, WIDTH-->x)
float get_pixel(image im, int x, int y, int c)
{
    // TODO Fill this in
    return 0;
}

// FILL THIS METHOD TO SET THE PIXEL AT ANY LOCATION IN THE IMAGE STIRED AS CHW (CHANNEL-->c, HEIGHT-->y, WIDTH-->x)
void set_pixel(image im, int x, int y, int c, float v)
{
    // TODO Fill this in
}

// COPY THE ENTIRE IMAGE BYTES AND CREATE A NEW MEMORY LOCATION AND COPY EVERYTHING
image copy_image(image im)
{
    image copy = make_image(im.w, im.h, im.c);
    // TODO Fill this in
    return copy;
}



// CHECK WIKI FOR ALGO DETAILS
// https://en.wikipedia.org/wiki/Grayscale
image rgb_to_grayscale(image im)
{
    assert(im.c == 3);
    image gray = make_image(im.w, im.h, 1);
    // TODO Fill this in
    return gray;
}

// TO ADD A FLOAT VALUE TO EVERY PIXEL IN THE IMAGE 
// OR pixel(x, y, c) += (float) value
void shift_image(image im, int c, float v)
{
    // TODO Fill this in
}

void clamp_image(image im)
{
    // TODO FILL THIS IN
    
}


// These might be handy
float three_way_max(float a, float b, float c)
{
    return (a > b) ? ( (a > c) ? a : c) : ( (b > c) ? b : c) ;
}

float three_way_min(float a, float b, float c)
{
    return (a < b) ? ( (a < c) ? a : c) : ( (b < c) ? b : c) ;
}


// LOOK AT THE WIKI LINK TO IMPLEMENT THE ALGORITHM
// https://en.wikipedia.org/wiki/HSL_and_HSV
void rgb_to_hsv(image im)
{
    // TODO Fill this in
}

// LOOK AT THE WIKI LINK TO IMPLEMENT THE ALGORITHM
// https://en.wikipedia.org/wiki/HSL_and_HSV
void hsv_to_rgb(image im)
{
    // TODO Fill this in
}