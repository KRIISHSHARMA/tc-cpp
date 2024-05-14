#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

class Triangle {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {
        if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
            throw invalid_argument("All sides of the triangle must be greater than 0.");
        }
        if (sideA + sideB <= sideC || sideB + sideC <= sideA || sideA + sideC <= sideB) {
            throw invalid_argument("Sum of any two sides should be greater than the third side.");
        }
    }

    double calculateRightTriangleArea() const {
        if (sideA == sideB || sideA == sideC || sideB == sideC) {
            throw invalid_argument("Not a right-angled triangle.");
        }
        return 0.5 * sideA * sideB;
    }

    double calculateHeronTriangleArea() const {
        double s = (sideA + sideB + sideC) / 2;
        return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }
};

int main() {
    try {
        Triangle t1(3, 0, 5);
        cout << "Area of right-angled triangle: " << t1.calculateRightTriangleArea() << endl;

        Triangle t2(5, 12, 13);
        cout << "Area of right-angled triangle: " << t2.calculateRightTriangleArea() << endl;

        Triangle t3(8, 15, 17);
        cout << "Area of Heron's triangle: " << t3.calculateHeronTriangleArea() << endl;

        // Invalid triangles (commented out to avoid terminating the program)
        // Triangle t4(0, 4, 5);
        // Triangle t5(5, 10, 25);
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
