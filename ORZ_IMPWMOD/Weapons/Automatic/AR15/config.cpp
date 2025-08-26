class CfgPatches
{
	class IMP_Weapons_AR15
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
	class IMP_AR15_Base: Rifle_Base
	{
		scope = 0;
		weight = 1746;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		barrelArmor=2.5;
		initSpeedMultiplier = 1;
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.65;
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
		recoilModifier[] = {1,1,1};
		swayModifier[]={0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel", "HandlesM4"};
		hiddenSelections[] = {"barrel", "reciver", "hand", "buffertube"};
		modes[] = {"FullAuto", "SemiAuto"};
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = {"M4_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet"}, {"M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.0705;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto {
			soundSetShot[] = {"M4_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet"}, {"M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.0705;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
	};
	class IMP_AR15: IMP_AR15_Base
	{
		scope = 2;
		displayName = "AR-15";
		descriptionShort = "$STR_IMP_AR15de";
		model = "IMPWMOD\Weapons\Automatic\AR15\models\IMP_AR15.p3d";
		attachments[] = 
		{
			"weaponMuzzleM4", 
			"weaponBayonet", 
			"weaponOptics", 
			"weaponButtstockM4", 
			"WeaponHandguardM4", 
			"weaponFlashlight", 
			"weaponWrap", 
			"grip1",
			"HandlesM4"
		};
		itemSize[] = {9, 3};
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"impwmod\weapons\automatic\ar15\data\barrel_co.paa", "impwmod\weapons\automatic\ar15\data\reciver_co.paa", "impwmod\weapons\automatic\ar15\data\reciver_co.paa", "impwmod\weapons\automatic\ar15\data\buffertube_co.paa"};
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
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinIMPinLimits[] = {0.2,1};
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
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.7,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.5,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"}}};
				};
			};
		};
	};
};