class CfgPatches {
	class IMP_Optic_1P29 {
		units[] = {"IMP_Optic_1P29_Base"};
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
	
	class IMP_Optic_1P29_Base : ItemOptics {
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "$STR_IMP_1P29";
		descriptionShort = "$STR_IMP_8xzoom";
		model = "\IMPWMOD\Weapons\Optics\1P29\models\1P29.p3d";
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
			"IMPWMOD\Weapons\Optics\1P29\data\1P29_co.paa",
		};
		cameraDir = "cameraDir";
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Optics\1P29\data\1P29.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Optics\1P29\data\1P29.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Optics\1P29\data\1P29_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Optics\1P29\data\1P29_damage.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Optics\1P29\data\1P29_destruct.rvmat"}}};
				};
			};
		};
		
		class OpticsInfo {
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "\IMPWMOD\Weapons\Optics\1P29\models\opticview_1P29.p3d";
			preloadOpticType = "OpticView_1P29";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur1"};
			opticsZoomMin = 0.3926/4;
			opticsZoomMax = 0.3926/8;
			opticsZoomInit = 0.3926/4;
			discretefov[] = {0.3926/4, 0.3926/8};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1300;
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
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
	class OpticView_1P29: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\1P29\models\opticview_1P29.p3d";
	};
	class IMP_Optic_1P29: IMP_Optic_1P29_Base
	{
		scope = 2;
	};
};
