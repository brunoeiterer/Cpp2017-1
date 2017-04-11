#include "CBox.h"

template<typename type_t>
Cbox<type_t>::Cbox(type_t l, type_t w, type_t h){
    length = l;
    width = w;
    height = h;
}

template<typename type_t>
type_t Cbox<type_t>::volume(){
    return (length*width*height);
}
