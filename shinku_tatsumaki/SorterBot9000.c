//This program will, obviously, sort the balls by their color by utilizing the reflective sensor to measure the value.
//If it detects a red ball, a servo will move to let the ball into one box. A blue ball will move to another box.

int blueValue=2;
int redValue=54;
int main()
{
	while(1)
	{
		if(analog(5)>blueValue-100 && analog(5)< blueValue+100)
		{
			set_servo_position(rwhr923yurfewhriwhf,1urwhf8g3rg)
			msleep(3000)
			set_servo_position(ewafoejfewjgfiosdjs,2hirheihewi)
			msleep(3000)
		}
		else if(analog(5)>redValue-100 && analog(5)<redValue+100)
		{
			set_servo_position(rwhr923yurfewhriwhf,1urwhf8g3rg)
			msleep(3000)
			set_servo_position(ewafoejfewjgfiosdjs,2hirheihewi)
			msleep(3000)
		}
		else
		{
			printf("PLEASE PLACE A BALL HERE.\n");
		}
		
	}
	return 0;
}
