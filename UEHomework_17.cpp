#include <iostream>
#include <cmath>

class Vector {
    int pointA[2];
 
public:
    Vector() {
        pointA[2] = {0};
     }
    Vector(const int _x, const int _y) {
        pointA[0] = _x;
        pointA[1] = _y;
    }

    void setX(int _x) {
        pointA[0] = _x;
    }
    void setY(int _y) {
        pointA[1] = _y;
    }
    int getX() {
        return pointA[0];
    }
    int getY() {
        return pointA[1];
    }
    
    void getVectorlength() {
        std::cout << "Vector length: " << hypot(pointA[0], pointA[1]);
    }
};

int main(){
    setlocale(LC_ALL, "rus");
    int x, y;
    std::cout << "Enter the coordinates of the vector: " << std::endl;
    std::cin >> x >> y;
    Vector vec(x, y);
    vec.getVectorlength();
    
}
