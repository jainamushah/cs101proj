#ifndef LINE_H
#define LINE_H


class Line
{
    public:
        Line();
        Line(double x,double y,double m);
        Line inter_pnt(const Line &d);
        double x,y,m;
    protected:
    private:
};

#endif // LINE_H
