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
