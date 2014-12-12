void updateClaw(){
	motor[clawMotor] = (vexRT[BTN_CLAW_OPEN] - vexRT[BTN_CLAW_CLOSE]) * BTN_MOTOR_SPEED;
}

//Currently unused
void init(){

}

/*void toggleClaw(){

}*/

void moveArmHeight(){
	motor[armMotor] = (vexRT[BTN_ARM_UP] - vexRT[BTN_ARM_DOWN]) * BTN_MOTOR_SPEED;
}

void moveMotors(){
	motor[leftMotor] = (DEADBAND(vexRT[JOY_BTN_LEFT]) * BTN_JOYSTICK_MOVE_SPEED);
	motor[rightMotor] = (DEADBAND(vexRT[JOY_BTN_RIGHT]) * BTN_JOYSTICK_MOVE_SPEED);
}
