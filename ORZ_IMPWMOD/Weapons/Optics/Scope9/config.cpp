class CfgPatches
{
	class IMP_Optic_Scope9x
	{
		units[] = {"IMP_Optic_Scope9x"};
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
	
	class IMP_Optic_Scope9x_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "Scope9x";
		descriptionShort = "$STR_IMP_9xzoom";
		model = "IMPWMOD\Weapons\Optics\Scope9\models\Scope9x.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {3,1};
		inventorySlot[] = {"sniperOptics","weaponOpticsHunting","weaponOptics"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Optics\Scope9\data\Optic_black.paa"};
		simulation = "itemoptics";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
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
			modelOptics = "IMPWMOD\Weapons\Optics\Scope9\models\Scope9x_Optic_reticle.p3d";
			preloadOpticType = "Scope9x_Reticle";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin="0.3926/3";
			opticsZoomMax="0.3926/9";
			opticsZoomInit="0.3926/5";
			discretefov[]=
			{
				"0.3926/3",
				"0.3926/5",
				"0.3926/9"
			};
			discreteInitIndex = 0;
			distanceZoomMin = 150;
			distanceZoomMax = 600;
			discreteDistance[] = {150,200,300,400,500,600};
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
	class Scope9x_Reticle: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\Scope9\models\Scope9x_Optic_reticle.p3d";
	};
	class IMP_Optic_Scope9x: IMP_Optic_Scope9x_Base
	{
		scope = 2;
	};
};
