#ifndef ultrasonicproximity_h
#define ultrasonicproximity_h

class UltraSonicProximity
{
    public:
        UltraSonicProximity(int, int);
        int getDistanceInCM();
    private:
        int _trigPin;
        int _echoPin;
};

#endif