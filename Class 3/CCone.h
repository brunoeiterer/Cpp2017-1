#ifndef CCONE_H
#define CCONE_H

#include "Cshape3d.h"

class CCone : public CShape3d{
    private:
    float radius,height;
    public:
    CCone(float r, float h);
    float volume();
};

#endif // CCONE_H
