class CfgPatches
{
	class IMP_Weapons_G36
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
	class IMP_G36_Base : Rifle_Base 
	{
		scope = 0;
		displayName = "G36";
		descriptionShort = "$STR_IMP_G36Descr";
		itemSize[] = {9, 3};
		barrelArmor=3.75;
		weight = 3800;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		WeaponLength=0.75;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		model = "IMPWMOD\Weapons\Automatic\G36\models\IMP_G36.p3d";
		chamberedRound = "";
		chamberableFrom[]=
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
			"IMP_Mag_M4_Cmag_100Rnd"
		};
		ejectType = 1;
		recoilModifier[] = {0.8,0.8,1};
		swayModifier[]={0.8,0.8,1};
		hiddenSelections[]=
		{
			"BarrelBig", 
			"Grip",
			"HandguardBig",
			"Internals", 
			"MagP", 
			"Mount",
			"MountBig",
			"Receiver"
		};
		hiddenSelectionsMaterials[] = 
		{
			"IMPWMOD\Weapons\Automatic\G36\data\G36_BarrelBig.rvmat", 
			"IMPWMOD\Weapons\Automatic\G36\data\G36_Grip.rvmat", 
			"IMPWMOD\Weapons\Automatic\G36\data\G36_HndgrdBig.rvmat", 
			"IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", 
			"IMPWMOD\Weapons\Automatic\G36\data\G36_MagP.rvmat", 
			"IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", 
			"IMPWMOD\Weapons\Automatic\G36\data\G36_MountBig.rvmat", 
			"IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver.rvmat"
		};
		attachments[] = 
		{
			"weaponWrap", 
			"weaponOptics", 
			"weaponFlashlight", 
			"weaponMuzzleM4", 
			"IMP_G36_Buttstock", 
			"grip1"
		};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = 
		{
			"FullAuto",
			"SemiAuto",
			"Burst"
		};
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[] = {"G36_Shot_SoundSet", "G36_Tail_SoundSet", "G36_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "G36_silencer_SoundSet", "G36_silencerTail_SoundSet", "G36_silencerInteriorTail_SoundSet"}};
			reloadTime=0.075;
			dispersion=0.002;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			magazineSlot = "magazine";
		};
		
		class Burst: Mode_Burst 
		{
			soundSetShot[] = {"G36_Shot_SoundSet", "G36_Tail_SoundSet", "G36_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "G36_silencer_SoundSet", "G36_silencerTail_SoundSet", "G36_silencerInteriorTail_SoundSet"}};
			reloadTime=0.075;
			dispersion=0.002;
			burst=3;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto 
		{
			soundSetShot[] = {"G36_Shot_SoundSet", "G36_Tail_SoundSet", "G36_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "G36_silencer_SoundSet", "G36_silencerTail_SoundSet", "G36_silencerInteriorTail_SoundSet"}};
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			reloadTime=0.075;
			dispersion=0.002;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength=55;
			type="shot";
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				
				class MuzzleFlashStar {
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0, 45, 0};
					positionOffset[] = {0.01, 0, 0};
				};
				
				class ChamberSmokeBurst {
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			
			class OnOverheating {
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				
				class SmokingBarrel1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0, 0.4};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4, 0.9};
					onlyWithinRainLimits[] = {0, 0.2};
				};

				
				class SmokingBarrelHot3 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9, 1};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHotSteam {
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2, 0, 0};
					onlyWithinOverheatLimits[] = {0, 1};
					onlyWithinRainLimits[] = {0.2, 1};
				};
				
				class OpenChamberSmoke {
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
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
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\G36\data\G36_BarrelBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_HndgrdBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\G36\data\G36_BarrelBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_HndgrdBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\G36\data\G36_BarrelBig_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_HndgrdBig_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\G36\data\G36_BarrelBig_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_HndgrdBig_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\G36\data\G36_BarrelBig_destruct.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip_destruct.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_HndgrdBig_destruct.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP_destruct.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountBig.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_G36 : IMP_G36_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Automatic\G36\data\BarrelBig_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Grip_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\HndgrdBig_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Internals_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\MagP_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Mount_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\MountBig_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Receiver_co.paa", };
	};

