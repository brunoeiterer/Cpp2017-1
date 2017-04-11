#ifndef CCONE_H
#define CCONE_H

#include "Cshape3d.h"

template<typename type_t>
class CCone : public CShape3d<type_t>{
    private:
    type_t radius,height;
    public:
    CCone<type_t>(type_t r, type_t h);
    type_t volume();
};

template class CCone<float>;
template class CCone<int>;
#endif // CCONE_H
