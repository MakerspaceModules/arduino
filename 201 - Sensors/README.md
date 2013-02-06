#What you need for this class

* All of the equipment used in the [Arduino 101](https://github.com/MakerspaceModules/arduino/tree/master/101%20-%20Introduction%20to%20Arduino) class.
* Any of the following set that interest you: [TSOP38238 IR Sensor](https://www.adafruit.com/products/157), [Door Sensor](https://www.adafruit.com/products/375), [Tilt Sensor](https://www.adafruit.com/products/173), 
* Any of the following sensors that interest you: [TMP36 Temperature Sensor](https://www.adafruit.com/products/165), [Force-Sensitive Resistor](https://www.adafruit.com/products/166), [Stretch Sensor](https://www.adafruit.com/products/519), [Flex/Bend Sensor](https://www.adafruit.com/products/182)

#What you should know before you start

This class assumes you have taken the Arduino 101 class.  You should be able to do the following:
* Given the circuit below, describe what the following Arduino sketch does.

  ![Button](https://raw.github.com/MakerspaceModules/arduino/master/201%20-%20Sensors/Documentation/Button.png)

```c
setup() {
	pinMode(13, INPUT);
	pinMode(12, OUTPUT);
}

loop() {
	if(digitalRead(13) == HIGH) {
		digitalWrite(12, HIGH);
	}
}
```

#Before you arrive

Please install the Arduino and Fritzing software on your computer.  If you have trouble, the instructor can help you during class, but it usually goes fairly smoothly.

#What you will learn about in this class

* Types of digital and analog sensors
* How to connect sensors to the Arduino
* How to send data from the Arduino to a connected computer.
