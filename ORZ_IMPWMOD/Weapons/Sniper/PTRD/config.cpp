class CfgPatches
{
	class IMP_PTRD
	{
		units[] = {};
		weapons[] = {"IMP_PTRD"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class IMP_PTRD_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Sniper\PTRD\models\PTRD.p3d";
		itemSize[] = {10,3};
		weight = 3700;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic"};
		magazines[] = {};
		DisplayMagazine = 0;
		WeaponLength = 1.18986;
		barrelArmor = 12.6;
		initSpeedMultiplier = 2;
		chamberedRound = "";
		chamberSize = 1;
		lootCategory = "Attachments";
		attachments[] = {"weaponWrap"};
		chamberableFrom[] = {"IMP_Ammo_127x108"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camoflage", "camoflage1"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\PTRD\data\PTRD1_co.paa", "IMPWMOD\Weapons\Sniper\PTRD\data\PTRD2_co.paa"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IMP_PTRD_SoundSet"};
			reloadTime = 1;
			dispersion = 0.0001;
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
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 40;
				shotsToStartOverheating = 5;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0.5,1};
				};
			};
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					healthLevels[] = {
						{1,{"IMPWMOD\Weapons\Sniper\PTRD\data\PTRD1.rvmat", "IMPWMOD\Weapons\Sniper\PTRD\data\PTRD2.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\PTRD\data\PTRD1.rvmat", "IMPWMOD\Weapons\Sniper\PTRD\data\PTRD2.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\PTRD\data\PTRD1_damage.rvmat", "IMPWMOD\Weapons\Sniper\PTRD\data\PTRD2_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\PTRD\data\PTRD1_damage.rvmat", "IMPWMOD\Weapons\Sniper\PTRD\data\PTRD2_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\PTRD\data\PTRD1_destruct.rvmat", "IMPWMOD\Weapons\Sniper\PTRD\data\PTRD2_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class IMP_PTRD: IMP_PTRD_Base
	{
		scope = 2;
		displayName = "$STR_PTRD";
		descriptionShort = "$STR_PTRDD";
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\PTRD\data\PTRD1_co.paa", "IMPWMOD\Weapons\Sniper\PTRD\data\PTRD2_co.paa"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class IMP_PTRD_SoundShaderClose
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\PTRD\sounds\PTRD",1}};
		volume = 1.4;
		range = 100;
	};
	class IMP_PTRD_SoundShaderMid
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\PTRD\sounds\PTRD",1}};
		volume = 1.1;
		range = 500;
	};
	class IMP_PTRD_SoundShaderLong
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\PTRD\sounds\PTRD",1}};
		volume = 0.5;
		range = 2000;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class IMP_PTRD_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"IMP_PTRD_SoundShaderClose","IMP_PTRD_SoundShaderMid","IMP_PTRD_SoundShaderLong"};
	};
};
