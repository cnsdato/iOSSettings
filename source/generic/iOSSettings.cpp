/*
Generic implementation of the iOSSettings extension.
This file should perform any platform-indepedentent functionality
(e.g. error checking) before calling platform-dependent implementations.
*/

/*
 * NOTE: This file was originally written by the extension builder, but will not
 * be overwritten (unless --force is specified) and is intended to be modified.
 */


#include "iOSSettings_internal.h"
s3eResult iOSSettingsInit()
{
    //Add any generic initialisation code here
    return iOSSettingsInit_platform();
}

void iOSSettingsTerminate()
{
    //Add any generic termination code here
    iOSSettingsTerminate_platform();
}

bool iOSSettingsGetBool(const char* settingsname)
{
	return iOSSettingsGetBool_platform(settingsname);
}

void iOSSettingsSetBool(const char* settingsname, bool value)
{
  iOSSettingsSetBool_platform(settingsname, value);
}