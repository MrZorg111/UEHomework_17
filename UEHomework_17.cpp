#include <iostream>
#include <cmath>

class Vector {
    int x;
    int y;
    
public:
    Vector() {
        x = 0;
        y = 0;
        
    }
    Vector(int _x, int _y) {
        x = _x;
        y = _y;
    }

    void setX(int _x) {
        x = _x;
    }
    void setY(int _y) {
        y = _y;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    
    void getVectorlength() {
        std::cout << "Vector length: " << hypot(x, y);
    }
};

int main(){
    setlocale(LC_ALL, "rus");
    int hight, weight;
    std::cout << "Enter the coordinates of the vector: " << std::endl;
    std::cin >> hight >> weight;
    Vector vec(hight, weight);
    vec.getVectorlength();
    
}
