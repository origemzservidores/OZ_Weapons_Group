class CfgPatches
{
	class IMP_Optic_PN23
	{
		units[] = {"IMP_Optic_PN23"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics",
			"DZ_Scripts"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	
	class IMP_Optic_PN23_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "PN 23";
		descriptionShort = "$STR_IMP_NVOptic";
		model = "IMPWMOD\Weapons\Optics\PN23\models\PN23.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 2000;
		itemSize[] = {2, 1};
		inventorySlot[] = {"sniperOptics","weaponOpticsHunting","weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		memoryPointCamera = "eyeScope_temp";
		cameraDir = "cameraDir";
		NVOptic = 1;
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Optics\PN23\data\PN23_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "IMPWMOD\Weapons\Optics\PN23\models\PN23_Reticle.p3d";
			preloadOpticType = "Optic_PN23_Reticle";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = 0.3926/3.5;
			opticsZoomMax = 0.3926/3.5;
			opticsZoomInit = 0.3926/3.5;
			distanceZoomMin = 100;
			distanceZoomMax = 700;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700};
			discreteDistanceInitIndex = 3;
			PPMaskProperties[] = {0.5, 0.5, 0.4, 0.05};
			PPLensProperties[] = {-1.25, 1, 0, 0};
			PPBlurProperties = 0.75;
		};
		class AnimationSources {
			class hide {
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		
		class EnergyManager {
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class Optic_PN23_Reticle: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\PN23\models\PN23_Reticle.p3d";
	};
	class IMP_Optic_PN23: IMP_Optic_PN23_Base
	{
		scope = 2;
	};
};
