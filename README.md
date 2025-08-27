# Sine Wave Lookup Table and Digital PWM Simulation

This project is about generating a sine wave digitally using an Arduino UNO.  
I wanted to try out how lookup tables can be used to simulate analog waveforms, and then use PWM to bring it to life on hardware (or in this case, in Wokwi).

## What this project does
- Creates a sine wave using a 32-sample lookup table
- Outputs it as PWM on Arduino pin 9
- Visualizes the waveform in two ways:
  - LED brightness (fades in and out smoothly in a sine pattern)
  - Serial Plotter (shows the actual waveform shape)

## Circuit Setup
The circuit is super simple:
- Pin D9 → 220Ω resistor → LED (anode)
- LED cathode → GND

This lets the PWM signal directly drive the LED brightness.

## Code
The embedded C code I used for the Wokwi simulation is uploaded inside the `Code` folder.  
It uses `analogWrite()` to output PWM values taken from the sine lookup table and also prints those values over Serial.

## Output
- On the Serial Plotter, you can see a smooth sine waveform repeating over time.
- On the LED, the brightness goes up and down smoothly like a sine wave instead of just linearly fading.

Some sample values observed in the Serial Monitor were:  
127, 152, 176, 198, 217, 233, 245, 252, 255, 252, 245, 233, 217, 198, 176, 152,  
127, 102, 78, 56, 37, 21, 9, 2, 0, 2, 9, 21, 37, 56, 78, 102  

This repeats to form the complete waveform.

## Videos
I’ve uploaded all the videos of the simulation and results in the `Videos` folder.

## Try it out
You can run this project directly on Wokwi here:  
[Wokwi Project Link](https://wokwi.com/projects/placeholder](https://wokwi.com/projects/434542820877416449)

---
This was a fun little project that helped me understand waveform synthesis using lookup tables and how PWM can be used to simulate analog signals digitally.
