#pragma config(Sensor, S1,     Gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S2,     LineTracker1,   sensorEV3_Color)
#pragma config(Sensor, S3,     LineTraker2,    sensorEV3_Color)
#pragma config(Motor,  motorA,          Left,          tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorB,          Right,         tmotorEV3_Large, PIDControl, driveRight, encoder)
#pragma config(Motor,  motorC,          DropMotor,     tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task drop()
{
wait(500);
setMotorSpeed(motorC,25);
}
task rightTurnAfterLine()
{
	reset(S1);
	if(getColorReflected(S2) & getColorReflected(S3) == 'white')
	{
		while(getGyroDegrees(S1)<90)
		{
			setMotorSpeed(motorA,50);
			setMotorSpeed(motorB,-50);
		}
	}

}
task leftTurnAfterLine()
{
	reset(S1);
	if(getColorReflected(S2) & getColorReflected(S3) == 'white')
	{
		while(getGyroDegrees(S1)<-90)
		{
			setMotorSpeed(motorA,-50);
			setMotorSpeed(motorB,50);
		}
	}
task leftTurn()
{
	while(getGyroDegrees(S1)<-90)
		{
			setMotorSpeed(motorA,-50);
			setMotorSpeed(motorB,50);
		}
}
task rightTurn()
{
while(getGyroDegrees(S1)<90)
		{
			setMotorSpeed(motorA,50);
			setMotorSpeed(motorB,-50);
		}
}

task forward()
{
lineTrackLeft(LineTracker1,50,50,100);
}
task BottomLeft()
{
	wait(1000);
	forward();
}
task BottomMiddle()
{

}
task BottomRight()
{

}
task middleLeft()
{
	wait(2000);
	forward();
}
task middleMiddle()
{

}
task middleRight()
{

}
task topLeft()
{

}
