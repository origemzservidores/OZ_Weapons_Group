class CfgPatches
{
	class IMP_Optic_Scope6x
	{
		units[] = {"IMP_Optic_Scope6x"};
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
	
	class IMP_Optic_Scope6x_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "Scope 6x";
		descriptionShort = "$STR_IMP_6xzoom";
		model = "IMPWMOD\Weapons\Optics\Scope6x\models\Scope6x.p3d";
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 700;
		itemSize[] = {3,1};
		inventorySlot[] = {"sniperOptics","weaponOpticsHunting","weaponOptics"};
		simulation = "itemoptics";
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Optics\Scope6x\data\Scope6x_ca.paa"};
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
			modelOptics = "IMPWMOD\Weapons\Optics\Scope6x\models\Scope6x_Reticle.p3d";
			preloadOpticType = "Scope6x_Reticle";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {"0.3926/6"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
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
	class Scope6x_Reticle: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\Scope6x\models\Scope6x_Reticle.p3d";
	};
	class IMP_Optic_Scope6x: IMP_Optic_Scope6x_Base
	{
		scope = 2;
	};
};
