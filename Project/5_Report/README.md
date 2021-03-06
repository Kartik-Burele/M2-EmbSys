# Smoke detector system
***
## Table of contents
1. [Introduction](#Introduction)
2. [SWOT analysis](#swot)
3. [5W's and 1H](#5w1h)
4. [Requirements](#Requirements)
5. [Block Diagram](#BlockDiagram)
6. [Architecture](#architecture)
7. [Circuit Diagram](#ckt)
8. [Components](#components)
9. [Working in SimulIDE](#simul)
10. [Test plan](#testplan)
11. [Output](#op)
12. [Smoke detector types and applications](#Smoke-detector-types-and-applications)
13. [Future Scope](#Fs)
***
## Introduction <a name="Introduction"></a>
* Smoke detector is a device that senses smoke, typically as an indication of fire.
* Commercial security devices issue a signal to a fire alarm control panel as a part of a fire alarm system, while household smoke detectors, also known as
smoke alarms, generally issue a local audible or visual alarm from the detector itself or several detectors if there are multiple smoke detectors interlinked. 
* Smoke can be detected either optically (photoelectric) or by physical process (ionization): detectors may use either, or both, methods.
* Domestic smoke detectors range from individual battery-powered units, to several interlinked mains-powered units with battery backup; with these interlinked units,
if any unit detects smoke, all trigger even if household power has gone out.
***
## SWOT analysis <a name="swot"></a>
![SWOT M2](https://user-images.githubusercontent.com/98891749/155830818-2ece11c8-0f3f-4008-ae3e-e627f1fd64e4.png)
***
## 5W's and 1H <a name="5w1h"></a>
![5W1H Questions M2](https://user-images.githubusercontent.com/98891749/155830852-f65174cf-8b08-4adf-885c-d24afab0ecb7.png)
***
## Requirements <a name="Requirements"></a>
### High Level Requirements
ID | Requirement | Status
--- | --- | ---
HLR01 | Analog Sensors threshold value shall be selected as per required | To be done
HLR02 | The Buzzer shall beep/sound on reaching threshold value of analog sensor | To be done
HLR03 | The DC motor(exhaust) shall start on reaching threshold value of analog sensor | To be done
### Low Level Requirements
LLR_ID | Requirement | Status
 --- | --- | ---
LLR01.1 | Green LED shall be ON untill it reaches threshold | To be done
LLR01.2 | Red LED shall trun ON after threshold value has been reached | To be done
LLR02.1 | Microcontroller shall turn on Buzzer circuit | To be done
***
## Block Diagram <a name="BlockDiagram"></a>
![Smoke_Detector drawio](https://user-images.githubusercontent.com/98891749/155708952-84cfb995-d92f-4c11-810c-cdb3040e7692.png)
***
## Architecture <a name="architecture"></a>
Behavioral Diagram (Flow chart) |  Structural Diagram (Use case)
--- | ---
![SDFC_M2 drawio (1)](https://user-images.githubusercontent.com/98891749/155784422-11f19fb4-d5bf-4cf6-a68b-77e5d1d49230.png) | ![SDUseCase_M2 drawio (1)](https://user-images.githubusercontent.com/98891749/155754911-1e79706c-04da-4133-93df-d9432319ce01.png)

***
# Circuit Diagram <a name="ckt"></a>
#![Smoke_detection](https://user-images.githubusercontent.com/98891749/156935518-c71a4b63-28f3-44ce-b507-ef4c64c0fb38.png)
***
## Components<a name="components"></a>
* MQ2 Smoke/Gas Sensor

  The MQ-2 smoke sensor is sensitive to smoke and to the following flammable gases:
  LPG, Butane, Propane, Methane, Alcohol, Hydrogen.
  The resistance of the sensor is different depending on the type of the gas.
  The smoke sensor has a built-in potentiometer that allows you to adjust the sensor sensitivity according to how accurate you want to detect gas.
  * How does it works?

    The voltage that the sensor outputs changes accordingly to the smoke/gas level that exists in the atmosphere. 
    The sensor outputs a voltage that is proportional to the concentration of smoke/gas.
    In other words, the relationship between voltage and gas concentration is the following:
    The greater the gas concentration,the greater the output voltage.
    The lower the gas concentration,the lower the output voltage.
    
  * The output can be an analog signal (A0) that can be read with an analog input of the Microcontroller or a digital output (D0) that can be read with a digital input of the Microcontroller.
* Red LED
  
  This shall glow after reaching the threshold value of analog sensor.
* Green LED
  
  This shall glow untill reaching the threshold value of analog sensor.
* Buzzer 
  
  This shall sound after reaching the threshold value of analog sensor.
* Power supply
  
  This is provided by external battery or can be provided by our microcontroller itself.
* DC motor actuator
  
  This is our future scope we will try to attach a exhaust fan via dc motor. This shall exhaust the hazardous gases and moisture out of the house.
* Microcontroller
  
  We will use arduino uno MCU which contains ATmega328 Microcontroller.
***
## Working in SimulIDE<a name="simul"></a>
* As shown in circuit diagram, we have to first connect all the components accordingly.
* As there are limited sensors available in SimulIDE, we have used a potentiometer instead of analog MQ2  Gas/smoke sensor for implementation.
* We have also used a dc motor as an actuator to which a exhaust fan would be attached.
* Case 1: When smokes/gases are below permissible levels
  * Initially, system will setup LCD screen and after setting up it will show us the smoke sensor's threshold value(<400 in this case) and also the status of system which would be "CONTROLLED".
  * In these case, the Green LED will be switched on untill it reaches threshold.
  * Buzzer and DC motor will also be in OFF state.
* Case 2: When smokes/gases are above permissible level
  * As soon as the sensor reaches its threshold(400), it will trigger Red LED, Buzzer and DC motor.
  * Red LED will signal for DANGER.
  * Buzzer will act as an alarm.
  * DC motor will turn ON all the exhaust fans in the room.   
***
## Test plan<a name="testplan"></a>
### High Level Test plan
ID | Requirement | Status
--- | --- | ---
01 | Analog Sensors threshold shall be set = 400 | :white_check_mark:
02 | The Buzzer shall beep/sound on reaching threshold value of analog sensor | :white_check_mark:
03 | The DC motor(exhaust fan) shall start on reaching threshold value of analog sensor | :white_check_mark:
### Low Level Test plan
ID | Requirement | Actual input | Actual output | Expected output | Status
--- | --- | --- | --- | --- | ---
01.1 | Green LED shall be ON untill it reaches threshold | sensorthres<400 | Green LED | Green LED | :white_check_mark:
01.2 | Red LED shall trun ON after threshold value has been reached | sensorthres>400 | Red LED | Red LED | :white_check_mark:
02.1 | Microcontroller shall turn on Buzzer circuit | Turn ON | pass | pass | :white_check_mark:
02.2 | Buzzer shall beep continuously with delay of 100ms | Beep | Beeped | Beeped | :white_check_mark:
03.1 | DC motor(exhaust) shall remain off until reaching threshold | sensorthres<400 | not started | not started | :white_check_mark:
03.2 | DC motor(exhaust) shall start on after reaching threshold | sensorthresh>400 | started | started | :white_check_mark:
***
## Output<a name="op"></a>
 When smokes/gases are under control | When smokes/gases are above threshold
 --- | ---
![Smoke_detection_Controlled](https://user-images.githubusercontent.com/98891749/156936025-554974e5-6ba7-41e2-994f-b9a3d60152b9.png) | ![Smoke_detection_Smokes](https://user-images.githubusercontent.com/98891749/156936042-2ac7da5a-e751-428e-b191-aeb5c6a9af4c.png)
 
***
## Smoke detector types and applications<a name="Smoke-detector-types-and-applications"></a>
* Spot-type smoke detectors on 30 feet or less spacing???all spaces with ceiling heights 15 feet or less
* Linear beam smoke detectors???all spaces with ceilings greater than 15 feet
* Active air sampling smoke detectors???all spaces with high air flow or spaces with high ceilings and a goal of early detection
* Duct-type smoke detectors???all applications where the goal is to prevent the recirculation of smoke via the HVAC system
***
## Future Scope<a name="Fs"></a>
* High-pressure water mist
* Sound-triggered devices
* Wireless devices
