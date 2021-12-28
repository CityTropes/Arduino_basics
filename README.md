# Arduino_basics
basic wiring and programming of an Arduino/Elegoo UNO R3 board.



1. Blink: first test program - Arduino UNO R3 board's on/off LED ('L' LED), making it blink how/when you want.

2. RGB_Led: connecting an RGB-LED to the board (limit voltage to LED with resistors) and program the connected pins to show chosen colors at startup.  Next, keeps looping between colors.

<p align="center">
  <img src="https://github.com/CityTropes/Arduino_basics/blob/adc775e7ae417fe651b5e3db47e7af85b4a961ac/media/rgb_connected.png" />
</p>

3. Buttons (Digital inputs): programming 2 connected buttons (Input) and a ledPin (Output).

4. Active_Buzzer: connecting and simple code to put power through connected pin.

5. Passive__Buzzer: simple connection. 

    a) Code 1: passive_buzzer_Loop_of_notes
    
    b) Code 2: passive_buzzer_song_Beethoven_OdeToJoy
    
    c) Code 3: passive_buzzer_song_Take_on_me_Aha 
      
6. Tilt_Ball_Switch: turning on a LED when a tilt-switch is turned 90° or more.

7. Servo_Motor: code for moving an attached servo motor an exact number of degrees.

8. Ultrasonic_Sensor_Module: connecting and setting 'trigger' and 'echo' pins. Program that measures distance (from sensor) every second. Works in range 2cm - 400cm. Output to the Serial Monitor.

9. Temperature_And_Humidity_Sensor: take measurement every 4 seconds, output temperature in °C and humidity % to the Serial Monitor.

10. Analog_Joystick_Module: program for an analog joystick (basically potentiometers that return analog values) that reads full X-Y values (connected on board's analog in) + button press (connected to digital). Output values from 0 to 1024 to the Serial Monitor.

11. IR_Receiver_Module (and remote control): program that checks if IR-signal is received. If so, sends the name of the corresponding button press to the Serial Monitor. Uses header file for key bindings.