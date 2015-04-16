#include "VEC2D.h"
#include<math.h>

VEC2D::VEC2D(double x1=0,double y1=0)
{
    x=x1; y=y1;
}

double VEC2D::Length()
{
    return sqrt(x*x+y*y);
}

VEC2D VEC2D::normalize()
{
    return VEC2D(x/sqrt(x*x+y*y),y/sqrt(x*x+y*y));
}

VEC2D VEC2D::sum(const VEC2D &d)
{
    return VEC2D(d.x+x,d.y+y);
}

VEC2D VEC2D::diff(const VEC2D &g)
{
    return VEC2D(x-g.x,y-g.y);
}

VEC2D VEC2D::scale(double t)
{
   return VEC2D(x*t,y*t);
}

double VEC2D::dot_product(const VEC2D &f)
{
    return f.x*x+f.y*y;
}
