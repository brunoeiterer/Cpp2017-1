#include "CCone.h"

CCone::CCone(float r, float h){
    radius = r;
    height = h;
}

float CCone::volume(){
    return (3.14*radius*radius*height/3);
}
