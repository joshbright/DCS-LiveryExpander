#pragma once
#include <cliext/vector>

ref class RegistryInfo
{
	protected:
		System::String^ installRegistryPath;
		System::String^ installRegistryKey;
		System::String^ installRegistryLocation;
		System::String^ locationPath;
		cliext::vector<System::String^> files;
		bool registryFound;
		bool locationExists;
		void FindInstallRegistry();
		void CalculateRegistryFound();
		virtual void FindInstallLocation();
		System::String^ VerifyInstallLocation(System::String^ installedLocation);

	public:
		RegistryInfo(System::String^ installRegistryLocation, System::String^ installRegistryKey)
		{
			this->installRegistryLocation = installRegistryLocation;
			this->installRegistryKey = installRegistryKey;
		};
		System::String^ GetLocationPath();
		bool GetLocationExists();
		cliext::vector<System::String^> GetFiles();
};

ref class SteamInfo : RegistryInfo
{
	private:
		System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Valve\\Steam";
		System::String^ installRegistryKey = "SteamPath";
		const int dcsSteamID = 223750;
	protected:
		void FindInstallLocation() override;
	public:
		SteamInfo() : RegistryInfo(installRegistryLocation, installRegistryKey)
		{
			FindInstallRegistry();
			CalculateRegistryFound();
			FindInstallLocation();
		};
};

ref class DCSInfo : RegistryInfo
{
	private:
		System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Eagle Dynamics\\DCS World";
		System::String^ installRegistryKey = "Path";
	public:
		DCSInfo() : RegistryInfo(installRegistryLocation, installRegistryKey)
		{
			FindInstallRegistry();
			CalculateRegistryFound();
			FindInstallLocation();
		};
};

ref class DCSBetaInfo : RegistryInfo
{
	private: 
		System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Eagle Dynamics\\DCS World OpenBeta";
		System::String^ installRegistryKey = "Path";
	public:
		DCSBetaInfo() : RegistryInfo(installRegistryLocation, installRegistryKey)
		{
			FindInstallRegistry();
			CalculateRegistryFound();
			FindInstallLocation();
		};
};