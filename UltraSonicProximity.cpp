#include <Arduino.h>
#include <Ping.h>
#include "UltraSonicProximity.h"

UltraSonicProximity::UltraSonicProximity(int trig_pin, int echo_pin)
{
    _trigPin = trig_pin;
    _echoPin = echo_pin;
    pinMode(_trigPin, OUTPUT);
    pinMode(_echoPin,INPUT);
}

int UltraSonicProximity::getDistanceInCM()
{
    digitalWrite(_trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(_trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trigPin, LOW);   
    return pulseIn(_echoPin, HIGH, 25000) / 58;
}

