//**This is a function tht coverts degrees to radians*//

double degreesToRadians(double degree);

//** This is the formula for the conversation*//

double toRadians(double degree);

/* This is a function to compute the air distance between two locations
identifed by their latitude/longitude*/

double getAirDistance(double originLatitude,
                      double orginLongitude,
                      double destinationLatitude,
                      double destinationLongitude);

/* This is the formula for spherical law of Cosines*/

double distance(acos((sinOne * sinTwo) + (cosOne * cosTwo * cosDelta)) * radiusEarth);

/* This is the function for Lorentz equation*/

double lorentzTimeDilation(double t, double percentC);

/* This is the formula for Lorentz equation*/

double dilatedTime(t / sqrt(1 - (pow(v, 2)/pow(c,2))));
