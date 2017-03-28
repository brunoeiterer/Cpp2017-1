#include "CCylinder.h"

CCylinder::CCylinder(float r, float h){
    radius = r;
    height = h;
}

float CCylinder::volume(){
    return (3.14*radius*radius*height);
}
