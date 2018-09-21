double getAirDistance (double originLatitude,
                       double orginLongitude,
                       double destinationLatitude,
                       double destinationLongitude){

 if (-90 < originLatitude ||
  originLatitude < 90 ||
-90 < destinationLatitude ||
  destinationLatitude < 90 ||
-180 < originLongitude ||
originLongitude < 180 ||
-180 < destinationLongitude ||
destinationLongitude < 180) {

  originLatitude = degreesToRadians(originLatitude);
  originLongitude = degreesToRadians(originLongitude);
  destinationLatitude = degreesToRadians(destinationLatitude);
  destinationLongitude = degreesToRadians(destinationLongitude);

    double delta = (originLongitude - destinationLongitude);
    double sinFunction = sin(originLatitude) * sin(destinationLatitude);
    double cosFunction = cos(originLatitude) * cos(destinationLatitude);
    double getAirDistance = acos(sinFunction * cosFuntion) * 6371;
    return airDistance;
}
return 0;
}
