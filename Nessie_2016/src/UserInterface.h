/*
 * UserInterface.h
 *
 *  Created on: Nov 23, 2014
 *      Author: Studio-shop
 */
#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_

#include "WPILib.h"


/*
 * Description:
 */
struct NessieUserInput{
	bool turboMode;
	bool manClawIn;
	bool manClawOut;
	bool clawFreeze;
	float frontStrafeDrive;
	float rearStrafeDrive;
	float leftDrive;
	float rightDrive;
	bool strafeActive;
	bool toteCentStrafe;
	bool toteCorrMode;
	bool toteStackMode;
	bool liftDoubleSpeed;
	bool liftQuadSpeed;
	bool liftFreeze;
	bool liftStepMode;
	bool liftStage1;
	bool liftStage2;
	bool liftStage3;
	bool liftStage4;
	bool liftStage5;
	bool doLandfill;
	bool pickupMode;
	bool zeroLift;
	float manLiftVal;
	bool pokersDown;

};


class UserInterface {
private:
	Joystick lStick, rStick, liftStick;
	 
public:
	UserInterface();
	~UserInterface();
	void Init(void);
	void GetData(NessieUserInput *);

};

#endif




