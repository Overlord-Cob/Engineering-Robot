/****This file lists the global constants****/

#ifndef CONFIG_H
#define CONFIG_H

// Deadband: the limit to keep motors from buzzing
#define DEADBAND_THRESHOLD 10.0
#define DEADBAND(x) (abs(x) >= DEADBAND_THRESHOLD ? x : 0)

// Contants
#define BTN_JOYSTICK_MOVE_SPEED 128
#define BTN_MOTOR_SPEED 127

// Control for the wheels
#define JOY_BTN_LEFT Ch3
#define JOY_BTN_RIGHT Ch2

// Controls for the arm
#define BTN_ARM_UP Btn8U
#define BTN_ARM_DOWN Btn8D

// Controls for the claw
#define BTN_CLAW_OPEN Btn7U
#define BTN_CLAW_CLOSE Btn7D

#endif
