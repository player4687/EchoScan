# ECHO SCAN (ULTRA RADAR SYSTEM)
    Overview: 
      It is a IoT ultrasonic radar system I have designed to detect near objects and visualize their position on radar like display. First of all the Ultra sonic sensor will be there on a servo, it will rotate in a area, in 180 or 360 degrees. Meanwhile  the ESP32(the microcontroller) will collect the data and send to the Computer for visualization.


## My Goals in this project
  First of all: 
   (i) It will measure distances using a Ultra sonic sensor
   (ii) The sensor will be upon a servo rotating all the time (180 or 360 degrees)
   (iii) Transfer the measurements from ESP32 to the Computer for visualization. 
   (iv) Displaying the detected objects and their aprox position in real time (Yeah it is the main motive of this Project)
   (v) Designing of the stable physical assembly for the electronics and moving sensor.


## How it will work?
  First of all the Ultra sonic sensor will be rotating all the time on the servo motor. The Ultra sonic measures the distance to an object which comes under its scanning area and send the information to the ESP32. After that the ESP32 will associate with the current scan angle. After that the data will get transmitted to the Computer to display the Radar system on screen through USB or Wifi. At last the system will display the scan and detected objects.

  