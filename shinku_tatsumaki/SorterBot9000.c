//This program will, obviously, sort the balls by their color by utilizing the reflective sensor to measure the value.
//If it detects a red ball, a servo will move to let the ball into one box. A blue ball will move to another box.

int blueValue=30;
int redValue=500;
int variableValue=50;

int gatePort=1;
int raisedGate=300;
int loweredGate=1300;

int tilterPort=0;
int leftTilt=400;
int centeredTilt=548;
int rightTilt=676;

int main()
{
	enable_servos();
	while(1)
	{
		if(analog(0)>blueValue-variableValue && analog(0)< blueValue+variableValue)
		{
			printf("DETECTED BLUE BALL, MOVING LEFT\n");
			set_servo_position(tilterPort,leftTilt);
			msleep(1500);
			set_servo_position(gatePort,raisedGate);
			msleep(1000);
			set_servo_position(gatePort,loweredGate);
			msleep(1000);
			set_servo_position(tilterPort,centeredTilt);
			msleep(1500);
		}
		else if(analog(0)>redValue-variableValue && analog(0)<redValue+variableValue)
		{
			printf("DETECTED RED BALL, MOVING RIGHT\n");
			set_servo_position(tilterPort,rightTilt);
			msleep(1500);
			set_servo_position(gatePort,raisedGate);
			msleep(1000);
			set_servo_position(gatePort,loweredGate);
			msleep(1000);
			set_servo_position(tilterPort,centeredTilt);
			msleep(1500);
		}
		else
		{
			msleep(1000);
			printf("NO BALL DETECTED. CHECKING...\n");
		}
		
	}
	return 0;
}
