#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();
    Shape* shape3 = new Shape();
    
    shape1->draw();  // Calls draw() of Circle class
    shape2->draw();  // Calls draw() of Square class
    shape3->draw();  // Calls draw() of Square class
    
    delete shape1;
    delete shape2;
    delete shape3;
    
    return 0;
}
