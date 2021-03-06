# Arduino_basics
#### Basic wiring and code for an Arduino UNO R3 board: programming LEDs, sensors, buttons, motors. <br>

<br>

**1. Lights_LED_and_RGB**
	
1.a) **LED_Sequential_blinking_traffic_light**: simple traffic light timer-program to control connectected red, yellow and green LEDs.
	
<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/de3dc76c1a83c9a5a60bbcb25c348b6d6917bad6/media/traffic_light.png" />
</p>

1.b) **RGB_Led**: an RGB-LED is connected to the breadboard (use 220 Ohm resistors). Code makes connected pins show chosen colors at startup.  Next, gradually keeps looping between colors.
 
<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/315148d21e06229a31a48aca6f53778b0a4823cc/media/rgb_connected.png" />
</p>

<br>

**2. Buzzers**

2.a) **Active_Buzzer**: simple code to put power through an Arduino pin connected to buzzer. Connection from buzzer: 1 wire to ground and 1 wire to selected digital pin.

2.b) **Passive_Buzzer**: simple connection (see active buzzer), code to play frequencies. 

		a) Code 1: passive_buzzer_Loop_of_notes
		b) Code 2: passive_buzzer_song_Beethoven_OdeToJoy
		c) Code 3: passive_buzzer_song_Take_on_me_Aha 					
		d) Code 4: passive_buzzer_song_Game_of_thrones
		e) Code 5: passive_buzzer_song_Tetris
		f) Code 6: passive_buzzer_song_Super_Mario_Bros
		g) Code 7: passive_buzzer_song_Elephant_Walk
		h) Code 8: passive_buzzer_song_Star_Wars
  
<br>

**3. Buttons_And_Switches**

3.a) **Tiny_Piano**: code for multiple connected buttons that play notes when pressed (output to buzzer playing different frequencies).
	
<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/f283458a35bdf447b46827d7f47c3986039f152c/media/tiny_buzzer_piano.png" />
</p>

3.b) **Simon_Says_Game_4_Buttons**: tiny version of the 'Simon says' game. Board will light up the 4 leds in particular order, accompanied by buzzer tone. The user must repeat the pattern via 4 buttons to earn points, try to make ever longer sequences.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/077ccf1e157cabaa1715b963fd000b1250dbb99e/resources/pictures/simon_says.png" />
</p>


3.c) **Tilt_Ball_Switch**: code to power on a connected LED when a tilt-switch is turned upright. When the tilt-ball-switch is tilted 90?? or more, the program will disconnect the output (to the led).

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/2b858fea2df94c348802aa8320c6d2ca78dca4c0/media/tilt_ball_switch.png" />
</p>

<br>

**4. Ultrasonic_Sensor_Module**

4.a) **Ultrasonic_Sensor**: connecting and setting 'trigger' and 'echo' pins. Test program that measures distance (from sensor) every second. Works in range 2cm - 400cm. Output to the Serial Monitor.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/f283458a35bdf447b46827d7f47c3986039f152c/media/ultrasonic_sensor.png" />
</p>

4.b) **Distance_Meter_LED_output**: code takes distance input from ultrasonic sensor, converts it and shows output through connected LEDs. Far away objects light up few (green) 		lights, the closer an object is to the sensor, the more lights will activate (yellow and red).

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/14b6842a005691c0396ecdd47f3ffefa2bdc20c3/media/proximity_leds.png" />
</p>

5.c) **Sound_Sensor_Module**: code that turns on led when a microphone picks up sound.

<br>

**5. Displays**

5.a) **LCD_Display**: program that prints "CityTropes counter: " on first line and a counter (per second) on the second line of a connected display. Setup includes a Potentiometer (10k) to adjust screen brightness.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/315148d21e06229a31a48aca6f53778b0a4823cc/media/lcd_display.png" />
</p>

5.b) **LCD_Display_Scroll_Text**: Simple code example to make text scroll on an LCD.

