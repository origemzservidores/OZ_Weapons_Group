class CfgPatches
{
	class IMP_Weapons_HKMG4
	{
		units[]=
		{
			"IMP_HKMG4"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
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
	class IMP_HKMG4_Base: Rifle_Base
	{
		scope=0;
		weight=8000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		WeaponLength=0.77;
		barrelArmor=2.2;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"IMP_Drum_HKMG4_80Rnd"
		};
		magazineSwitchTime=0.44999999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,1.3};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FnFal_Shot_SoundSet", "FnFal_Tail_SoundSet", "FnFal_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "FnFal_silencer_SoundSet", "FnFal_silencerTail_SoundSet", "FnFal_silencerInteriorTail_SoundSet"}};
			reloadTime=0.086;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FnFal_Shot_SoundSet", "FnFal_Tail_SoundSet", "FnFal_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "FnFal_silencer_SoundSet", "FnFal_silencerTail_SoundSet", "FnFal_silencerInteriorTail_SoundSet"}};
			reloadTime=0.086;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={200,300,400,500,600};
			discreteDistanceInitIndex=0;
			distanceZoomMin=200;
			distanceZoomMax=600;
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
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed=1;
					overrideDirectionVector[]={0,45,0};
					positionOffset[]={0.0099999998,0,0};
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
					onlyWithinOverheatLimits[]={0,0.40000001};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.40000001,0.89999998};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.89999998,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.2,0,0};
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
	};
	class IMP_HKMG4: IMP_HKMG4_Base
	{
		scope=2;
		displayName="$STR_HKMG4";
		descriptionShort="$STR_HKMG4D";
		model="\IMPWMOD\Weapons\Submachine\HKMG4\models\HKMG4.p3d";
		attachments[]=
		{
			"Suppressor_308",
			"weaponFlashlight",
			"weaponWrap", 
			"weaponOpticsAug"
		};
		itemSize[] = {10, 3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Drum_HKMG4_80Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_HKMG4Mag";
		descriptionShort = "$STR_HKMG4MagD";
		model = "IMPWMOD\Weapons\Submachine\HKMG4\models\IMP_HKMG4_Mag.p3d";
		weight = 300;
		itemSize[] = {3,3};
		count = 80;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4_Mag.rvmat"}},{0.7,{"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4_Mag.rvmat"}},{0.5,{"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4_Mag_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4_Mag_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Submachine\HKMG4\data\HKMG4_Mag_destruct.rvmat"}}};
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

class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics: Inventory_Base
	{
	};
	class HKMG4Optic: ItemOptics
	{
		scope=2;
		model="IMPWMOD\Weapons\Submachine\HKMG4\models\optic_hkmg4.p3d";
		weight=1;
		inventorySlot[]=
		{
			"weaponOpticsAug"
		};
		reversed=0;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=0;
			opticsPPEffects[]={};
			opticsZoomMin = 0.3926/3;
			opticsZoomMax = 0.3926/3;
			opticsZoomInit = 0.3926/3;
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[]={50,100,150,200,300,400};
			discreteDistanceInitIndex=1;
			PPMaskProperties[]={0.5,0.5,0.185,0.0099999998};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera="eyeIronsights";
			cameraDir="cameraDirIronsights";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=50;
			distanceZoomMax=400;
			discreteDistance[]={50,100,150,200,300,400};
			discreteDistanceInitIndex=1;
			PPDOFProperties[]={1,0.1,20,200,4,10};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyIMP_HKMG4_Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Submachine\HKMG4\models\IMP_HKMG4_Mag.p3d";
	};
	class Proxyscope: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsAug";
		model="IMPWMOD\Weapons\Submachine\HKMG4\models\optic_hkmg4.p3d";
	};
};