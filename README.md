# Pinball Machine 
![Image of Pinball Machine](https://github.com/chasemorell/pinball/blob/master/pinballRight.jpg)

The goal of this project was to create a simple pinball machine using an Arduino Uno and household supplies. [Watch video](https://drive.google.com/file/d/1eTc9DmjkQzJBPm3TPY0fm5l2B28I1N1D/view?usp=sharing)

## Construction 

The pinball machine is made from birch plywood. The pieces were cut using a handsaw. With a few exceptions, every part is glued together. The machine was spray painted white. There are 3 main components of this simple pinball machine: the "flipper," the "launcher," and the "playing field." 

### Flipper

The flipper is constructed from stacked popsicle sticks. It is attached to a servo motor, which is mounted underneath the playing field. Creating an integrated button to move the flipper proved to be a challenge. The finalized design comprises of a popsicle stick, which acts as a simple lever that depresses the button attached to the breadboard under the playing field. Triggering the button is easy because the stick creates a considerable amount of leverage. 

### Launcher

Devising a simple launching mechanism for the ball from household objects was difficult. The design I settled on uses a spring from a mechanical highlighter, a golf tee, and a plastic cap. 

### Playing Field

The pinball machine has a simple playing field. The ball is launched up a channel on the left and into a hole in the back panel. It re-emerges on the right side. If not enough power is applied, the ball will go into the hole, only to roll back to the launcher. There are 2 circular obstacles on the playing field, as well as a rubber band loop and 2 LED lights that fade on and off. The player looses when the ball falls back into the launch channel. 

## Interaction

The flipper button is the only way to interact with the electronics of the pinball machine. The flipper is used to move the ball through the playing field. 

## Electronics and Code 

Components:
- Arduino Uno
- Servo motor
- Breadboard
- Button
- Resistors
- 2x green LEDS
- Wires

The code for the pinball machine can be [found here](https://github.com/chasemorell/pinball/blob/master/Pinball.ino).

![Image of Electronics of Machine](https://github.com/chasemorell/pinball/blob/master/electronicsPinball.jpg)
## 3D Designed Part

I would have liked to create a 3D printed flipper. While the wooden one I created works, a solid 3d printed one would be better. 

## Conclusion

This project was both exciting and challenging. With more time and resources, I would like to add a scoreboard and interactive targets on the playing field. Still, the pinball machine is fun to play, albiet a bit simple. 

## Video
[Watch video](https://drive.google.com/file/d/1eTc9DmjkQzJBPm3TPY0fm5l2B28I1N1D/view?usp=sharing)



