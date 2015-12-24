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
	bool button5;
	bool manClawOut;
	float frontStrafeDrive;
	float rearStrafeDrive;
	bool strafeActive;
	bool toteCentStrafe;
	bool toteCorrMode;
	bool toteStackMode;
	bool liftDoubleSpeed;
	bool liftQuadSpeed;
	bool liftStepMode;
	bool liftStage1;
	bool liftStage2;
	bool liftStage3;
	bool liftStage4;
	bool doLandfill;
	bool manClawIn;
	bool trussShot;
	bool bumpShot;
	bool customShot;
	bool frontDrive;
	bool revDrive;
	float leftVal;
	float rightVal;
	bool turbo;
	bool forkUp;
	bool forkDown;	
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




