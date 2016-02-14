/*
 * Position.h
 *
 *  Created on: Feb 13, 2016
 *      Author: Noah
 */

#ifndef SRC_POSITION_H_
#define SRC_POSITION_H_

#include "WPILib.h"
#include "AHRS.h"
#include "Constants.h"

class Position {
	AHRS mxp; //navx mxp
	float angle;
	float pitch;
	float encoderTicks;
	float xPos;
	float yPos;
	float wheelRadius = Constants::wheelRadius;
	float obstacleXPos [5] = {0, 0, 0, 0, 0};
	float obstacleYPos [5] = {0, 0, 0, 0, 0};

public:
	Position();
	inline float GetAngle();
	inline float GetPitch();
	void TrackX(bool movingForward);
	void TrackY(bool movingForward);
	void Update(bool movingForward);
	int NearestObstacle();
	float GetX();
	float GetY();
	float AngleToTower();
	float DistanceToTower();
	void Calibrate();
};

#endif /* SRC_POSITION_H_ */
