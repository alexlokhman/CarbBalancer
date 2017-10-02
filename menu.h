// This software, known as CarbOnBal is
// Copyright, 2017 L.L.M. (Dennis) Meulensteen. dennis@meulensteen.nl
//
// This file is part of CarbOnBal. A combination of software and hardware.
// I hope it may be of some help to you in balancing your carburetors and throttle bodies.
// Always be careful when working on a vehicle or electronic project like this.
// Your life and health are your sole responsibility, use wisely.
//
// CarbOnBal hardware is covered by the Cern Open Hardware License v1.2
// a copy of the text is incuded with the source code.
//
// CarbOnBal is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// CarbOnBal is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with CarbOnBal.  If not, see <http://www.gnu.org/licenses/>.



#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <Arduino.h>

#define DISPLAY_COLS 20
#define DISPLAY_ROWS 4
#define MENUCARET 126


void actionDisplayMainMenu() ;
void actionDisplaySettingsMenu() ;
void actionDisplaySoftwareSettingsMenu() ;
void actionDisplayHardwareSettingsMenu() ;
void actionDisplayCommsMenu() ;
void actionDisplayContrastMenu() ;
void actionDisplayCalibrationMenu();
void actionSaveSettings();
void actionLoadSettings();
void doCalibrationDump();
void doDataDump();
void doCalibrate();
void doRevs();
void doLoadCalibrations();
void doSaveCalibrations();
void doZeroCalibrations();

int doSettingChanger(String valueName, int minimum, int maximum, int startValue, int steps, void (*func)(int i) );
int doSettingChooser(String valueName, String settings[], int count, int startIndex) ;

void handleMenu(String menu[], void (*func[])(), int menuSize);
void drawMenu(String lines[], int count, int offset) ;
void drawCaret(uint8_t line);

void makeChar(byte *character, int value);
void makeBars(char *bars, uint8_t number, uint8_t skip) ;




#endif