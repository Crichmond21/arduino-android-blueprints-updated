arduino-android-blueprints-updated
==========================

Code for the Arduino Android Blueprints book published by PacktPub

# Android / Arduino Blueprints

I'll start this off by saying this is not my code. This is from the book 
mentioned above. This book is a fantastic utility for working with
 Android and Arduino projects. It covers many subjects and was 
 incredibly helpful to me. 

#### A little background 📺
I am a currently a student at Wentworth Institute of Technology (as of 
December 2019) and I just finished the course Mobile Health 
(COMP 3800). In this course we used this Book and had to create systems 
that involved Android and Arduino. However it became very difficult for 
a lot of us because off al the Android code is deprecated and no longer 
works with more recent versions of Android. I myself spent many hours 
combing through the very little documentation online about the newer 
ways to communicate with Bluetooth LE devices in android, and I know 
many of my classmate have done the same. In order to save more hours of 
needless combing through poor documentation, I took it upon myself to 
update this code to work with modern versions of android (as of right 
now Android 10).

In the process of updating the Android code I will also be adding Arduino
code that will work with the Adafruit Bluefruit LE UART friend (nRF51) 
because I don't have access to the Adafruit nRF8001 that is used in the 
book. This will give some more examples on how to solve problems with a 
newer bluetooth breakout that you can still buy today however this 
bluetooth device is not compatible with the aRest library so it will not 
be able to process every aRest style request. For the most part you should 
also stay away from the aRest library because it is very process intense to 
use on an Arduino and for most applications most of its features will be unused.

# Goals 🥅
It is my goal to update this code so that other students in Comp 3800 Mobile Health (and anyone in 
general) wont have to waste hours pouring through the internet in order to figure out how to use 
the newer Bluetooth LE framework in Android. It's really not that difficult to use the framework, 
but there are hardly any resources online for it. 


# Current Progress 📲

- [x] Chapter 1
- [x] Chapter 2
- [ ] Chapter 3 (In Progress)
- [ ] Chapter 4
- [ ] Chapter 5
- [ ] Chapter 6
- [ ] Chapter 7
- [ ] Chapter 8
- [ ] Chapter 9
- [ ] Chapter 10

