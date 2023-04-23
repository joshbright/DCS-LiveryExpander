#pragma once
#include <cliext/vector>

ref class FileInfo
{
	protected:
		System::String^ location;
		System::String^ installRegistryLocation;
		System::String^ installRegistryKey;
		bool registryFound;
		cliext::vector<System::String^> files;
		void GetInstallRegistry();
		void GetInstallLocation();
		void VerifyInstallLocation();
	public:
		bool registryFound();
		cliext::vector<System::String^> getFiles();
};

ref class SteamInfo : FileInfo
{
	private:
		const System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Valve\\Steam";
		const System::String^ installRegistryKey = "SteamPath";
	public:
		SteamInfo();
};

ref class DCSInfo : FileInfo
{
	private:
		const System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Eagle Dynamics\\DCS World";
		const System::String^ installRegistryKey = "Path";
	public:
		DCSInfo();
};

ref class DCSBetaInfo : FileInfo
{
	private: 
		const System::String^ installRegistryLocation = "HKEY_CURRENT_USER\\SOFTWARE\\Eagle Dynamics\\DCS World OpenBeta";
		const System::String^ installRegistryKey = "Path";
	public:
		DCSBetaInfo();
};