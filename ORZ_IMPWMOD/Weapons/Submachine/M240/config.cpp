class CfgPatches
{
	class IMP_Weapons_M240
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
	class IMP_M240_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_IMP_M240";
		descriptionShort = "$STR_IMP_308calammouse";
		model = "IMPWMOD\Weapons\Submachine\M240\models\IMP_M240.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponFlashlight"};	
		itemSize[] = {10,3};
		weight = 12290;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,50.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		initSpeedMultiplier = 1;
		WeaponLength = 1.24;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"IMP_Mag_M240_150Rnd"};
		ejectType = 1;
		swayModifier[]={1,1,0.9};
		recoilModifier[] = {1.2,1.25,1.25};
		hiddenSelections[]={"camoflage1", "camoflage2", "camoflage3"};
		simpleHiddenSelections[] = {"hide_barrel","ammobelt"};
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Submachine\M240\data\m240_1_co.paa",
			"IMPWMOD\Weapons\Submachine\M240\data\m240_2_co.paa",
			"IMPWMOD\Weapons\Submachine\M240\data\m240_int_co.paa"
		};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"PKPZ_Shot_SoundSet", "PKPZ_Tail_SoundSet", "PKPZ_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "PKPZ_silencer_SoundSet", "PKPZ_silencerTail_SoundSet", "PKPZ_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.088;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"PKPZ_Shot_SoundSet", "PKPZ_Tail_SoundSet", "PKPZ_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "PKPZ_silencer_SoundSet", "PKPZ_silencerTail_SoundSet", "PKPZ_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.144;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.00075;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Submachine\M240\data\m240_1.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_2.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_int.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Submachine\M240\data\m240_1.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_2.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_int.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Submachine\M240\data\m240_1_damage.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_2_damage.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_int_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Submachine\M240\data\m240_1_damage.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_2_damage.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_int_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Submachine\M240\data\m240_1_destruct.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_2_destruct.rvmat","IMPWMOD\Weapons\Submachine\M240\data\m240_int_destruct.rvmat"}}
					};
				};
			};
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
				maxOverheatingValue = 100;
				shotsToStartOverheating = 5;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
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
	};

	class IMP_M240: IMP_M240_Base
	{
		scope = 2;	
	};		
};

class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_M240_150Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_M240Mag";
		descriptionShort = "$STR_IMP_M240Mag1";
		model = "IMPWMOD\Weapons\Submachine\M240\models\IMP_M240_Mag.p3d";
		weight = 700;
		itemSize[] = {4,3};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count = 150;
		ammo = "Bullet_308Win";
		hiddenSelections[]={"camoflage"};
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Submachine\M240\data\m240_2_co.paa"
		};
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Submachine\M240\data\m240_2.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Submachine\M240\data\m240_2.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Submachine\M240\data\m240_2_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Submachine\M240\data\m240_2_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Submachine\M240\data\m240_2_destruct.rvmat"}}
					};
				};
			};
		};	
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};