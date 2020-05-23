#ifndef TRAFFICINTERSECTION_H_INCLUDED
#define TRAFFICINTERSECTION_H_INCLUDED

class trafficIntersection {
public:
    void SetLightColor();
    void GetLightColor();
    void AutoContinue();
    void CycleLightColors(int userNum1, int userNum2);
private:
    int lightState;
    bool isVehicleDetected;
};

#endif // TRAFFICINTERSECTION_H_INCLUDED
