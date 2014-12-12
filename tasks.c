task runMotors(){
	while (true){
		moveMotors();
	}
}

task runClaw(){
	while (true){
		updateClaw();
	}
}

task runArm(){
	while (true){
		moveArmHeight();
	}
}
