class CfgPatches
{
	class IMP_SCARL
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
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
	class Launcher_Base;
	class IMP_SCARL_base: Rifle_Base
	{
		scope = 0;
		weight = 3500;
		displayName = "SCAR-L";
		descriptionShort = "$STR_IMP_SCARLDescr";
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.93;
		barrelArmor = 2.5;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[] = 
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
		    "Mag_STANAG_60Rnd", 
			"IMP_Mag_M4_Drum60Rnd", 
			"IMP_Mag_M4_Cmag_100Rnd", 
			"IMP_Mag_M4_Drum_60Rnd", 
			"IMP_Mag_M4_Gen2_30Rnd",
			"IMP_Mag_HK_Polymer_30Rnd", 
			"IMP_Mag_M4_Stanag_30Rnd", 
			"IMP_Mag_M4_Polymer_10Rnd", 
			"IMP_Mag_M4_Polymer_20Rnd", 
			"IMP_Mag_M4_Polymer_30Rnd",
			"IMP_Mag_M4_Polymer_40Rnd", 
			"IMP_Mag_M4_Stanag_100Rnd"
		};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.2,1.2,1.2};
		hiddenSelections[]={"camoflage"};
		simpleHiddenSelections[] = {"hide_barrel","irons_up","irons_down", "HandlesM4"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SCARL_Shot_SoundSet", "SCARL_Tail_SoundSet", "SCARL_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "SCARL_silencer_SoundSet", "SCARL_silencerTail_SoundSet", "SCARL_silencerInteriorTail_SoundSet"}};
			reloadTime=0.1;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SCARL_Shot_SoundSet", "SCARL_Tail_SoundSet", "SCARL_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "SCARL_silencer_SoundSet", "SCARL_silencerTail_SoundSet", "SCARL_silencerInteriorTail_SoundSet"}};
			reloadTime=0.1;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 400;
		};
	};
	class IMP_SCARL: IMP_SCARL_base
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Automatic\SCARL\models\SCARL.p3d";
		attachments[] = {"weaponWrap","weaponOptics", "weaponMuzzleM4", "grip1", "HandlesM4"};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\SCARL\data\SCARL_co.paa"};
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
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
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
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
					healthLevels[] = {{1,{"IMPWMOD\Weapons\Automatic\SCARL\data\SCARL.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\SCARL\data\SCARL.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\SCARL\data\SCARL_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\SCARL\data\SCARL_damage.rvmat"}},{0,{"IMPWMOD\Weapons\Automatic\SCARL\data\SCARL_destruct.rvmat"}}};
				};
			};
		};
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
	class SCARL_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SCARL_closeShot_SoundShader",
			"SCARL_midShot_SoundShader",
			"SCARL_distShot_SoundShader"
		};
	};
	class SCARL_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SCARL_tailDistant_SoundShader",
			"SCARL_tailTrees_SoundShader",
			"SCARL_tailForest_SoundShader",
			"SCARL_tailMeadows_SoundShader",
			"SCARL_tailHouses_SoundShader"
		};
	};
	class SCARL_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SCARL_tailInterior_SoundShader"
		};
	};
	class SCARL_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SCARL_silencerCloseShot_SoundShader",
			"SCARL_silencerMidShot_SoundShader",
			"SCARL_silencerDistShot_SoundShader"
		};
	};
	class SCARL_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SCARL_silencerTailTrees_SoundShader",
			"SCARL_silencerTailForest_SoundShader",
			"SCARL_silencerTailMeadows_SoundShader",
			"SCARL_silencerTailHouses_SoundShader"
		};
	};
	class SCARL_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SCARL_silencerTailInterior_SoundShader"
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
	class SCARL_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
		volume=0.8;
	};
	class SCARL_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
		volume=0.5;
	};
	class SCARL_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
		volume=0.3;
	};
	class SCARL_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
		volume=0.3;
	};
	class SCARL_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
	};
	class SCARL_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
	};
	class SCARL_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
	};
	class SCARL_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
	};
	class SCARL_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot", 1}};
	};
	class SCARL_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1}};
		volume=0.5;
	};
	class SCARL_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1}};
		volume=0.3;
	};
	class SCARL_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1}};
		volume=0.15;
	};
	class SCARL_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1}};
	};
	class SCARL_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1}};
	};
	class SCARL_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1}};
	};
	class SCARL_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1}};
	};
	class SCARL_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARL\sounds\SCARL_Shot_Supp", 1}};
	};
};