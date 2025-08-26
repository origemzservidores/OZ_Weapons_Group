class CfgPatches
{
	class IMP_KSVK
	{
		units[] = {};
		weapons[] = {"IMP_KSVK"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines"};
		magazines[] = {"IMP_KSVK_Mag_5Rnd"};
		ammo[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class Rifle_Base;
	class IMP_KSVK_base: Rifle_Base
	{
		scope = 0;
		descriptionShort = "$STR_KSVKDD";
		model = "IMPWMOD\Weapons\Sniper\KSVK\models\KSVK.p3d";
		weight = 10000;
		WeaponLength = 1.8;
		itemSize[] = {10,3};
		dexterity = 1.8;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberedRound = "";
		chamberSize = 1;
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down"};
		attachments[] = {"weaponWrap","weaponOpticsHunting"};
		chamberableFrom[] = {"IMP_Ammo_127x108"};
		magazines[] = {"IMP_KSVK_Mag_5Rnd"};
		magazineSwitchTime = 0.25;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {1,3,2};
		reloadAction = "ReloadAug";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"IMP_KSVK_Shot_SoundSet","IMP_KSVK_Shot_SoundSet","IMP_KSVK_Shot_SoundSet"};
			reloadTime = 0.425;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
				maxOverheatingValue=40;
				shotsToStartOverheating=5;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {
						{1.01,{"IMPWMOD\Weapons\Sniper\KSVK\data\KSVK1.rvmat", "IMPWMOD\Weapons\Sniper\KSVK\data\KSVK2.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\KSVK\data\KSVK1.rvmat", "IMPWMOD\Weapons\Sniper\KSVK\data\KSVK2.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\KSVK\data\KSVK1_damage.rvmat", "IMPWMOD\Weapons\Sniper\KSVK\data\KSVK2_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\KSVK\data\KSVK1_damage.rvmat", "IMPWMOD\Weapons\Sniper\KSVK\data\KSVK2_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Sniper\KSVK\data\KSVK1_destruct.rvmat", "IMPWMOD\Weapons\Sniper\KSVK\data\KSVK2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_KSVK: IMP_KSVK_base
	{
		scope = 2;
		displayName = "$STR_KSVKD";
		hiddenSelections[] = {"camoflage","camoflage1"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\KSVK\data\KSVK1.rvmat","IMPWMOD\Weapons\Sniper\KSVK\data\KSVK2.rvmat"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\KSVK\data\KSVK1_co.paa","IMPWMOD\Weapons\Sniper\KSVK\data\KSVK2_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class IMP_KSVK_Mag_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_KSVKDDMag";
		descriptionShort = "$STR_KSVKDDMagD";
		model = "IMPWMOD\Weapons\Sniper\KSVK\models\KSVK_Mag.p3d";
		weight = 230;
		itemSize[] = {4,3};
		count = 5;
		ammo = "IMP_Bullet_127x108";
		ammoItems[] = {"IMP_Ammo_127x108"};
		isMeleeWeapon = 0;
		tracersEvery = 0;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyKSVK_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Sniper\KSVK\models\KSVK_Mag.p3d";
	};
};
