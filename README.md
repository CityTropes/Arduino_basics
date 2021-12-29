# Arduino_basics
basic wiring and programming of an Arduino/Elegoo UNO R3 board.


1. Blink: first test program - Arduino UNO R3 board's on/off LED ('L' LED), program sets the status light to blink.

2. RGB_Led: connecting an RGB-LED to the board (use resistors!) and program the connected pins to show chosen colors at startup.  Next, keeps looping between colors.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/315148d21e06229a31a48aca6f53778b0a4823cc/media/rgb_connected.png" />
</p>

3. Buttons (Digital inputs): programming 2 connected buttons (Input) and a ledPin (Output).

4. Active_Buzzer: simple code to put power through an Arduino pin connected to buzzer.

5. Passive_Buzzer: simple connection, code to play frequencies. 

    a) Code 1: passive_buzzer_Loop_of_notes
    
    b) Code 2: passive_buzzer_song_Beethoven_OdeToJoy
    
    c) Code 3: passive_buzzer_song_Take_on_me_Aha 
      
6. Tilt_Ball_Switch: turning on a connected LED when a tilt-switch is turned 90° or more.

7. Servo_Motor: code for moving an attached servo motor an exact number of degrees.

8. Ultrasonic_Sensor_Module: connecting and setting 'trigger' and 'echo' pins. Program that measures distance (from sensor) every second. Works in range 2cm - 400cm. Output to the Serial Monitor.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/315148d21e06229a31a48aca6f53778b0a4823cc/media/ultrasonic_sensor.png" />
</p>

9. Temperature_And_Humidity_Sensor: take measurement every 4 seconds, output temperature in °C and humidity % to the Serial Monitor.

10. Analog_Joystick_Module: program for an analog joystick (basically potentiometers that return analog values) that reads full X-Y values (connected to board's analog in) + button press (connected to digital). Output values from 0 to 1024 to the Serial Monitor.

11. IR_Receiver_Module (and remote control): program that checks if IR-signal is received. If so, sends the name of the corresponding button press to the Serial Monitor. Uses header file for key bindings.

12. LCD_Display: program that prints "CityTropes counter: " on first line and a counter (per second) on the second line of a connected display. Setup includes a Potentiometer (10k) to adjust screen brightness.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/315148d21e06229a31a48aca6f53778b0a4823cc/media/lcd_display.png" />
</p>

13. DC_Motor: setup includes adding a power supply module to provide extra power for motor, adding L293D-chip to control the motor (never connect motor directly to board!). Connecting the Arduino board to L293D-chip, chip to motor and power supply. Test code lets motor turn in different directions at different speeds. 

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/315148d21e06229a31a48aca6f53778b0a4823cc/media/motor_and_power_supply_module.png" />
</p>

14. EightLED_ShiftRegisterChip: connecting 8 LEDs with a 74hc595-Chip to control them individually. Program flashes half the leds at startup, next loops through all the LEDS.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/315148d21e06229a31a48aca6f53778b0a4823cc/media/eight_led_via_chip.png" />
</p>
