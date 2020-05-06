//Traffic intersection by Andrew T, which simulates a traffic light.
#include <iostream>

using namespace std;

class Intersection {
public:
    void SetLightColor();
    void GetLightColor();
private:
    int lightState;
};

void Intersection::GetLightColor() {
    cout << lightState << endl;
}

void Intersection::SetLightColor() {
    cout << "Enter light color, which can be either 0, 1, or 2.\n";
    cin >> lightState;
}

int main()
{
    Intersection userIntersection;
    userIntersection.GetLightColor();
    userIntersection.SetLightColor();

    return 0;
}
