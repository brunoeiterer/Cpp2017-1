#ifndef CBOX_H
#define CBOX_H

#include "Cshape3d.h"

template<typename type_t>
class Cbox : public CShape3d<type_t>{
    private:
    type_t length, width, height;
    public:
    Cbox<type_t>(type_t l, type_t w, type_t h);
    type_t volume();
};

template class Cbox<float>;
template class Cbox<int>;



#endif // CBOX_H
