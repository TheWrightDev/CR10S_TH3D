/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Japanese (Kana)
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#ifndef LANGUAGE_KANA_UTF_H
#define LANGUAGE_KANA_UTF_H

#define MAPPER_E382E383
#define DISPLAY_CHARSET_ISO10646_KANA

// This just to show the potential benefit of unicode.
// This translation can be improved by using the full charset of unicode codeblock U+30A0 to U+30FF.

// çä»®å??è¡¨ç¤ºå®ç¾©
#define WELCOME_MSG                         MACHINE_NAME _UxGT(" ready.")
#define MSG_SD_INSERTED                     _UxGT("ã«ã¼ãã¬ã½ã¦ãã¥ã¦ãµã¬ãã·ã¿")        // "Card inserted"
#define MSG_SD_REMOVED                      _UxGT("ã«ã¼ãã¬ã¢ãªãã»ã³")               // "Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("ã¨ã³ãã¹ããã")                  // "Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("ã¡ã¤ã³")                       // "Main"
#define MSG_AUTOSTART                       _UxGT("ã¸ãã¦ã«ã¤ã·")                   // "Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("ã¢ã¼ã¿ã¼ãã³ã²ã³ ãªã")            // "Disable steppers"
#define MSG_DEBUG_MENU                      _UxGT("ãã?ãã°ã¡ãã¥ã¼")                // "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               _UxGT("ãã­ã°ã¬ã¹ã?ã¼ ãã¹ã")            // "Progress Bar Test"
#define MSG_AUTO_HOME                       _UxGT("ã²ã³ãã³ããã­")                  // "Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("Xã¸ã¯ ã²ã³ãã³ããã­")             // "Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("Yã¸ã¯ ã²ã³ãã³ããã­")             // "Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("Zã¸ã¯ ã²ã³ãã³ããã­")             // "Home Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("ã²ã³ãã³ããã­ã?ã¥ã¦")              // "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("ã¬ããªã³ã°ã«ã¤ã·")                // "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("ãã®ãã½ã¯ãã¤ãã³ã")             // "Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("ã¬ããªã³ã°ã«ã³ãªã§ã¦")              // "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                _UxGT("ã­ã¸ã¥ã³ãªãã»ããã»ããã¤")         // "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("ãªãã»ããã¬ãã­ã¨ã¦ãµã¬ãã·ã¿")       // "Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("ã­ã¸ã¥ã³ã»ãã")                 // "Set origin"
#define MSG_PREHEAT_1                       _UxGT("PLA ã¨ã?ã")                   // "Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   _UxGT("PLA ã¹ããã¨ã?ã")              // " All"
#define MSG_PREHEAT_1_BEDONLY               _UxGT("PLA ãããã¨ã?ã")              // " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT("ã»ããã¤")       // " conf"
#define MSG_PREHEAT_2                       _UxGT("ABS ã¨ã?ã")                  // "Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   _UxGT("ABS ã¹ããã¨ã?ã")              // " All"
#define MSG_PREHEAT_2_BEDONLY               _UxGT("ABS ãããã¨ã?ã")              // " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT("ã»ããã¤")       // " conf"
#define MSG_COOLDOWN                        _UxGT("ã«ã?ããã¤ã·")                  // "Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("ãã³ã²ã³ ãªã³")                 // "Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("ãã³ã²ã³ ãªã")                 // "Switch power off"
#define MSG_EXTRUDE                         _UxGT("ãªã·ãã·")                     // "Extrude"
#define MSG_RETRACT                         _UxGT("ãã­ã³ãã»ããã¤")                // "Retract"
#define MSG_MOVE_AXIS                       _UxGT("ã¸ã¯ã¤ãã¦")                    // "Move axis"
#define MSG_BED_LEVELING                    _UxGT("ãããã¬ããªã³ã°")                // "Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("ãããã¬ããªã³ã°")                // "Level bed"
#define MSG_MOVING                          _UxGT("ã¤ãã¦ã?ã¥ã¦")                   // "Moving..."
#define MSG_FREE_XY                         _UxGT("XYã¸ã¯ ã«ã¤ãã¦")                // "Free XY"
#define MSG_MOVE_X                          _UxGT("Xã¸ã¯ ã¤ãã¦")                  // "Move X"
#define MSG_MOVE_Y                          _UxGT("Yã¸ã¯ ã¤ãã¦")                  // "Move Y"
#define MSG_MOVE_Z                          _UxGT("Zã¸ã¯ ã¤ãã¦")                  // "Move Z"
#define MSG_MOVE_E                          _UxGT("ã¨ã¯ã¹ãã«ã¼ãã¼")                // "Extruder"
#define MSG_MOVE_01MM                       _UxGT("0.1mm ã¤ãã¦")                 // "Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("  1mm ã¤ãã¦")                 // "Move 1mm"
#define MSG_MOVE_10MM                       _UxGT(" 10mm ã¤ãã¦")                 // "Move 10mm"
#define MSG_SPEED                           _UxGT("ã½ã¯ã")                       // "Speed"
#define MSG_BED_Z                           _UxGT("Zãªãã»ãã")                   // "Bed Z"
#define MSG_NOZZLE                          _UxGT("ããºã«")                       // "Nozzle"
#define MSG_BED                             _UxGT("ããã")                       // "Bed"
#define MSG_FAN_SPEED                       _UxGT("ãã¡ã³ã½ã¯ã")                    // "Fan speed"
#define MSG_FLOW                            _UxGT("ãã·ã¥ããªã§ã¦")                   // "Flow"
#define MSG_CONTROL                         _UxGT("ã»ã¤ã®ã§")                      // "Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ãµã¤ãã¤") // " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ãµã¤ã³ã¦") // " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ãã¡ã¯ã¿ã¼") // " Fact"
#define MSG_AUTOTEMP                        _UxGT("ã¸ãã¦ãªã³ãã»ã¤ã®ã§")               // "Autotemp"
#define MSG_ON                              _UxGT("ãªã³ ")                         // "On "
#define MSG_OFF                             _UxGT("ãªã ")                         // "Off"
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("ã»ã³ã¿ã¯")                     // "Select"
#define MSG_ACC                             _UxGT("ã«ã½ã¯ã mm/s2")               // "Accel"
#define MSG_JERK                            _UxGT("ã¤ã¯ã mm/s")                  // "Jerk"
#define MSG_VX_JERK                         _UxGT("Xã¸ã¯ ã¤ã¯ã mm/s")             // "Vx-jerk"
#define MSG_VY_JERK                         _UxGT("Yã¸ã¯ ã¤ã¯ã mm/s")             // "Vy-jerk"
#define MSG_VZ_JERK                         _UxGT("Zã¸ã¯ ã¤ã¯ã mm/s")             // "Vz-jerk"
#define MSG_VE_JERK                         _UxGT("ã¨ã¯ã¹ãã«ã¼ãã¼ ã¤ã¯ã")          // "Ve-jerk"
#define MSG_VMAX                            _UxGT("ãµã¤ãã¤ãªã¯ãªã½ã¯ã ")            // "Vmax "
#define MSG_VMIN                            _UxGT("ãµã¤ã·ã§ã¦ãªã¯ãªã½ã¯ã")           // "Vmin"
#define MSG_VTRAV_MIN                       _UxGT("ãµã¤ã·ã§ã¦ã¤ãã¦ã½ã¯ã")           // "VTrav min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("ãµã¤ãã¤ã«ã½ã¯ã ")              // "Amax "
#define MSG_A_RETRACT                       _UxGT("ãã­ã³ãã«ã½ã¯ã")               // "A-retract"
#define MSG_A_TRAVEL                        _UxGT("ã¤ãã¦ã«ã½ã¯ã")                // "A-travel"
#define MSG_TEMPERATURE                     _UxGT("ãªã³ã")                      // "Temperature"
#define MSG_MOTION                          _UxGT("ã¦ã´ã­ã»ããã¤")                // "Motion"
#define MSG_FILAMENT                        _UxGT("ãã£ã©ã¡ã³ã")                   // "Filament"
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("ãã£ã©ã¡ã³ãã?ã§ãã±ã¤")            // "Fil. Dia."
#define MSG_CONTRAST                        _UxGT("LCDã³ã³ãã©ã¹ã")               // "LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("ã¡ã¢ãªãã«ã¯ãã¦")               // "Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("ã¡ã¢ãªã«ã©ã¨ãã³ã")               // "Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("ã»ããã¤ãªã»ãã")               // "Restore failsafe"
#define MSG_REFRESH                         _UxGT("ãªãã¬ãã·ã¥")                  // "Refresh"
#define MSG_WATCH                           _UxGT("ã¸ã§ã¦ãã¦ã¬ã¡ã³")               // "Info screen"
#define MSG_PREPARE                         _UxGT("ã¸ã¥ã³ãã»ããã¤")               // "Prepare"
#define MSG_TUNE                            _UxGT("ã?ã§ã¦ã»ã¤")                    // "Tune"
#define MSG_PAUSE_PRINT                     _UxGT("ã¤ã?ã¸ãã¤ã·")                  // "Pause print"
#define MSG_RESUME_PRINT                    _UxGT("ããªã³ããµã¤ã«ã¤")                // "Resume print"
#define MSG_STOP_PRINT                      _UxGT("ããªã³ããã¤ã·")                 // "Stop print"
#define MSG_CARD_MENU                       _UxGT("SDã«ã¼ãã«ã©ããªã³ã")            // "Print from SD"
#define MSG_NO_CARD                         _UxGT("SDã«ã¼ãã¬ã¢ãªãã»ã³")            // "No SD card"
#define MSG_DWELL                           _UxGT("ã­ã¥ã¦ã·")                     // "Sleep..."
#define MSG_USERWAIT                        _UxGT("ã·ã?ã©ã¯ãªãã?ã¯ããµã¤")           // "Wait for user..."
#define MSG_RESUMING                        _UxGT("ããªã³ããµã¤ã«ã¤")                // "Resuming print"
#define MSG_PRINT_ABORTED                   _UxGT("ããªã³ãã¬ã?ã¥ã¦ã·ãµã¬ãã·ã¿")       // "Print aborted"
#define MSG_NO_MOVE                         _UxGT("ã¦ã´ã­ãã»ã³")                  // "No move."
#define MSG_KILLED                          _UxGT("ãã¸ã§ã¦ãã¤ã·")                  // "KILLED. "
#define MSG_STOPPED                         _UxGT("ãã¤ã·ã·ãã·ã¿")                  // "STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("ãã­ã³ããªã§ã¦ mm")                // "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("ãã­ã³ããªã§ã¦S mm")               // "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                _UxGT("ãã­ã³ãã½ã¯ã mm/s")             // "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("ããºã«ã¿ã¤ã mm")                // "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("ãã·ã§ã¦ãªã§ã¦ mm")               // "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("ãã·ã§ã¦ãªã§ã¦S mm")              // "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("ãã·ã§ã¦ã½ã¯ã mm/s")            // "UnRet  V"
#define MSG_AUTORETRACT                     _UxGT("ã¸ãã¦ãã­ã³ã")                 // "AutoRetr."
#define MSG_FILAMENTCHANGE                  _UxGT("ãã£ã©ã¡ã³ãã³ã¦ã«ã³")              // "Change filament"
#define MSG_INIT_SDCARD                     _UxGT("SDã«ã¼ããµã¤ã¨ãã³ã")             // "Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("SDã«ã¼ãã³ã¦ã«ã³")               // "Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Zãã­ã¼ã ãããã¬ã¤")            // "Z probe out. bed"
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch ã¸ã³ã·ã³ãã³")          // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch ãªã»ãã")             // "Reset BLTouch"
#define MSG_HOME                            _UxGT("ãµã­ã")                      // "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("ã²ããã­ãµã»ãã¯ããµã¤")           // "first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Zãªãã»ãã")                   // "Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("Xã¸ã¯ ããã¦")                  // "Babystep X"
#define MSG_BABYSTEP_Y                      _UxGT("Yã¸ã¯ ããã¦")                  // "Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("Zã¸ã¯ ããã¦")                  // "Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("ã¤ãã¦ã²ã³ã«ã¤ã±ã³ã?ã­ãã¦")         // "Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("ã«ã?ãã·ããã¤")                 // "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("ã¨ã©ã¼:ã¸ã§ã¦ã?ã§ã¦ãµã¼ãã¹ã¿ã¼ã­ãã¦")  // "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("ã?ããã¦ã½ã¦")                   // "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("ã¨ã©ã¼:ãµã¤ã³ã¦ãªã³ã?ã§ã¦ã«")         // "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("ã¨ã©ã¼:ãµã¤ãã¤ãªã³ããã³")          // "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("ã¨ã©ã¼:ããã ãµã¤ã³ã¦ãªã³ã?ã§ã¦ã«")    // "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("ã¨ã©ã¼:ããã ãµã¤ãã¤ãªã³ããã³")     // "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST // "G28 Z Forbidden"
#define MSG_HALTED                          _UxGT("ããªã³ã¿ã¼ã?ãã¤ã·ã·ãã·ã¿")         // "PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("ãªã»ããã·ãã¯ããµã¤")              // "Please reset"
#define MSG_SHORT_DAY                       _UxGT("d")                          // One character only
#define MSG_SHORT_HOUR                      _UxGT("h")                          // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m")                          // One character only
#define MSG_HEATING                         _UxGT("ã«ã?ãã?ã¥ã¦")                   // "Heating..."
#define MSG_HEATING_COMPLETE                _UxGT("ã«ã?ãã«ã³ãªã§ã¦")                 // "Heating done."
#define MSG_BED_HEATING                     _UxGT("ããã ã«ã?ãã?ã¥ã¦")              // "Bed Heating."
#define MSG_BED_DONE                        _UxGT("ããã ã«ã?ãã«ã³ãªã§ã¦")            // "Bed done."
#define MSG_DELTA_CALIBRATE                 _UxGT("ãã«ã¿ ã³ã¦ã»ã¤")                // "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("Xã¸ã¯ ã³ã¦ã»ã¤")                 // "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Yã¸ã¯ ã³ã¦ã»ã¤")                 // "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Zã¸ã¯ ã³ã¦ã»ã¤")                 // "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("ã?ã¥ã¦ã·ã³ ã³ã¦ã»ã¤")              // "Calibrate Center"
#define MSG_INFO_MENU                       _UxGT("ã³ãããªã³ã¿ã¼ããã¤ã")             // "About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("ããªã³ã¿ã¼ã¸ã§ã¦ãã¦")              // "Printer Info"
#define MSG_INFO_STATS_MENU                 _UxGT("ããªã³ãã¸ã§ã¦ã­ã§ã¦")              // "Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("ã»ã¤ã®ã§ã±ã¤ã¸ã§ã¦ãã¦")            // "Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("ãµã¼ãã¹ã¿ã¼")                   // "Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("ã¨ã¯ã¹ãã«ã¼ãã¼ã¹ã¦")             // "Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("ãã¼ã¬ã¼ã")                    // "Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("ãã­ãã³ã«")                    // "Protocol"
#define MSG_CASE_LIGHT                      _UxGT("ã­ã§ã¦ã¿ã¤ãã¤ã·ã§ã¦ã¡ã¤")       // "Case light"
#define MSG_INFO_PRINT_COUNT                _UxGT("ããªã³ãã¹ã¦ ")                  // "Print Count"
#define MSG_INFO_COMPLETED_PRINTS           _UxGT("ã«ã³ãªã§ã¦ã¹ã¦")                  // "Completed"
#define MSG_INFO_PRINT_TIME                 _UxGT("ããªã³ãã¸ã«ã³ã«ã¤ã±ã¤")            // "Total print time"
#define MSG_INFO_PRINT_LONGEST              _UxGT("ãµã¤ã?ã§ã¦ããªã³ãã¸ã«ã³")           // "Longest job time"
#define MSG_INFO_PRINT_FILAMENT             _UxGT("ãã£ã©ã¡ã³ãã·ã¨ã¦ãªã§ã¦ã«ã¤ã±ã¤")       // "Extruded total"
#define MSG_INFO_MIN_TEMP                   _UxGT("ã»ããã¤ãµã¤ãã¤ãªã³")              // "Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("ã»ããã¤ãµã¤ã³ã¦ãªã³")              // "Max Temp"
#define MSG_INFO_PSU                        _UxGT("ãã³ã²ã³ã·ã¥ãã")                // "Power Supply"
#define MSG_DRIVE_STRENGTH                  _UxGT("ã¢ã¼ã¿ã¼ã¯ãã¦ãªã§ã¯")              // "Drive Strength"
#define MSG_DAC_PERCENT                     _UxGT("DACã·ã¥ããªã§ã¯ %")               // "Driver %"
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EPROM                     // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("ãµã©ããªã·ãã¹")                 // "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("ããªã³ããµã¤ã«ã¤")                // "Resume print"
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("ã³ã¦ã«ã³ã²ã«ã¤ã·ã·ãã¹")            // "Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("ã·ã?ã©ã¯ãªãã?ã¯ããµã¤")            // "of the filament"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("ãã£ã©ã¡ã³ããã­ãã·ã?ã¥ã¦")          // "Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("ã·ã?ã©ã¯ãªãã?ã¯ããµã¤")            // "filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("ãã£ã©ã¡ã³ãã²ã½ã¦ãã¥ã¦ã·,")         // "Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("ã¯ãªãã¯ã¹ã«ãã¾ãã³ã¦ã·ãã¹")         // "and press button"
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("ãã£ã©ã¡ã³ãã½ã¦ãã³ã?ã¥ã¦")          // "Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("ã·ã?ã©ã¯ãªãã?ã¯ããµã¤")            // "filament load"
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("ãã£ã©ã¡ã³ããªã·ãã·ã?ã¥ã¦")          // "Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("ã·ã?ã©ã¯ãªãã?ã¯ããµã¤")            // "filament extrude"
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("ããªã³ãã²ãµã¤ã«ã¤ã·ãã¹")           // "Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("ã·ã?ã©ã¯ãªãã?ã¯ããµã¤")            // "to resume"

#endif // LANGUAGE_KANA_UTF_H
