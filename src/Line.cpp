#include "Line.h"

Line::Line(double x1,double y1,double m1)
{
    x=x1;
    y=y1;
    m=m1;
}

Line Line::inter_pnt(const Line &d)
{
    return Line((m*x-d.x*d.m+d.y-y)/(m-d.m),(m*d.m*(x-d.x)+m*d.y-y*d.m)/(m-d.m),0);
}
