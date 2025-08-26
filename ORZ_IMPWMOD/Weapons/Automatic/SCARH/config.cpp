class CfgPatches
{
	class IMP_SCARH
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
	class IMP_SCARH_base: Rifle_Base
	{
		scope = 0;
		RankLevel = 3;
		weight = 3500;
		displayName = "SCAR-H";
		descriptionShort = "$STR_SCARHDescr";
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
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"IMP_Mag_SCARH_30Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.2,1.2,1.2};
		hiddenSelections[]={"camoflage"};
		simpleHiddenSelections[] = {"hide_barrel","irons_up","irons_down", "HandlesM4"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SCARH_Shot_SoundSet", "SCARH_Shot_SoundSet", "SCARH_Shot_SoundSet"};
			soundSetShotExt[] = {{"SCARH_Supp_Shot_SoundSet", "SCARH_Supp_Shot_SoundSet", "SCARH_Supp_Shot_SoundSet"}};
			reloadTime=0.1;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SCARH_Shot_SoundSet", "SCARH_Shot_SoundSet", "SCARH_Shot_SoundSet"};
			soundSetShotExt[] = {{"SCARH_Supp_Shot_SoundSet", "SCARH_Supp_Shot_SoundSet", "SCARH_Supp_Shot_SoundSet"}};
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
	class IMP_SCARH: IMP_SCARH_base
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Automatic\SCARH\models\SCARH.p3d";
		attachments[] = 
		{
			"weaponWrap",
			"weaponOptics", 
			"weaponFlashlight", 
			"grip1",
			"HandlesM4",
			"Suppressor_308"
		};
		itemSize[] = {7,3};
		hiddenSelectionsTextures[] = 
		{
			"impwmod\weapons\automatic\scarh\data\scarh_co.paa"
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
					healthLevels[] = 
					{
						{1.0,{"impwmod\weapons\automatic\scarh\data\scarh.rvmat"}},
						{0.7,{"impwmod\weapons\automatic\scarh\data\scarh.rvmat"}},
						{0.5,{"impwmod\weapons\automatic\scarh\data\scarh_damage.rvmat"}},
						{0.3,{"impwmod\weapons\automatic\scarh\data\scarh_damage.rvmat"}},
						{0.0,{"impwmod\weapons\automatic\scarh\data\scarh_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgSoundShaders {
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	
	class SCARH_Shot_SoundShader : base_closeShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARH\sounds\SCARH_Shot", 1}};
		volume = 0.8;
		range = 250;
		rangeCurve = "closeShotCurve";
	};
	
	class SCARH_midshot_SoundShader : base_midShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARH\sounds\SCARH_Shot", 1}};
		volume = 0.5;
		range = 650;
		rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1500, 0}};
	};
	
	class SCARH_distShot_SoundShader : base_distShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARH\sounds\SCARH_Shot", 1}};
		volume = 0.3;
		range = 1000;
		rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {1500, 1}};
	};
	
	class SCARH_Suppressed_Shot_SoundShader : base_closeShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARH\sounds\SCARH_Shot_Supp", 1}};
		volume = 0.2;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	
	class SCARH_Suppressed_midshot_SoundShader : base_midShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARH\sounds\SCARH_Shot_Supp", 1}};
		volume = 0.1;
		range = 300;
		rangeCurve[] = {{0, 0.2}, {50, 1}, {100, 0}, {200, 0}};
	};
	
	class SCARH_Suppressed_distShot_SoundShader : base_distShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Automatic\SCARH\sounds\SCARH_Shot_Supp", 1}};
		volume = 0.05;
		range = 400;
		rangeCurve[] = {{0, 0.2}, {50, 1}, {100, 0}, {200, 0}};
	};
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class rifle_tail_Base_soundset;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class baseCharacter_SoundSet;
	
	class SCARH_Shot_SoundSet : Rifle_Shot_Base_SoundSet {
		soundShaders[] = {"SCARH_Shot_SoundShader", "SCARH_midShot_SoundShader", "SCARH_distShot_SoundShader"};
	};
	
	class SCARH_Supp_Shot_SoundSet : Rifle_silencerHomemade_Base_SoundSet {
		soundShaders[] = {"SCARH_Suppressed_Shot_SoundShader", "SCARH_Suppressed_midshot_SoundShader", "SCARH_Suppressed_distShot_SoundShader"};
	};
};


class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_SCARH_30Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_SCARHMag";
		descriptionShort = "$STR_SCARHMagD";
		model = "IMPWMOD\Weapons\Automatic\SCARH\models\SCARHMag.p3d";
		weight = 500;
		itemSize[] = {1, 3};
		count = 30;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {
						{1.0, {"IMPWMOD\Weapons\Automatic\SCARH\data\SCARH1.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Automatic\SCARH\data\SCARH1.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Automatic\SCARH\data\SCARH1_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Automatic\SCARH\data\SCARH1_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Automatic\SCARH\data\SCARH1_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySCARHMag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="IMPWMOD\Weapons\Automatic\SCARH\models\SCARHMag.p3d";
	};
};