/* COMPRO1 Machine Problem Part 3                                             */
/* CHUA_KYLE MATTHEW C.                                                       */
/* S19A                                                                       */
/*                                                                            */
/* This file contains the main() function for testing the robot control       */
/* functions in chua_mp3_robot.c                                          */
/*                                                                            */
/* NOTES:                                                                     */
/* 1. Change the word "lastname" in the filename to your own last name.       */
/*    For example, if your last name is SANTOS, then this file should be      */
/*    named as santos_mp3_main.c                                              */ 
/* 2. Your main task is to fill-up the body of main() function.               */
/* 3. You are NOT ALLOWED to add new codes other than the implementation      */
/*    of the body of the main() function.                                     */  
/* 4. You have to compile and link this with the object files corresponding   */
/*    to your lastname_mp3_robot.obj and lastname_mp2_math.obj in order to    */
/*    produce the executable file.                                            */      

#include <stdio.h>
#include "mp3_robot.h"


/* main function for Robby simulation */
int main(void)
{
    float fRobotX, fRobotY, fDistance;
    double dRobotAngle, dTheta;
    int code;

    InitializeReset(&fRobotX, &fRobotY, &dRobotAngle);

    do{
	   printf("\n1: Initialize/Reset Robot Status\n");
	   printf("0: Display Status Command Code\n");
   	   printf("8: Forward Translation Command Code\n");
	   printf("2: Backward Translation Command Code\n");
	   printf("9: Counterclockwise Rotation Command Code\n");
	   printf("3: Clockwise Rotation Command Code\n");
	   printf("4: Quit Simulation Command Code\n");
	   printf("Input command code: ");
	   scanf("%d", &code);
	
	   switch(code){
		            case RESET: InitializeReset(&fRobotX, &fRobotY, &dRobotAngle);
		            break;

		            case DISPLAY_STATUS: DisplayStatus(fRobotX, fRobotY, dRobotAngle);
		            break;

		            case TRANSLATE_FORWARD: printf("\nInput Distance to be traveled: ");
			                scanf("%f", &fDistance);
                            TranslateForward(fDistance, &fRobotX, &fRobotY, dRobotAngle);
                    break;

		            case TRANSLATE_BACKWARD: printf("\nInput Distance to be traveled: ");
			                scanf("%f", &fDistance);
			                TranslateBackward(fDistance, &fRobotX, &fRobotY, dRobotAngle);
                    break;

		            case ROTATE_COUNTERCLOCKWISE: printf("\ninput angle of counterclockwise rotation in degrees: ");
			                scanf("%lf", &dTheta);
                            RotateCounterClockwise(dTheta, &dRobotAngle);
                    break;

		            case ROTATE_CLOCKWISE: printf("\ninput angle of clockwise rotation in degrees: ");
			                scanf("%lf", &dTheta);
                            RotateClockwise(dTheta, &dRobotAngle);
                   break;

		           case QUIT: Quit();
		           break;

		           default: printf("\nInvalid code\n");
      }
    
     }while(code!=4); 
   
   /*NOTE #4: (VERY IMPORTANT!)
     The main() function that you are implementing here is actually for your use;
     i.e., so that you can check and verify the correctness of your solution.
     For the actual check, I will use my own main() function and link it 
     with your lastname_mp3_robot and lastname_mp2_math object files.  The resulting 
     executable file should also be 100% semantically correct for you to earn a 
     perfect grade.   
  */

  return 0;
}




