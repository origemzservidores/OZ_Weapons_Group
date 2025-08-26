class CfgPatches
{
	class IMP_Optic_HAMR
	{
		units[] = {"IMP_Optic_HAMR"};
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
	class ItemOptics: Inventory_Base
	{
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "PSO11Optic_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "PSO11Optic_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class IMP_Optic_HAMR_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "Leupold Mark 4";
		descriptionShort = "$STR_IMP_4xzoom";
		model = "IMPWMOD\Weapons\Optics\LeupoldHAMR\models\LeupoldHAMR.p3d";
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 440;
		itemSize[] = {2,1};
		attachments[] = {};
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\optics\data\collimdot_red_ca.paa"};
		inventorySlot[] = {"weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.00025;
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
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4"};
			opticSightTexture = "IMPWMOD\Weapons\Optics\LeupoldHAMR\data\Lens.paa";
			opticSightMaterial = "IMPWMOD\Weapons\Optics\LeupoldHAMR\data\Tritium.rvmat";
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.15,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.05;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};
	
	class IMP_Optic_HAMR: IMP_Optic_HAMR_Base
	{
		scope = 2;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyOptic_ACOG: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "\DZ\weapons\attachments\optics\optic_acog.p3d";
	};
	class ProxyOptic_Hunting: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsHunting";
		model = "\DZ\weapons\attachments\optics\optic_hunting.p3d";
	};
};
