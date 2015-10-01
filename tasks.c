/****The tasks run independent threads that operate concurrently****/

// This task repeatedly calls the moveMotors() method, found in actions.c
task runMotors(){
	while (true){
		moveMotors();
	}
}

// This task repeatedly calls the updateClaw() method, found in actions.c
task runClaw(){
	while (true){
		updateClaw();
	}
}

// This task repeatedly calls the moveArmHeight() method, found in actions.c
task runArm(){
	while (true){
		moveArmHeight();
	}
}
