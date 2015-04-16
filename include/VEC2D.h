#ifndef VEC2D_H
#define VEC2D_H


class VEC2D
{
    public:
        VEC2D(double x1,double y1);
        double Length();
        VEC2D normalize();
        VEC2D sum (const VEC2D &d);
        VEC2D diff (const VEC2D &g);
        VEC2D scale (double t);
        double dot_product(const VEC2D &f);
        double x,y;
};

#endif // VEC2D_H
