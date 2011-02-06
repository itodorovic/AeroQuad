/*
  AeroQuad v2.1 - January 2011
  www.AeroQuad.com
  Copyright (c) 2011 Ted Carancho.  All rights reserved.
  An Open Source Arduino based multicopter.
 
  This program is free software: you can redistribute it and/or modify 
  it under the terms of the GNU General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or 
  (at your option) any later version. 

  This program is distributed in the hope that it will be useful, 
  but WITHOUT ANY WARRANTY; without even the implied warranty of 
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
  GNU General Public License for more details. 

  You should have received a copy of the GNU General Public License 
  along with this program. If not, see <http://www.gnu.org/licenses/>. 
*/

#ifndef _ACCEL_CHR6DM_H
#define _ACCEL_CHR6DM_H

#include <Accelerometer.h>
#include <CHR6DM.h>

class AccelCHR6DM : public Accelerometer 
{
private:
  CHR6DM *_chr6dm;
  
public:
  AccelCHR6DM(CHR6DM chr6dm);

  void initialize(void);

  void measure(void);

  const int getFlightData(byte axis);
  
  // Allows user to zero accelerometers on command
  void calibrate(void);

  void calculateAltitude(void);
};

#endif