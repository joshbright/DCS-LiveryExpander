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

		void FindInstallRegistry();
		void CalculateRegistryFound();
		virtual void FindInstallLocation();
		System::String^ VerifyInstallLocation(System::String^ installedLocation);

	public:
		cliext::vector<System::String^> getFiles();
};

ref class SteamInfo : RegistryInfo
{
	private:
		const System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Valve\\Steam";
		const System::String^ installRegistryKey = "SteamPath";
		const int dcsSteamID = 223750;
	protected:
		void FindInstallLocation() override;
	public:
		SteamInfo();
};

ref class DCSInfo : RegistryInfo
{
	private:
		const System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Eagle Dynamics\\DCS World";
		const System::String^ installRegistryKey = "Path";
	public:
		DCSInfo();
};

ref class DCSBetaInfo : RegistryInfo
{
	private: 
		const System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Eagle Dynamics\\DCS World OpenBeta";
		const System::String^ installRegistryKey = "Path";
	public:
		DCSBetaInfo();
};