class CfgPatches
{
	class IMP_Weapons_HK416
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
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
	class IMP_HK416_Base : Rifle_Base 
	{
		scope = 0;
		displayName = "HK416";
		descriptionShort = "$STR_IMP_Hk416descr";
		itemSize[] = {9, 3};
		weight = 3800;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1, 0.5, 20, 170, 4, 10};
		WeaponLength=0.91;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		model = "IMPWMOD\Weapons\Automatic\HK416\models\HK416.p3d";
		chamberedRound = "";
		chamberableFrom[] = 
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
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
		ejectType = 1;
		recoilModifier[]={1.5,1.5,1};
		swayModifier[]={1.2,1.2,1};
		simpleHiddenSelections[] = {"irons_up","irons_down", "HandlesM4"};
		hiddenSelections[]={"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\HK416\data\HK416.rvmat"};
		attachments[] = 
		{
			"weaponMuzzleM4",
			"weaponOptics",
			"weaponButtstockM4",
			"weaponFlashlight",
			"weaponWrap", 
			"grip1",
			"weaponBipod",
			"HandlesM4"
		};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[] = {"HK416_Shot_SoundSet", "HK416_Tail_SoundSet", "HK416_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "HK416_silencer_SoundSet", "HK416_silencerTail_SoundSet", "HK416_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.060;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"HK416_Shot_SoundSet", "HK416_Tail_SoundSet", "HK416_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "HK416_silencer_SoundSet", "HK416_silencerTail_SoundSet", "HK416_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.060;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
		};
		
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=25;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class NoiseShoot
		{
			strength=82;
			type="shot";
		};
	};
	class IMP_HK416 : IMP_HK416_Base {
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Automatic\HK416\data\HK416_co.paa"};
		barrelArmor=3.75;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\HK416\data\HK416.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\HK416\data\HK416.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\HK416\data\HK416_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\HK416\data\HK416_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\HK416\data\HK416_destruct.rvmat"}}
					};
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
	class HK416_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK416_closeShot_SoundShader",
			"HK416_midShot_SoundShader",
			"HK416_distShot_SoundShader"
		};
	};
	class HK416_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK416_tailDistant_SoundShader",
			"HK416_tailTrees_SoundShader",
			"HK416_tailForest_SoundShader",
			"HK416_tailMeadows_SoundShader",
			"HK416_tailHouses_SoundShader"
		};
	};
	class HK416_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK416_tailInterior_SoundShader"
		};
	};
	class HK416_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK416_silencerCloseShot_SoundShader",
			"HK416_silencerMidShot_SoundShader",
			"HK416_silencerDistShot_SoundShader"
		};
	};
	class HK416_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK416_silencerTailTrees_SoundShader",
			"HK416_silencerTailForest_SoundShader",
			"HK416_silencerTailMeadows_SoundShader",
			"HK416_silencerTailHouses_SoundShader"
		};
	};
	class HK416_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK416_silencerTailInterior_SoundShader"
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
	class HK416_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
		volume=0.8;
	};
	class HK416_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
		volume=0.5;
	};
	class HK416_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
		volume=0.3;
	};
	class HK416_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
		volume=0.8;
	};
	class HK416_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
	};
	class HK416_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
	};
	class HK416_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
	};
	class HK416_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
	};
	class HK416_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot", 1}};
	};
	class HK416_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1}};
		volume=0.5;
	};
	class HK416_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1}};
		volume=0.3;
	};
	class HK416_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1}};
		volume=0.15;
	};
	class HK416_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1}};
	};
	class HK416_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1}};
	};
	class HK416_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1}};
	};
	class HK416_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1}};
	};
	class HK416_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK416\sounds\HK416_Shot_Supp", 1}};
	};
};