	class IMP_G36c_Base : Rifle_Base 
	{
		scope = 0;
		displayName = "G36c";
		descriptionShort = "$STR_IMP_G36Descr";
		itemSize[] = {8, 3};
		barrelArmor=3.75;
		weight = 2800;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=0.52;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		model = "IMPWMOD\Weapons\Automatic\G36\models\IMP_G36c.p3d";
		chamberedRound = "";
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer"};
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
			"IMP_Mag_M4_Cmag_100Rnd"
		};
		ejectType = 1;
		recoilModifier[]={0.5,0.5,1};
		swayModifier[]={0.5,0.5,1};
		hiddenSelections[]=
		{
			"Barrel", 
			"Grip", 
			"Handguard",
			"Internals",
			"MagP",
			"Mount",
			"MountBottomSmall",
			"Receiver"
		};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\G36\data\G36_Barrel.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Hndgrd.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountSmall.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver.rvmat"};
		attachments[] = 
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4",
			"IMP_G36_Buttstock"
		};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = {"FullAuto", "SemiAuto", "Burst"};
		
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[] = {"G36_Shot_SoundSet", "G36_Tail_SoundSet", "G36_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "G36_silencer_SoundSet", "G36_silencerTail_SoundSet", "G36_silencerInteriorTail_SoundSet"}};
			reloadTime=0.067;
			dispersion=0.0015;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			magazineSlot = "magazine";
		};
		
		class Burst: Mode_Burst 
		{
			soundSetShot[] = {"G36_Shot_SoundSet", "G36_Tail_SoundSet", "G36_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "G36_silencer_SoundSet", "G36_silencerTail_SoundSet", "G36_silencerInteriorTail_SoundSet"}};
			reloadTime=0.067;
			dispersion=0.0015;
			burst=3;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto 
		{
			soundSetShot[] = {"G36_Shot_SoundSet", "G36_Tail_SoundSet", "G36_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "G36_silencer_SoundSet", "G36_silencerTail_SoundSet", "G36_silencerInteriorTail_SoundSet"}};
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			reloadTime=0.067;
			dispersion=0.0015;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength=55;
			type="shot";
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				
				class MuzzleFlashStar {
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0, 45, 0};
					positionOffset[] = {0.01, 0, 0};
				};
				
				class ChamberSmokeBurst {
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			
			class OnOverheating {
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				
				class SmokingBarrel1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0, 0.4};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4, 0.9};
					onlyWithinRainLimits[] = {0, 0.2};
				};

				
				class SmokingBarrelHot3 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9, 1};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHotSteam {
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2, 0, 0};
					onlyWithinOverheatLimits[] = {0, 1};
					onlyWithinRainLimits[] = {0.2, 1};
				};
				
				class OpenChamberSmoke {
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
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
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\G36\data\G36_Barrel.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Hndgrd.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountSmall.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\G36\data\G36_Barrel.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Hndgrd.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountSmall.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\G36\data\G36_Barrel_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Hndgrd_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountSmall.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\G36\data\G36_Barrel_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Hndgrd_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP_damage.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountSmall.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\G36\data\G36_Barrel_destruct.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Grip_destruct.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Hndgrd_destruct.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Internals.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MagP_destruct.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Mount.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_MountSmall.rvmat", "IMPWMOD\Weapons\Automatic\G36\data\G36_Receiver_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_G36c : IMP_G36c_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Automatic\G36\data\Barrel_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Grip_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Hndgrd_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Internals_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\MagP_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Mount_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\MountSmall_co.paa", "IMPWMOD\Weapons\Automatic\G36\data\Receiver_co.paa", };
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
	class G36_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"G36_closeShot_SoundShader",
			"G36_midShot_SoundShader",
			"G36_distShot_SoundShader"
		};
	};
	class G36_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"G36_tailDistant_SoundShader",
			"G36_tailTrees_SoundShader",
			"G36_tailForest_SoundShader",
			"G36_tailMeadows_SoundShader",
			"G36_tailHouses_SoundShader"
		};
	};
	class G36_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"G36_tailInterior_SoundShader"
		};
	};
	class G36_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"G36_silencerCloseShot_SoundShader",
			"G36_silencerMidShot_SoundShader",
			"G36_silencerDistShot_SoundShader"
		};
	};
	class G36_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"G36_silencerTailTrees_SoundShader",
			"G36_silencerTailForest_SoundShader",
			"G36_silencerTailMeadows_SoundShader",
			"G36_silencerTailHouses_SoundShader"
		};
	};
	class G36_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"G36_silencerTailInterior_SoundShader"
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
	class G36_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
		volume=0.8;
	};
	class G36_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
		volume=0.5;
	};
	class G36_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
		volume=0.3;
	};
	class G36_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
		volume=0.3;
	};
	class G36_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
	};
	class G36_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
	};
	class G36_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
	};
	class G36_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
	};
	class G36_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot", 1}};
	};
	class G36_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1}};
		volume=0.5;
	};
	class G36_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1}};
		volume=0.3;
	};
	class G36_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1}};
		volume=0.15;
	};
	class G36_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1}};
	};
	class G36_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1}};
	};
	class G36_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1}};
	};
	class G36_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1}};
	};
	class G36_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\G36\sounds\G36_Shot_Supp", 1}};
	};
};