// distance and feet add karne wala
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inch;

public:
    Distance(int f, float i)
    {
        feet = f;
        inch = i;
    }
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    void get_distance()
    {
        cout << "enter your feet and inch " << endl;
        cin >> feet >> inch;
    }
    void show_distance()
    {
        cout << "feet is " << feet << endl;
        cout << "and inch is" << inch << endl;
    }
    Distance add_distance(Distance d1, Distance d2)
    {
        Distance x;
        x.feet = d1.feet + d2.feet;
        x.inch = d1.inch + d2.inch;
        if (x.inch >= 12.0) // globaly hota
        {
            x.inch -= 12.0; // globally hota hai
            x.feet++;
        }
        return x;
    }
};
int main()
{
    Distance d1(11, 6.25), d2, d3;
    d2.get_distance();
    d3 = d3.add_distance(d1, d2);
    cout << "first distance distance is " << endl;
    d1.show_distance();
    cout << "second distance is  " << endl;
    d2.show_distance();
    cout << "sum of your both distance is  " << endl;
    d3.show_distance();
    return 0;
}
