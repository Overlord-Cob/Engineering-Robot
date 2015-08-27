#ifndef CONFIG_H
#define CONFIG_H

#define DEADBAND_THRESHOLD 10.0
#define DEADBAND(x) (abs(x) >= DEADBAND_THRESHOLD ? x : 0)

#define BTN_JOYSTICK_MOVE_SPEED 128
#define BTN_MOTOR_SPEED 127

#define JOY_BTN_LEFT Ch3
#define JOY_BTN_RIGHT Ch2

#define BTN_ARM_UP Btn8U
#define BTN_ARM_DOWN Btn8D

#define BTN_CLAW_OPEN Btn7U
#define BTN_CLAW_CLOSE Btn7D

#endif
