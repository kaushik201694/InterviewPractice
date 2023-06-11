#include <iostream>

using namespace std;

class Shape
{
    public:
        virtual float getArea()=0;
};

class Triangle: public Shape
{
    public:
        Triangle(int base, int height)
        {
            this->base = base;
            this->height = height;
        }
        
        float getArea()
        {
            return 0.5*base*height;
        }
    private:
        int base;
        int height;
};

class Rectangle: public Shape
{
    public:
        Rectangle(int length, int breath)
        {
            this->length = length;
            this->breath = breath;
        }
        virtual float getArea()
        {
            return length*breath;
        }
    protected:
        int length;
        int breath;
        
};
class Square: public Rectangle
{
    public:
        Square(): Rectangle(length, breath)
        {
            this->length = length;
            cout<< "this length " << this->length << " length = " << length<<endl; 
        }
        float getArea()
        {
            cout<<"Length of square is: " << this->length<<endl;
            return length*length;
        }
    private:
        int length;
};

int main()
{
    Shape *s = new Triangle(1,1);
    cout<< "Area of Triangle = " << s->getArea()<<endl;
    
    Shape *s1= new Rectangle(5,6);
    cout<< "Area of Rectangle = " << s1->getArea()<<endl;
    Rectangle *s2= new Square();
    cout<< "Area of Square = " << s2->getArea()<<endl;

    return 0;
}