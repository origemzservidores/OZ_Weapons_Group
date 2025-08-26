class CfgPatches {
	class IMP_Optic_1P59 {
		units[] = {"IMP_Optic_1P59_Base"};
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

class cfgVehicles {
	class Inventory_Base;
	class ItemOptics;
	
	class IMP_Optic_1P59_Base : ItemOptics {
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "$STR_IMP_1p59hyp";
		descriptionShort = "$STR_IMP_16xzoom";
		model = "\IMPWMOD\Weapons\Optics\1P59\models\1P59.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 1300;
		itemSize[] = {3, 2};
		inventorySlot = "weaponOpticsAK";
		simulation = "itemoptics";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		
		memoryPointCamera = "eyeScope";
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Optics\1P59\data\1P59_ca.paa",
		};
		cameraDir = "cameraDir";
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Optics\1P59\data\1P59.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Optics\1P59\data\1P59.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Optics\1P59\data\1P59_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Optics\1P59\data\1P59_damage.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Optics\1P59\data\1P59_destruct.rvmat"}}};
				};
			};
		};
		
		class OpticsInfo {
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "\IMPWMOD\Weapons\Optics\1P59\models\OpticView_1P59.p3d";
			preloadOpticType = "OpticView_1P59";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur1"};
			opticsZoomMin = 0.3926/4;
			opticsZoomMax = 0.3926/16;
			opticsZoomInit = 0.3926/4;
			discretefov[] = {0.3926/4, 0.3926/8, 0.3926/12, 0.3926/16};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1300;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5, 0.5, 0.43, 0.1};
			PPLensProperties[] = {0.3, 0.15, 0, 0};
			PPBlurProperties = 0.3;
		};
		
		class AnimationSources {
			class hide {
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class OpticView_1P59: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\1P59\models\OpticView_1P59.p3d";
	};
	class IMP_Optic_1P59: IMP_Optic_1P59_Base
	{
		scope = 2;
	};
};
