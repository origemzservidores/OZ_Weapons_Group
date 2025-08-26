class CfgPatches
{
	class IMP_Glock_Modded
	{
		units[]=
		{
			"Glock19"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols",
			"DZ_Pistols_Glock"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class Glock19_Base: Pistol_Base
	{
		magazines[]+=
		{
			"IMP_Mag_Glock_21Rnd",
			"IMP_Mag_Glock_30Rnd",
			"IMP_Drum_Glock_50Rnd"
		};
	};
};