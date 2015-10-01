/****The methods occur during the other threads, and do not opperate concurrently***/

/*
 * updateClaw
 *
 * The motor 'clawMotor' (which is defined in main.c) has its speed set to equal
 * the value of the BTN_CLAW_OPEN button minus the value of the BTN_CLAW_CLOSE
 * button, times the predefined constant speed.
 */
void updateClaw(){
	motor[clawMotor] = (vexRT[BTN_CLAW_OPEN] - vexRT[BTN_CLAW_CLOSE]) * BTN_MOTOR_SPEED;
}

/*
 * moveArmHeight
 *
 * The motor 'armMotor' (which is defined in main.c) has its speed set to equal
 * the value of the BTN_ARM_UP button minus the value of the BTN_ARM_DOWN
 * button, times the predefined constant speed.
 */
void moveArmHeight(){
	motor[armMotor] = (vexRT[BTN_ARM_UP] - vexRT[BTN_ARM_DOWN]) * BTN_MOTOR_SPEED;
}

/*
 * moveMotors
 *
 * Both the left and right motors are set to equal their respective joystick's
 * positions, times the constant move speed.
 */
void moveMotors(){
	motor[leftMotor] = (DEADBAND(vexRT[JOY_BTN_LEFT]) * BTN_JOYSTICK_MOVE_SPEED);
	motor[rightMotor] = (DEADBAND(vexRT[JOY_BTN_RIGHT]) * BTN_JOYSTICK_MOVE_SPEED);
}
