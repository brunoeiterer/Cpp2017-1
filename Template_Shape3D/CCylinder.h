#ifndef CCYLINDER_H
#define CCYLINDER_H

#include "Cshape3d.h"

template<typename type_t>
class CCylinder : public CShape3d<type_t>{
    private:
    type_t radius, height;
    public:
    CCylinder<type_t>(type_t r, type_t h);
    type_t volume();
};

template class CCylinder<float>;
template class CCylinder<int>;

#endif
