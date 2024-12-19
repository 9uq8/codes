

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = 10.5;
    float b = 10.4;
    float c = 10.6;

    float d = -10.5;
    float e = -10.4;
    float f = -10.6;

    int pos_a = a;
    int pos_b = b;
    int pos_c = c;

    int neg_d = d;
    int neg_e = e;
    int neg_f = f;

    cout << "Original Value = " << a << " Integer Value = " << pos_a << endl;
    cout << "Original Value = " << b << " Integer Value = " << pos_b << endl;
    cout << "Original Value = " << c << " Integer Value = " << pos_c << endl;

    cout << "Original Value = " << d << " Integer Value = " << neg_d << endl;
    cout << "Original Value = " << e << " Integer Value = " << neg_e << endl;
    cout << "Original Value = " << f << " Integer Value = " << neg_f << endl;

    cout << "==============================================" << endl;

    cout << "Original Value = " << a << " std::floor = " << std::floor(a) << endl;
    cout << "Original Value = " << b << " std::floor = " << std::floor(b) << endl;
    cout << "Original Value = " << c << " std::floor = " << std::floor(c) << endl;

    cout << "Original Value = " << a << " std::ceil = " << std::ceil(a) << endl;
    cout << "Original Value = " << b << " std::ceil = " << std::ceil(b) << endl;
    cout << "Original Value = " << c << " std::ceil = " << std::ceil(c) << endl;

    cout << "==============================================" << endl;

    cout << "Original Value = " << d << " std::floor = " << std::floor(d) << endl;
    cout << "Original Value = " << e << " std::floor = " << std::floor(e) << endl;
    cout << "Original Value = " << f << " std::floor = " << std::floor(f) << endl;

    cout << "Original Value = " << d << " std::ceil = " << std::ceil(d) << endl;
    cout << "Original Value = " << e << " std::ceil = " << std::ceil(e) << endl;
    cout << "Original Value = " << f << " std::ceil = " << std::ceil(f) << endl;
    cout << "==============================================" << endl;

    cout << 10 / 2 << "  " << 10 / 2.0 << " " << 10.0 / 2.0 << endl;
}