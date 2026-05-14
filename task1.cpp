#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;  
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {   
        radius = r;
    }

    float area() {    
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) {  
        length = l;
        width = w;
    }

    float area() {                
        return length * width;
    }
};

int main() {
    Circle c(8);          
    Rectangle r(2, 6);     

    cout << "Circle area " << c.area() << endl;
    cout << "Rectangle area " << r.area() << endl;

    return 0;
}