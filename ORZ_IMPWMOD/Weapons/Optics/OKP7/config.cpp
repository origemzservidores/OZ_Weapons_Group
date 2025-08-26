class CfgPatches
{
	class IMP_Optic_OKP7
	{
		units[]={""};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics",
			"DZ_Scripts"
		};
	};
};
class cfgVehicles {
	class ItemOptics;
	
	class IMP_Optic_OKP7_Base: ItemOptics
	{
		scope=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName="OKP7";
		descriptionShort="$STR_IMP_Collimator";
		model="\IMPWMOD\Weapons\Optics\OKP7\models\OKP7.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={2,2};
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		hiddenSelections[]=
		{
			"reddot",
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"IMPWMOD\Weapons\Optics\OKP7\data\OKP7_co.paa"
		};
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 50;
					healthLevels[] = {{1.0, {""}}, {0.7, {}}, {0.5, {""}}, {0.3, {}}, {0.0, {""}}};
				};
			};
		};
		class OpticsInfo {
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur1"};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5, 0.5, 0.4, 0.05};
			PPLensProperties[] = {1, 0.15, 0, 0};
			PPBlurProperties = 0.2;
			opticSightTexture = "#(argb,8,8,3)color(0,1,0.25098,1.0,co)";
		};		
		class EnergyManager {
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	
	class IMP_Optic_OKP7: IMP_Optic_OKP7_Base
	{
		scope = 2;
		hiddenSelections[]=
		{
			"reddot",
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"IMPWMOD\Weapons\Optics\OKP7\data\OKP7_co.paa"
		};
	};
};