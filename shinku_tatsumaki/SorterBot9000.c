//This program will, obviously, sort the balls by their color by utilizing the reflective sensor to measure the value.
//If it detects a red ball, a servo will move to let the ball into one box. A blue ball will move to another box.

int blueValue=40;
int redValue=500;
int variableValue=50;
int gatePort=2;
int raisedGate=400;
int loweredGate=1204;
int tilterPort=1;
int leftTilt=400;
int centeredTilt=548;
int rightTilt=676;
int main()
{
	while(1)
	{
		if(analog(5)>blueValue-variableValue && analog(5)< blueValue+variableValue)
		{
			set_servo_position(gatePort,raisedGate);
			msleep(2000);
			set_servo_position(tilterPort,leftTilt);
			msleep(3000);
			set_servo_position(tilterPort,centeredTilt);
			msleep(3000);
			set_servo_position(gatePort,loweredGate);
			msleep(2000);
		}
		else if(analog(5)>redValue-variableValue && analog(5)<redValue+variableValue)
		{
			set_servo_position(gatePort,raisedGate);
			msleep(2000);
			set_servo_position(tilterPort,rightTilt);
			msleep(3000);
			set_servo_position(tilterPort,centeredTilt);
			msleep(3000);
			set_servo_position(gatePort,loweredGate);
			msleep(2000);
		}
		else
		{
			msleep(2000);
			printf("CHECKING BALL.\n");
		}
		
	}
	return 0;
}
