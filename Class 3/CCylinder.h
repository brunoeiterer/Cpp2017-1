#ifndef CCYLINDER_H
#define CCYLINDER_H

#include "Cshape3d.h"

class CCylinder : public CShape3d{
    private:
    float radius, height;
    public:
    CCylinder(float r, float h);
    float volume();
};

#endif
