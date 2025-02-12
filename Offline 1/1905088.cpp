#include <iostream>
#include<cmath>

using namespace std;

class Point
{
    int x, y;

public:
    Point();
    Point(int m,int n);
    ~Point();
    void set(int m, int n);
    void get(int* m, int* n);
    void print()
    {
        cout << "Coordinate: "<< x <<", " <<y <<endl;
    }

};

Point :: Point()
{

}

Point :: Point(int m,int n)
{
    x=m;
    y=n;
}

Point :: ~Point()
{

}

void Point :: set(int m,int n)
{
    x=m;
    y=n;
}

void Point :: get(int* m, int* n)
{
    *m=x;
    *n=y;
}

class Circle
{
    Point p;
    int radius;

public:
    Circle(int m, int n, int r);
    ~Circle();
    void update(int m, int n);
    void update(int r);
    void update (int m, int n, int r);
    void print()
    {
        cout << "Center ";
        p.print();
        cout << "Radius: " << radius << endl;
    }


};

Circle :: Circle(int m, int n, int r)
{
    p.set(m,n);
    radius =r;
}

Circle :: ~Circle()
{

}

void Circle :: update(int m, int n)
{
    int mx, my;
    p.get(&mx, &my);
    mx += m;
    my += n;
    p.set(mx, my);
}

void Circle :: update(int r)
{
    radius += r;
}

void Circle :: update(int m, int n, int r)
{
    int mx, my;
    p.get(&mx, &my);
    mx += m;
    my += n;
    p.set(mx, my);
    radius += r;
}


class Line
{
    Point p1,p2;

public:
    Line(int a1, int b1, int a2, int b2);
    ~Line();
    double length();
};

Line :: Line(int a1, int b1, int a2, int b2)
{
    p1.set(a1, b1);
    p2.set(a2, b2);
}

Line :: ~Line()
{

}

double Line :: length()
{
    int x1,x2,y1,y2;
    double len;
    p1.get(&x1, &y1);
    p2.get(&x2, &y2);
    len=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return len;

}


int main()
{
    Point p(5,5);
    Circle c(2, 3, 5);
    Line l(3,2,6,9);

    cout << endl << "Point Display" <<endl;
    p.print();
    cout << endl << "Circle Display" <<endl;
    c.print();
    cout << endl;


    cout << "First Update" << endl;
    c.update(5,5);
    c.print();
    cout <<endl;

    cout << "Second Update" << endl;
    c.update(6);
    c.print();
    cout << endl;

    cout << "Third Update" << endl;
    c.update(2,2,2);
    c.print();
    cout << endl;

    cout<<"length:"<<l.length()<<endl;



    return 0;
}
