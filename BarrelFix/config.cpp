#define _ARMA_

class CfgPatches
{
	class BarrelFix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class BarrelFix
	{
		dir = "BarrelFix";
		name = "BarrelFix";
		author = "AndiTheBambi";
		version = "0.1";
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"BarrelFix/Scripts/4_World"};
			};
		};
	};
};
