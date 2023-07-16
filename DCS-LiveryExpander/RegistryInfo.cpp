#include "RegistryInfo.h"

using namespace System;
using namespace System::IO;
using namespace Microsoft::Win32;
using namespace System::Text;



#pragma region RegistryInfo

void RegistryInfo::FindInstallRegistry()
{
	Object^ registryObject = Registry::GetValue(installRegistryPath, installRegistryKey, "NotFound");

	//If the registry location doesn't exist it will return a nullptr. We want to make sure that is handled
	installRegistryLocation = (registryObject == nullptr ? "NotFound" : registryObject->ToString());
}

void RegistryInfo::CalculateRegistryFound()
{
	registryFound = String::Equals(installRegistryLocation, "NotFound");
}

String^ RegistryInfo::VerifyInstallLocation(String^ installedLocation)
{
	try
	{
		//Now we check to ensure that the location we retrieved actually exists
		if (!String::IsNullOrWhiteSpace(installedLocation))
		{
			if (Directory::Exists(installedLocation))
				return installedLocation;
		}

		return "";
	}
	catch (Exception^ ex)
	{
		//TODO Fill out this exception
		//LogException(ex, "An error occured while attempting to verify the following location: " + installedLocation);
		return "";
	}
}

void RegistryInfo::FindInstallLocation()
{
	try
	{
		if (registryFound)
		{
			locationPath = VerifyInstallLocation(installRegistryLocation);
		}
		else
		{
			locationPath = "";
		}
	}
	catch (Exception^ ex)
	{
		//TODO Fill out this exception
	}
}


cliext::vector<String^> RegistryInfo::getFiles()
{
	
}

#pragma endregion

#pragma region SteamInfo

SteamInfo::SteamInfo()
{
	FindInstallRegistry();
	CalculateRegistryFound();
	FindInstallLocation();
}

/// <summary>
/// Function that will parse steams libraryfolders.vdf file to determine the DCS install location
/// </summary>
/// <param name="steamPath"></param>
/// <returns></returns>
void SteamInfo::FindInstallLocation()
{
	try
	{
		if (registryFound)
		{

			String^ configLocation = "";
			if (Directory::Exists(installRegistryLocation->Concat("/steamapps/")))
			{
				//TODO: It would be a good idea to verify that the matches actually return something


				String^ libraryFolderText = File::ReadAllText(installRegistryLocation->Concat("/steamapps/libraryfolders.vdf"));

				//Regex to find the drive that the steam library is located
				String^ steamDriveRegex = "\"\\d\"[\\s]*{[\\s\\r\\n\\w\\:\\\\\\\"\\s\\(\\)\\{]*\"" + dcsSteamID + "\"[\\s]*\"[0-9]*\"[\\s\\r\\n\\w\\:\\\\\\\"\\s\\(\\)\\{]*}";

				RegularExpressions::Match^ drive = RegularExpressions::Regex::Match(libraryFolderText, steamDriveRegex);

				//Regex to get the path line of the steam library
				String^ steamLibraryRegex = "\"path\"[\\s]*[\\s\\r\\n\\w\\:\\\\\\\"\\s\\(\\)\\{]*(Steam|SteamLibrary)\"";

				RegularExpressions::Match^ path = RegularExpressions::Regex::Match(drive->Value, steamLibraryRegex);

				//Regex to extract out the actual path
				String^ libraryLocationRegex = "\"\\w:[\\w\\d\\\\\\s\\(\\)\\\"]*\"";

				RegularExpressions::Match^ folderLocation = RegularExpressions::Regex::Match(path->Value, libraryLocationRegex);

				//Trim any double quotes and fix the extra backslashes coming in from the libraryfolders file
				configLocation = folderLocation->Value->Trim('\"')->Replace("\\\\", "\\") + "\\steamapps\\common\\DCSWorld\\Config\\Liveries";

				//TODO: verify that this is where the actual Liveries file is installed to
			}
			locationPath = VerifyInstallLocation(configLocation);
		}
		else
		{
			locationPath = "";
		}
	}
	catch (Exception^ ex)
	{
		//TODO Fill out this exception
		//LogException(ex, "An error occured while attempting to retreive the DCS Steam Location");
		locationPath = "";
	}
}

#pragma endregion

#pragma region DCSInfo

DCSInfo::DCSInfo()
{
	FindInstallRegistry();
	CalculateRegistryFound();
	FindInstallLocation();
}

#pragma endregion

#pragma region DCSBetaInfo

DCSBetaInfo::DCSBetaInfo()
{
	FindInstallRegistry();
	CalculateRegistryFound();
	FindInstallLocation();
}

#pragma endregion