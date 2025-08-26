class CfgPatches
{
	class IMP_AN94
	{
		units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Scripts"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class IMP_AN94_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_IMP_An94abakan";
		descriptionShort = "$STR_IMP_An94abakan1";
		weight = 3500;
		model = "IMPWMOD\Weapons\Automatic\AN94\models\AN94.p3d";
		absorbency = 0;
		repairableWithKits[] = {1};
		initSpeedMultiplier = 1;
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		WeaponLength = 0.72;
		barrelArmor=2.5;
		attachments[] = {"weaponButtstockAK","weaponWrap","weaponOpticsAK","weaponMuzzleAK", "Rail", "weaponOptics"};
		itemSize[] = {9, 3};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_545x39","Ammo_545x39Tracer"};
		magazines[] = {"Mag_AK74_30Rnd","Mag_AK74_30Rnd_Black","Mag_AK74_30Rnd_Green","Mag_AK74_45Rnd"};
		ejectType = 1;
		recoilModifier[] = {0.4,0.5,0.4};
		swayModifier[] = {2,2,1.1};
		hiddenSelections[]={"camoflage"};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = {"FullAuto","Burst","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AN94_Shot_SoundSet", "AN94_Tail_SoundSet", "AN94_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AN94_silencer_SoundSet", "AN94_silencerTail_SoundSet", "AN94_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0001;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"AN94_Shot_SoundSet", "AN94_Tail_SoundSet", "AN94_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AN94_silencer_SoundSet", "AN94_silencerTail_SoundSet", "AN94_silencerInteriorTail_SoundSet"}};
			burst = 2;
			reloadTime = 0.095;
			dispersion = 0.0001;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AN94_Shot_SoundSet", "AN94_Tail_SoundSet", "AN94_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AN94_silencer_SoundSet", "AN94_silencerTail_SoundSet", "AN94_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0001;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 120;
				shotsToStartOverheating = 2;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {-0.02,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.1,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.3,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Automatic\AN94\data\AN94.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\AN94\data\AN94.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\AN94\data\AN94_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\AN94\data\AN94_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Automatic\AN94\data\AN94_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_AN94: IMP_AN94_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AN94\data\AN94_co.paa"};
	};
};
class CfgSoundSets 
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class AN94_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AN94_closeShot_SoundShader",
			"AN94_midShot_SoundShader",
			"AN94_distShot_SoundShader"
		};
	};
	class AN94_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AN94_tailDistant_SoundShader",
			"AN94_tailTrees_SoundShader",
			"AN94_tailForest_SoundShader",
			"AN94_tailMeadows_SoundShader",
			"AN94_tailHouses_SoundShader"
		};
	};
	class AN94_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AN94_tailInterior_SoundShader"
		};
	};
	class AN94_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AN94_silencerCloseShot_SoundShader",
			"AN94_silencerMidShot_SoundShader",
			"AN94_silencerDistShot_SoundShader"
		};
	};
	class AN94_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AN94_silencerTailTrees_SoundShader",
			"AN94_silencerTailForest_SoundShader",
			"AN94_silencerTailMeadows_SoundShader",
			"AN94_silencerTailHouses_SoundShader"
		};
	};
	class AN94_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AN94_silencerTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders 
{
	class tailInteriorRifle_SoundShader;
	class tailTreesRifle_SoundShader;
	class tailMeadowsRifle_SoundShader;
	class tailHousesRifle_SoundShader;
	class tailForestRifle_SoundShader;
	class tailDistantRifle_SoundShader;
	class base_Closure_SoundShader;
	class distShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class closeShotRifle_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailForest_SoundShader;
	class base_ProfessionalSilenced_tailHouses_SoundShader;
	class base_ProfessionalSilenced_tailMeadows_SoundShader;
	class base_ProfessionalSilenced_tailTrees_SoundShader;
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class AN94_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
		volume=0.8;
	};
	class AN94_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
		volume=0.5;
	};
	class AN94_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
		volume=0.3;
	};
	class AN94_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
		volume=0.8;
	};
	class AN94_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
	};
	class AN94_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
	};
	class AN94_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
	};
	class AN94_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
	};
	class AN94_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot", 1}};
	};
	class AN94_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1}};
		volume=0.5;
	};
	class AN94_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1}};
		volume=0.3;
	};
	class AN94_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1}};
		volume=0.15;
	};
	class AN94_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1}};
	};
	class AN94_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1}};
	};
	class AN94_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1}};
	};
	class AN94_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1}};
	};
	class AN94_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AN94\sounds\AN94_Shot_Supp", 1}};
	};
};