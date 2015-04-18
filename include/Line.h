#ifndef LINE_H
#define LINE_H


class Line
{
    public:
        Line();
        Line(double x,double y,double m); // constructor for line class
        Line inter_pnt(const Line &d);      //intersection point between two lines
        double x,y,m;                       //x , y co-ordinates and slope
    protected:
    private:
};

#endif // LINE_H
