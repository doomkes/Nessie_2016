/*
 * UI.cpp
 *
 *  Created on: Nov 23, 2014
 *      Author: Studio-shop
 */
#include "UserInterface.h"
/*
 * Default constructor
 */
UserInterface::UserInterface():
		lStick(0),						// as they are declared above.
		rStick(1),
		liftStick(2)
{
}

/*
 * Default destructor
 */
UserInterface::~UserInterface()
{
}
void UserInterface::Init(){

}

// When in normla mode, Joy1 is the left stick, Joy2 is the right stick,
// Joy3 is the fork control stick


void  UserInterface::GetData(NessieUserInput *nui){
	
		nui->turboMode = lStick.GetRawButton(3);
		nui->manClawOut = (liftStick.GetPOV() == 0);
		nui->manClawIn = (liftStick.GetPOV() == 180);
		nui->clawFreeze = rStick.GetRawButton(5);
		nui->frontStrafeDrive = lStick.GetX();
		nui->rearStrafeDrive = rStick.GetX();
		nui->strafeActive = (lStick.GetRawButton(1) || rStick.GetRawButton(1));
		nui->doLandfill = rStick.GetRawButton(5);
		nui->toteCentStrafe = lStick.GetRawButton(2);
		nui->toteCorrMode = rStick.GetRawButton(3);
		nui->toteStackMode = rStick.GetRawButton(2);

		// Tank Drive Inputs
		nui->leftDrive = lStick.GetY();
		nui->rightDrive = rStick.GetY();

		// Lift User Interface Defines
		nui->zeroLift = liftStick.GetRawButton(10);
		nui->liftDoubleSpeed = liftStick.GetRawButton(7);
		nui->liftQuadSpeed = liftStick.GetRawButton(5);
		nui->liftStepMode = liftStick.GetRawButton(9);
		nui->liftStage1 = liftStick.GetRawButton(1);
		nui->liftStage2 = liftStick.GetRawButton(2);
		nui->liftStage3 = liftStick.GetRawButton(3);
		nui->liftStage4 = liftStick.GetRawButton(4);
		nui->liftStage5 = liftStick.GetRawButton(6);
		nui->manLiftVal = liftStick.GetRawAxis(3);
		nui->liftFreeze = rStick.GetRawButton(2);
		nui->pickupMode = liftStick.GetRawButton(8);

		nui->pokersDown = lStick.GetRawButton(4);

		SmartDashboard::PutNumber("pov", liftStick.GetPOV());

	 }
		
