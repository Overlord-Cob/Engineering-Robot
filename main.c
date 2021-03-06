#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/***The main file for the robot calls the other tasks****/

#include "config.h"
#include "actions.c"
#include "tasks.c"

task main()
{

	// Start a new thread for the task runMotors
	startTask(runMotors);

	// Start a new thread for the task runClaw
	startTask(runClaw);

	// Start a new thread for the task runArm
	startTask(runArm);

	// This infinite loop prevents the program from terminating
	while(true){}
}
