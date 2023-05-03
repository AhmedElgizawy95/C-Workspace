#include<iostream>
#include"typeinfo"
class Shape 
{
    public:
    virtual void draw() = 0;

   virtual ~Shape()
    {

    }
};

class Circle : public  Shape
{
    public:
    void draw() override
    {
        std::cout <<"Draw Circle" << std::endl;
    }


    void draw_circle()
    {
        std::cout << "Draw Circle From Circle " << std::endl;
    } 

    ~Circle()
    {

    }
};

int main()
{
    Circle circle;

    Shape *pShape = &circle;

    pShape-> draw();


    //Dynamic Casting 
    Circle *pCircle = dynamic_cast<Circle*>(pShape);

    pCircle->draw_circle();

    // Runtime Type Information
    std::cout <<"Type of pShape = " << typeid(*pShape).name() << " Type of pCircle = " << typeid(*pCircle).name() << std::endl;
    
    delete pShape;
    return 0;
}