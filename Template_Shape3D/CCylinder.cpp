#include "CCylinder.h"

template<typename type_t>
CCylinder<type_t>::CCylinder(type_t r, type_t h){
    radius = r;
    height = h;
}

template<typename type_t>
type_t CCylinder<type_t>::volume(){
    return ((type_t)3.14*radius*radius*height);
}
