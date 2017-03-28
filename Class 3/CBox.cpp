#include "Cshape3d.cpp"

class Cbox : public CShape3d{
    private:
    float length, width, height;
    public:
    Cbox(float l, float w, float h);
    float volume();
};

Cbox::Cbox(float l, float w, float h){
    length = l;
    width = w;
    height = h;
}

float Cbox::volume(){
    return (length*width*height);
}
