# Instructor Notes

A presentation to accompany these labs is available on [Prezi](http://prezi.com/bonzhtuceyc4/intro-to-arduino/?kw=view-bonzhtuceyc4&rc=ref-29668303).  It goes through Arduino 101, 201, 202, and 301.  The instructor is typically required to diagnose hardware issues, so make sure you are familiar with the labs and know how to analyze a circuit.  The software is provided, but have a few ideas about how a student could take extra steps for each lab if they finish early.  These can also be assigned as homework if you would like the course to be taught over a few sessions.

This lab typically takes 2 hours.  The biggest problem is students having trouble with the Arduino software.  This has gotten better since 1.0 was released, but make sure that everyone can upload a sketch before you start.

## Extended lab suggestions

### Lab 1

* Have the LED toggle on and off rather than just lighting up when the button is pushed
* Add a delay so the LED flashes after a fixed interval
* [ADVANCED] Have the LED flash in whatever rhythm the student pushes.

### Lab 2

* Rather than just going from 0 to 255 and starting at 0 again, have the students make the intensity reverse direction when it reaches 255.
* Change the intensity of the LED whenever the button is held, and hold the same intensity when the button is released.

### Lab 3

* Add two potentiometers and build a calibration circuit for the darkness detector.

## Suggested class flow

### Before students arrive

* Print out the lab handouts.
* Have at least one copy of the [Arduino cheatsheet](https://github.com/MakerspaceModules/arduino/blob/master/101%20-%20Introduction%20to%20Arduino/Documentation/Arduino_Cheat_Sheet.pdf) available.

### During class
* Help students install Arduino software as they arrive.  There is usually at least one student that has issues, so it is better to make sure everybody is able to upload a sketch before you start the class.
* Talk with students about background, familiarity with programming and electronics concepts
* Present background on Arduino as a platform and as a device
* Show blink sketch
* Present Digital I/0 concepts
* Walk students through Lab 1, have them complete it on their own
* Present Analog output concepts 
* Show how the circuit diagram for Lab 2 is minimally different from Lab 1
* Walk students through requirements for Lab 2, have them complete it on their own
* Present Analog input concepts.  

This is the most difficult part of 101.  Be ready to whiteboard about how voltage dividers work, and the concept of a transfer function.

* Walk students through requirements for Lab 3, have them complete it on their own
