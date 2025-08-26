class CfgPatches
{
	class IMP_OMEN_base
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines"};
		magazines[] = {};
		ammo[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class IMP_OMEN_base: Rifle_Base
	{
		scope = 0;
		descriptionShort = "$STR_OMEND";
		model = "IMPWMOD\Weapons\Sniper\OMEN\models\OMEN.p3d";
		weight = 2700;
		WeaponLength = 1.3;
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
		simpleHiddenSelections[] = {"hide_barrel"};
		attachments[] = 
		{
			"weaponOpticsHunting",
			"weaponWrap", 
			"grip1",
			"weaponBipod",
			"Suppressor_308"
		};
		chamberableFrom[] = 
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[] = {"IMP_OMENMag_10Rnd"};
		magazineSwitchTime = 0.3;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {1,3,2};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]= {"MK18_Shot_SoundSet","MK18_Tail_SoundSet","MK18_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MK18_silencerHomeMade_SoundSet","MK18_silencerHomeMadeTail_SoundSet","MK18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.250;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = 
					{
						{1.01,{"IMPWMOD\Weapons\Sniper\OMEN\data\OMEN1.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN2.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN3.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\OMEN\data\OMEN1.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN2.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN3.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\OMEN\data\OMEN1_damage.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN2_damage.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN3_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\OMEN\data\OMEN1_damage.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN2_damage.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN3_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Sniper\OMEN\data\OMEN1_destruct.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN2_destruct.rvmat", "IMPWMOD\Weapons\Sniper\OMEN\data\OMEN3_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_OMEN: IMP_OMEN_base
	{
		scope = 2;
		displayName = "OMEN";
		hiddenSelections[] = {"camoflage","camoflage1","camoflage2"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\OMEN\data\OMEN1.rvmat","IMPWMOD\Weapons\Sniper\OMEN\data\OMEN2.rvmat","IMPWMOD\Weapons\Sniper\OMEN\data\OMEN3.rvmat"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\OMEN\data\OMEN1_co.paa","IMPWMOD\Weapons\Sniper\OMEN\data\OMEN2_co.paa","IMPWMOD\Weapons\Sniper\OMEN\data\OMEN3_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class IMP_OMENMag_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_OMENMag";
		descriptionShort = "$STR_OMENMagD";
		model = "IMPWMOD\Weapons\Sniper\OMEN\models\OMEN_Mag.p3d";
		weight = 230;
		itemSize[] = {2,2};
		count = 10;
		ammo = "Bullet_308Win";
		ammoItems[] = 
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		isMeleeWeapon = 0;
		tracersEvery = 0;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyOMEN_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Sniper\OMEN\models\OMEN_Mag.p3d";
	};
};