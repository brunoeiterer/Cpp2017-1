#ifndef CSHAPE3D_H
#define CSHAPE3D_H

template<typename type_t>
class CShape3d{
    private:
    public:
    virtual type_t volume() = 0;
};

template class CShape3d<float>;
template class CShape3d<int>;
#endif // CSHAPE3D_H
