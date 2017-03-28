#ifndef CBOX_H
#define CBOX_H

#include "Cshape3d.h"

class Cbox : public CShape3d{
    private:
    float length, width, height;
    public:
    Cbox(float l, float w, float h);
    float volume();
};


#endif // CBOX_H
