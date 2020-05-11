//Traffic intersection by Andrew T, which simulates a traffic light.
#include <iostream>
#include <chrono>

using namespace std;

class Intersection {
public:
    void SetLightColor();
    void GetLightColor();
    void AutoContinue();
    void CycleLightColors();
private:
    int lightState;
    bool isVehicleDetected;
};

void Intersection::AutoContinue() {
    string userIn;

    cout << "Enter 0 to break from the loop.\n";

    while(userIn != "0") {
        GenerateLightColor();
        GetLightColor();
        cin >> userIn;
    }
}

void Intersection::CycleLightColors() {
    lightState = 0;
    GetLightColor();
    _sleep(5 * 1000);

    lightState = 1;
    GetLightColor();
    _sleep(2 * 1000);

    lightState = 2;
    GetLightColor();
    _sleep(5 * 1000);
}

void Intersection::GetLightColor() {
    switch(lightState) {
    case 0:
        cout << "Green\n";
        break;
    case 1:
        cout << "Yellow\n";
        break;
    case 2:
        cout << "Red\n";
        break;
    }
}

void Intersection::SetLightColor() {
    cout << "Enter light color, which can be either 0, 1, or 2.\n";
    cin >> lightState;
}

int main()
{
    Intersection userIntersection;
    userIntersection.AutoContinue();

    return 0;
}
