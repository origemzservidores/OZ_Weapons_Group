class CfgPatches
{
	class IMP_EoTech
	{
		units[] = {"IMP_Optic_EOTechXPSOptic_Base","IMP_Optic_EOTechXPSOpticUp","IMP_Optic_EOTechXPSOpticDown"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class ItemOptics;
	class IMP_Optic_EOTechXPSOptic_Base: ItemOptics
	{
		scope = 0;
		displayName = "EoTech XPS3-4";
		descriptionShort = "$STR_IMP_HHSXPS";
		model = "IMPWMOD\Weapons\Optics\EoTechHHS1\models\EoTechHHS1_Up.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 527;
		itemSize[] = {2,1};
		inventorySlot[] = {"WeaponOptics"};
		simulation = "itemoptics";
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		hiddenSelections[] = {"glass","reddot","camoflage1","camoflage2"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"dz\weapons\attachments\optics\data\lensglass_clearer.rvmat","dz\weapons\attachments\optics\data\collimdot.rvmat","IMPWMOD\Weapons\Optics\EoTechHHS1\data\HHS1.rvmat","IMPWMOD\Weapons\Optics\EoTechHHS1\data\XPS3.rvmat"}},
						{0.7,{}},
						{0.5,{"dz\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","dz\weapons\attachments\optics\data\collimdot.rvmat","IMPWMOD\Weapons\Optics\EoTechHHS1\data\HHS1_damage.rvmat","IMPWMOD\Weapons\Optics\EoTechHHS1\data\XPS3_damage.rvmat"}},
						{0.3,{}},
						{0.0,{"dz\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat","dz\weapons\attachments\optics\data\collimdot.rvmat","IMPWMOD\Weapons\Optics\EoTechHHS1\data\HHS1_destruct.rvmat","IMPWMOD\Weapons\Optics\EoTechHHS1\data\XPS3_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/2";
			opticsZoomMax = "0.3926/2";
			opticsZoomInit = "0.3926/2";
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			PPDOFProperties[] = {0,0.2,0,0,0,0};
			opticSightTexture = "IMPWMOD\Weapons\Optics\EoTechHHS1\data\Reddot_ca.paa";
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class IMP_Optic_EOTechXPSOpticUp: IMP_Optic_EOTechXPSOptic_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\scope_alpha_clear_ca.paa","IMPWMOD\Weapons\Optics\EoTechHHS1\data\Reddot_ca.paa","IMPWMOD\Weapons\Optics\EoTechHHS1\data\HHS1_co.paa","IMPWMOD\Weapons\Optics\EoTechHHS1\data\XPS3_co.paa"};
	};
	class IMP_Optic_EOTechXPSOpticDown: IMP_Optic_EOTechXPSOptic_Base
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Optics\EoTechHHS1\models\EoTechHHS1_Down.p3d";
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\scope_alpha_clear_ca.paa","IMPWMOD\Weapons\Optics\EoTechHHS1\data\Reddot_ca.paa","IMPWMOD\Weapons\Optics\EoTechHHS1\data\HHS1_co.paa","IMPWMOD\Weapons\Optics\EoTechHHS1\data\XPS3_co.paa"};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			PPDOFProperties[] = {0,0.2,0,0,0,0};
			opticSightTexture = "IMPWMOD\Weapons\Optics\EoTechHHS1\data\Reddot_ca.paa";
		};
	};
};
