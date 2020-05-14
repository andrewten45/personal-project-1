#ifndef TRAFFICINTERSECTION_H_INCLUDED
#define TRAFFICINTERSECTION_H_INCLUDED

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

#endif // TRAFFICINTERSECTION_H_INCLUDED
