#if !defined(V_POINT)
#define V_POINT

class point {
public:
    point(float a, float b);

    float x;
    float y;
    double dist_between(point b);
    bool hypothese(point b);
};

#endif // V_POINT

#include <cmath>

point::point(float x, float y) {
    this->x = x;
    this->y = y;
}

double point::dist_between(point b) {
    return sqrt(pow((x - b.x), 2) + pow((y - b.y), 2));
}

bool point::hypothese(point b) {
    return this->dist_between(b) < 1;
}

#include <iostream>
using namespace std;

int main() {

    point a(0, 0);
    point b(1, 1);

    if (a.hypothese(b)) {
        cout << "L'hypothèse est vrai" << endl;
    }
    else {
        cout << "L'hypothèse est fausse" << endl;
    }

    return 0;
}