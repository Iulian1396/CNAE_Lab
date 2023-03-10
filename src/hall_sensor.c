/*******************************************************************************
*
* Copyright 2006-2015 Freescale Semiconductor, Inc.
* Copyright 2016-2017 NXP
*
****************************************************************************//*!
*
* @file     hall_sensor.c
*
* @date     September-10-2018
*
* @brief    Header file for Hall sensors
*
*******************************************************************************/
/******************************************************************************
| Includes
-----------------------------------------------------------------------------*/
#include "hall_sensor.h"

/******************************************************************************
| External declarations
-----------------------------------------------------------------------------*/

/******************************************************************************
| Defines and macros            (scope: module-local)
-----------------------------------------------------------------------------*/

/******************************************************************************
| Typedefs and structures       (scope: module-local)
-----------------------------------------------------------------------------*/

/******************************************************************************
| Global variable definitions   (scope: module-exported)
-----------------------------------------------------------------------------*/

  /*  */
  const uint8_t hall_array[2][6] =
  {
		  /* Clockwise rotation direction */
		  {
				0,   /* sector 0 */
				4,   /* sector 1 */
				5,   /* sector 2 */
				2,   /* sector 3 */
				1,   /* sector 4 */
				3,   /* sector 5 */
		  },
		  /* Counterclockwise rotation direction */
		  {
				2,   /* sector 3 */
				4,   /* sector 2 */
				3,   /* sector 1 */
				0,   /* sector 0 */
				1,   /* sector 5 */
				5,   /* sector 4 */
		  }
  };


/******************************************************************************
| Global variable definitions   (scope: module-local)
-----------------------------------------------------------------------------*/

/******************************************************************************
| Function prototypes           (scope: module-local)
-----------------------------------------------------------------------------*/

/******************************************************************************
| Function implementations      (scope: module-local)
-----------------------------------------------------------------------------*/

/******************************************************************************
| Function implementations      (scope: module-exported)
-----------------------------------------------------------------------------*/

/*******************************************************************************
*
* Function: 	void HALL_GetSector()
*
* Description:  This function determines the actual sector
* 				based on the Hall sensor logic.
*
*******************************************************************************/
tBool HALL_GetSector(tSensorHall *Hall)
{
	Hall->InA = (PINS_DRV_ReadPins(PTD) >> 11) & 0x1;
	Hall->InB = (PINS_DRV_ReadPins(PTD) >> 10) & 0x1;
	Hall->InC = (PINS_DRV_ReadPins(PTA) >> 1)  & 0x1;
	Hall->InABC = ((Hall->InA << 2) + (Hall->InB << 1) + Hall->InC) - 1;

	Hall->Sector = hall_array[rotationDir][Hall->InABC];

	return 1;
}
/* End of file */
