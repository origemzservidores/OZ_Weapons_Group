class CfgPatches
{
	class IMP_Weapons_SIG
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
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
	class IMP_SIG_Base: Rifle_Base
	{
		scope=0;
		weight=3000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
		};
		WeaponLength=1;
		barrelArmor=4.444;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[]=
		{
			"IMP_Mag_SIG_30Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel", "HandlesM4"
		};
		hiddenSelections[]=
		{
			"camoflage",
			"camoflage1",
			"camoflage2",
			"camoflage3"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet"}, {"M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.092;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet", "M4_Tail_SoundSet", "M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet", "M4_silencerTail_SoundSet", "M4_silencerInteriorTail_SoundSet"}, {"M4_silencerHomeMade_SoundSet", "M4_silencerHomeMadeTail_SoundSet", "M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.092;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=40;
			type="shot";
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
	};
	class IMP_SIG: IMP_SIG_Base
	{
		scope=2;
		displayName="SIG 550";
		descriptionShort="$STR_SIGD";
		model="IMPWMOD\Weapons\Automatic\SIG\models\SIG.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"HandlesM4",
			"weaponMuzzleM4"
		};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = 
		{
			"impwmod\weapons\automatic\sig\data\sighndgrd_co.paa",
			"impwmod\weapons\automatic\sig\data\sigupper_co.paa",
			"impwmod\weapons\automatic\sig\data\sigstock_co.paa",
			"impwmod\weapons\automatic\sig\data\siglower_co.paa"
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
					hitpoints=1000;
					healthLevels[] = 
					{
						{1.01,{"impwmod\weapons\automatic\sig\data\sighndgrd.rvmat", "impwmod\weapons\automatic\sig\data\sigupper.rvmat", "impwmod\weapons\automatic\sig\data\sigstock.rvmat", "impwmod\weapons\automatic\sig\data\siglower.rvmat"}},
						{0.7,{"impwmod\weapons\automatic\sig\data\sighndgrd.rvmat", "impwmod\weapons\automatic\sig\data\sigupper.rvmat", "impwmod\weapons\automatic\sig\data\sigstock.rvmat", "impwmod\weapons\automatic\sig\data\siglower.rvmat"}},
						{0.5,{"impwmod\weapons\automatic\sig\data\sighndgrd_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_damage.rvmat", "impwmod\weapons\automatic\sig\data\siglower_damage.rvmat"}},
						{0.3,{"impwmod\weapons\automatic\sig\data\sighndgrd_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_damage.rvmat", "impwmod\weapons\automatic\sig\data\siglower_damage.rvmat"}},
						{0.01,{"impwmod\weapons\automatic\sig\data\sighndgrd_destruct.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_destruct.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_destruct.rvmat", "impwmod\weapons\automatic\sig\data\siglower_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_SIG_Tactical: IMP_SIG_Base
	{
		scope=2;
		displayName="SIG 550 Tactical";
		descriptionShort="$STR_SIGD";
		model="IMPWMOD\Weapons\Automatic\SIG\models\SIGTactical.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"HandlesM4",
			"weaponMuzzleM4",
			"grip1",
			"weaponBipod"
		};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = 
		{
			"impwmod\weapons\automatic\sig\data\sighndgrdT_co.paa",
			"impwmod\weapons\automatic\sig\data\sigupper_co.paa",
			"impwmod\weapons\automatic\sig\data\sigstock_co.paa",
			"impwmod\weapons\automatic\sig\data\siglower_co.paa"
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
					hitpoints=1000;
					healthLevels[] = 
					{
						{1.01,{"impwmod\weapons\automatic\sig\data\sighndgrdT.rvmat", "impwmod\weapons\automatic\sig\data\sigupper.rvmat", "impwmod\weapons\automatic\sig\data\sigstock.rvmat", "impwmod\weapons\automatic\sig\data\siglower.rvmat"}},
						{0.7,{"impwmod\weapons\automatic\sig\data\sighndgrdT.rvmat", "impwmod\weapons\automatic\sig\data\sigupper.rvmat", "impwmod\weapons\automatic\sig\data\sigstock.rvmat", "impwmod\weapons\automatic\sig\data\siglower.rvmat"}},
						{0.5,{"impwmod\weapons\automatic\sig\data\sighndgrdT_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_damage.rvmat", "impwmod\weapons\automatic\sig\data\siglower_damage.rvmat"}},
						{0.3,{"impwmod\weapons\automatic\sig\data\sighndgrdT_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_damage.rvmat", "impwmod\weapons\automatic\sig\data\siglower_damage.rvmat"}},
						{0.01,{"impwmod\weapons\automatic\sig\data\sighndgrdT_destruct.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_destruct.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_destruct.rvmat", "impwmod\weapons\automatic\sig\data\siglower_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_SIG_Short: IMP_SIG_Base
	{
		scope=2;
		displayName="SIG 550 Short";
		descriptionShort="$STR_SIGD";
		model="IMPWMOD\Weapons\Automatic\SIG\models\SIGShort.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"HandlesM4",
			"weaponMuzzleM4"
		};
		itemSize[] = {7, 3};
		hiddenSelectionsTextures[] = 
		{
			"impwmod\weapons\automatic\sig\data\sighndgrd_co.paa",
			"impwmod\weapons\automatic\sig\data\sigupper_co.paa",
			"impwmod\weapons\automatic\sig\data\sigstock_co.paa",
			"impwmod\weapons\automatic\sig\data\siglower_co.paa"
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
					hitpoints=1000;
					healthLevels[] = 
					{
						{1.01,{"impwmod\weapons\automatic\sig\data\sighndgrd.rvmat", "impwmod\weapons\automatic\sig\data\sigupper.rvmat", "impwmod\weapons\automatic\sig\data\sigstock.rvmat", "impwmod\weapons\automatic\sig\data\siglower.rvmat"}},
						{0.7,{"impwmod\weapons\automatic\sig\data\sighndgrd.rvmat", "impwmod\weapons\automatic\sig\data\sigupper.rvmat", "impwmod\weapons\automatic\sig\data\sigstock.rvmat", "impwmod\weapons\automatic\sig\data\siglower.rvmat"}},
						{0.5,{"impwmod\weapons\automatic\sig\data\sighndgrd_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_damage.rvmat", "impwmod\weapons\automatic\sig\data\siglower_damage.rvmat"}},
						{0.3,{"impwmod\weapons\automatic\sig\data\sighndgrd_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_damage.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_damage.rvmat", "impwmod\weapons\automatic\sig\data\siglower_damage.rvmat"}},
						{0.01,{"impwmod\weapons\automatic\sig\data\sighndgrd_destruct.rvmat", "impwmod\weapons\automatic\sig\data\sigupper_destruct.rvmat", "impwmod\weapons\automatic\sig\data\sigstock_destruct.rvmat", "impwmod\weapons\automatic\sig\data\siglower_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_SIG_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName="Магазин SIG";
		descriptionShort="Вместимость 30 патронов калибра 5.56x45";
		model = "IMPWMOD\Weapons\Automatic\SIG\models\IMP_SIG_Mag.p3d";
		weight = 400;
		itemSize[] = {1,3};
		count = 30;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[] = {"impwmod\weapons\automatic\sig\data\sigmag_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.01,{"impwmod\weapons\automatic\sig\data\sigmag.rvmat"}},
						{0.7,{"impwmod\weapons\automatic\sig\data\sigmag.rvmat"}},
						{0.5,{"impwmod\weapons\automatic\sig\data\sigmag_damage.rvmat"}},
						{0.3,{"impwmod\weapons\automatic\sig\data\sigmag_damage.rvmat"}},
						{0.01,{"impwmod\weapons\automatic\sig\data\sigmag_destruct.rvmat"}}
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

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyIMP_SIG_Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\SIG\models\IMP_SIG_Mag.p3d";
	};
};