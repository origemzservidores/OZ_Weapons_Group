class CfgPatches
{
	class IMP_Optic_ATNXSight
	{
		units[] = {"IMP_Optic_ATNXSight"};
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
	
	class IMP_Optic_ATNXSight_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "ATN-X Sight 16x";
		descriptionShort = "$STR_IMP_16xzoomrangefinder";
		model = "IMPWMOD\Weapons\Optics\ATNX-Sight\models\ATNXSight.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {3,2};
		attachments[]=
		{
			"BatteryD"
		};
		inventorySlot[] = {"sniperOptics","weaponOpticsHunting","weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 50;
					healthLevels[] = {{1.0, {""}}, {0.7, {}}, {0.5, {""}}, {0.3, {}}, {0.0, {""}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "IMPWMOD\Weapons\Optics\ATNX-Sight\models\ATNXSight_Reticle.p3d";
			preloadOpticType = "ATNXSight_Reticle";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/8";
			opticsZoomMax = "0.3926/16";
			opticsZoomInit = "0.3926/8";
			discretefov[] = {"0.3926/8","0.3926/12","0.3926/16"};
			discreteInitIndex = 0;
			distanceZoomMin = 150;
			distanceZoomMax = 600;
			discreteDistance[] = {150,200,300,400,500,600,700,800,900,1000,1200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0.3;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class ATNXSight_Reticle: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\ATNX-Sight\models\ATNXSight_Reticle.p3d";
	};
	class IMP_Optic_ATNXSight: IMP_Optic_ATNXSight_Base
	{
		scope = 2;
	};
};
