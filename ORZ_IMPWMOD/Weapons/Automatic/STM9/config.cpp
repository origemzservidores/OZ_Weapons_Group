class CfgPatches
{
	class IMP_Weapons_STM9
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
	class IMP_STM9_Base: Rifle_Base
	{
		scope = 0;
		itemSize[] = {8, 3};
		weight = 1746;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		barrelArmor=2.5;
		initSpeedMultiplier = 1;
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.647;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19"};
		magazines[] = {
			"Mag_Glock_15Rnd",
			"IMP_Mag_Glock_21Rnd",
			"IMP_Mag_Glock_30Rnd",
			"IMP_Drum_Glock_50Rnd"
		};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[] = {"hide_barrel", "HandlesM4"};
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "camo7"};
		modes[] = {"FullAuto", "SemiAuto"};
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[] = {"M4_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet"}, {"M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};
		class FullAuto : Mode_FullAuto 
		{
			soundSetShot[] = {"M4_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet"}, {"M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.075;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
		class NoiseShoot
		{
			strength=35;
			type="shot";
		};
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 500;
					healthLevels[] = 
					{
						{1.0, {"impwmod\weapons\automatic\stm9\data\Barrel.rvmat", "impwmod\weapons\automatic\stm9\data\Bolt.rvmat", "impwmod\weapons\automatic\stm9\data\Charging.rvmat", "impwmod\weapons\automatic\stm9\data\Internals.rvmat", "impwmod\weapons\automatic\stm9\data\PistolGrip.rvmat", "impwmod\weapons\automatic\stm9\data\Receiver.rvmat", "impwmod\weapons\automatic\stm9\data\STM9.rvmat"}}, 
						{0.7, {"impwmod\weapons\automatic\stm9\data\Barrel.rvmat", "impwmod\weapons\automatic\stm9\data\Bolt.rvmat", "impwmod\weapons\automatic\stm9\data\Charging.rvmat", "impwmod\weapons\automatic\stm9\data\Internals.rvmat", "impwmod\weapons\automatic\stm9\data\PistolGrip.rvmat", "impwmod\weapons\automatic\stm9\data\Receiver.rvmat", "impwmod\weapons\automatic\stm9\data\STM9.rvmat"}}, 
						{0.5, {"impwmod\weapons\automatic\stm9\data\Barrel_damage.rvmat", "impwmod\weapons\automatic\stm9\data\Bolt_damage.rvmat", "impwmod\weapons\automatic\stm9\data\Charging_damage.rvmat", "impwmod\weapons\automatic\stm9\data\Internals.rvmat", "impwmod\weapons\automatic\stm9\data\PistolGrip_damage.rvmat", "impwmod\weapons\automatic\stm9\data\Receiver_damage.rvmat", "impwmod\weapons\automatic\stm9\data\STM9_damage.rvmat"}}, 
						{0.3, {"impwmod\weapons\automatic\stm9\data\Barrel_damage.rvmat", "impwmod\weapons\automatic\stm9\data\Bolt_damage.rvmat", "impwmod\weapons\automatic\stm9\data\Charging_damage.rvmat", "impwmod\weapons\automatic\stm9\data\Internals.rvmat", "impwmod\weapons\automatic\stm9\data\PistolGrip_damage.rvmat", "impwmod\weapons\automatic\stm9\data\Receiver_damage.rvmat", "impwmod\weapons\automatic\stm9\data\STM9_damage.rvmat"}}, 
						{0.0, {"impwmod\weapons\automatic\stm9\data\Barrel_destruct.rvmat", "impwmod\weapons\automatic\stm9\data\Bolt_destruct.rvmat", "impwmod\weapons\automatic\stm9\data\Charging_destruct.rvmat", "impwmod\weapons\automatic\stm9\data\Internals.rvmat", "impwmod\weapons\automatic\stm9\data\PistolGrip_destruct.rvmat", "impwmod\weapons\automatic\stm9\data\Receiver_destruct.rvmat", "impwmod\weapons\automatic\stm9\data\STM9_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_STM9: IMP_STM9_Base
	{
		scope = 2;
		displayName = "STM-9";
		descriptionShort = "$STR_IMP_STM9";
		model = "IMPWMOD\Weapons\Automatic\STM9\models\STM9.p3d";
		attachments[] = 
		{
			"pistolMuzzle", 
			"weaponOptics", 
			"weaponButtstockM4",  
			"weaponWrap", 
			"grip1",  
			"HandlesM4"
		};
		hiddenSelectionsTextures[] = {"impwmod\weapons\automatic\stm9\data\barrel_co.paa", "impwmod\weapons\automatic\stm9\data\bolt_co.paa", "impwmod\weapons\automatic\stm9\data\charging_co.paa", "impwmod\weapons\automatic\stm9\data\internals_co.paa", "impwmod\weapons\automatic\stm9\data\pistolgrip_co.paa", "impwmod\weapons\automatic\stm9\data\receiver_co.paa", "impwmod\weapons\automatic\stm9\data\stm9_co.paa"};
	};
};