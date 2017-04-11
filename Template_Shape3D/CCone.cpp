#include "CCone.h"

template<typename type_t>
CCone<type_t>::CCone(type_t r, type_t h){
    radius = r;
    height = h;
}

template<typename type_t>
type_t CCone<type_t>::volume(){
    return ((type_t)3.14*radius*radius*height/3);
}
