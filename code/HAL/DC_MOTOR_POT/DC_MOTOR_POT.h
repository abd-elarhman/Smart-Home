

#ifndef DC_MOTOR_POT_H_
#define DC_MOTOR_POT_H_

#include"..\..\LIB\LSTD_TYPES.h"
#include "DC_MOTOR_POT_CFG.h"

void H_DcMotorPotInit(void);
void H_DcMotorSetDirection(u8);
void H_DcMotorSetSpeed(u32);
void H_DcMotorPotStart(u8);
void H_DcMotorPotStop(void);

#define CLK_W      1
#define A_CLK_W    2



#endif /* DC_MOTOR_H_ */
