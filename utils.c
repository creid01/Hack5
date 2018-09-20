/*
* Author: Christopher Reid & Ryan Eshleman
* Date: 9/20/18
*/
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include"utils.h"

#define M_PI 3.1459265358979323846;

double degreesToRadians(double degree) {
  return  toRadians(degree * M_PI / 180);
  }

  double getAirDistance(double originLatitude,
                        double orginLongitude,
                        double destinationLatitude,
                        double destinationLongitude){
  return  distance(...acos((sinOne * sinTwo) + (cosOne * cosTwo * cosDelta)) * radiusEarth);
                        }

  double lorentzTimeDilation(double t, double percentC){

    return dilatedTime(t / sqrt(1 - (pow(v, 2)/pow(c,2))));
  }