5.c) **Chrome_Dino_Game**: play the Chrome dino game on an LCD display. Input via 1 button (jump to avoid cacti).

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/22ced21ade18e11cfd119bec6c8ad491cf224cf4/resources/pictures/chrome_dino_game.png" />
</p>

5.d) **Seven_Segment_Display_Counting**: test code to change some numbers on a single display (1 digit).

5.e) **Seven_Segment_Display_Four_Digits**: test code to put a number on a four digit display.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/df2138f709da7b1e125a334e827faff3465a49c7/resources/pictures/seven_segment_display_four_digits.png" />
</p>

<br>

**6. Sensors_Light_Temperature_And_Humidity**

6.a) **Temperature_And_Humidity_Sensor**: take measurement with simple sensor every 4 seconds, output temperature in ??C and humidity % to the Serial Monitor.

6.b) **Thermistor_Thermometer_With_Display**: code for using a thermistor (that changes its resistance with temperature) to convert its output via Arduino. Also displays the output to a connected lcd-screen (updates every second).

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/444719e11e4f6514ead720168bcd2134433af97c/media/thermometer.png" />
</p>

6.c) **Light_Sensor_Activates_LED**: code for using a photoresistor's (light sensor's) output and convert it to a value in range 1-10. If light value is less than 5 the LED will power on.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/9c6b71db158c246d0f7c9ed7de8262a2d2f4aefe/resources/pictures/photoresistor.png" />
</p>

<br>

**7. Joystick_Keypad_IR_Receiver And RFID**

7.a) **Analog_Joystick_Module**: basic code for an analog joystick (basically potentiometers that return analog values) that reads full X-Y values (connected to board's analog in) + button press (connected to digital). Output values from 0 to 1024 to the Serial Monitor.

7.b) **Analog_Joystick_Controlling_Leds**: code lets analog joystick fully control leds. Pressing up, down, left or right will turn on the corresponding lights (with 360?? control to select multiple lights). You can also increase/descrease brightness by moving the joystick further from the center position. Pressing the joystick (button press) powers on all the lights.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/df2138f709da7b1e125a334e827faff3465a49c7/resources/pictures/joystick_leds.png" />
</p>

7.c) **IR_Receiver_Module (and remote control)**: program that checks if IR-signal is received. If so, sends the name of the corresponding button press to the Serial Monitor. Uses header file for key bindings.

7.d) **Keypad_Led**: code example to control LEDs with a keypad.

7.e) **Rfid_CardReader_Example**: code example, how to read an Rfid-tag with a cardreader.

<br>

**8. ShiftRegister_Chip**: connecting 8 LEDs with a 74hc595-Chip to control them individually (control 8 outputs using only 3 Arduino-pins). Test code flashes half the leds at startup, next loops through all the LEDS. Second program is similar.

<br>

**9. Motors**: connecting and controlling motors and extra power sources.

9.a) **Servo_Motor**: simple test code for moving an attached servo motor an exact number of degrees.

9.b) **Automatic_Gate_Servo_Ultrasonic_Leds**: setup with an ultrasonic sensors, a servo motor (gate) and red/green leds. Code for opening the gate and turning on the green light when an object gets within 10cm from sensor. Gate stays open for a few seconds, does one check if the path in front of sensor is free, and then closes the gate with red light back on.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/077ccf1e157cabaa1715b963fd000b1250dbb99e/resources/pictures/automatic_gate.png" />
</p>

<br>

9.c) **DC_Motor**: setup includes adding a power supply module to provide extra power for motor, adding L293D-chip to control the motor (never connect motor directly to board!). Connecting the Arduino board to L293D-chip, chip to motor and power supply. Test code lets motor turn in different directions at different speeds. 

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/829ac765355d23c156a5f02a56ccbda42a91376d/media/motor_and_power_supply_module.png" />
</p>

