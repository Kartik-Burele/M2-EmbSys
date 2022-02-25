## Abstract
* Smoke detector is a device that senses smoke, typically as an indication of fire.
* Commercial security devices issue a signal to a fire alarm control panel as a part of a fire alarm system, while household smoke detectors, also known as
smoke alarms, generally issue a local audible or visual alarm from the detector itself or several detectors if there are multiple smoke detectors interlinked. 
* Smoke can be detected either optically (photoelectric) or by physical process (ionization): detectors may use either, or both, methods.
* Domestic smoke detectors range from individual battery-powered units, to several interlinked mains-powered units with battery backup; with these interlinked units,
if any unit detects smoke, all trigger even if household power has gone out.
## Requirements
### High Level Requirements
ID | Requirement | Status
--- | --- | ---
HLR01 | Analog Sensors threshold value shall be selected as per required | 
HLR02 | The Buzzer shall beep/sound on reaching threshold value of analog sensor |
HLR03 | The DC motor(exhaust) shall start on reaching threshold value of analog sensor |
### Low Level Requirements
HLR_ID | LLR_ID | Requirement | Status
--- | --- | --- | ---
HLR01 | LLR01 | Green LED shall be ON untill it reaches threshold | 
HLR01 | LLR02 | Red LED shall trun ON after threshold value has been reached |
HLR02 | LLR03 | Microcontroller shall turn on Buzzer circuit | 
## Block Diagram
![Smoke_Detector drawio](https://user-images.githubusercontent.com/98891749/155708952-84cfb995-d92f-4c11-810c-cdb3040e7692.png)

