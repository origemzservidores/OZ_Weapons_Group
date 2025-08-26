class CfgPatches
{
	class IMP_Weapons_Komrad12
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
class OpticsInfoShotgun;
class cfgWeapons
{
	class Rifle_Base;
	class IMP_Komrad12_Base: Rifle_Base
	{
		scope=0;
		weight=3600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		magazines[]=
		{
			"IMP_Mag_Komrad12_10Rnd",
			"IMP_Mag_Komrad12_Tape_20Rnd",
			"IMP_Mag_Komrad12_Clip_20Rnd"
		};
		magazineSwitchTime=0.2;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		WeaponLength=0.75;
		barrelArmor=1.6799999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.5,2.5,1.3};
		hiddenSelections[]={"Base", "Butt", "Handle", "Kronshteyn"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Shotgun\Komrad12\data\Base.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Butt.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Handle.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Kronshteyn.rvmat"};
		attachments[] = {"weaponWrap", "weaponOptics", "weaponFlashlight", "grip1"};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle="weapon_shot_winded_smoke";
					onlyWithinHealthLabel[]={3,4};
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=4;
				shotsToStartOverheating=1;
				overheatingDecayInterval=3;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
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
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"Saiga12_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "Origin12_silencer_SoundSet", "Origin12_silencerTail_SoundSet", "Origin12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.2;
			recoil="recoil_Saiga12";
			recoilProne="recoil_Saiga12_prone";
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"Saiga12_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "Origin12_silencer_SoundSet", "Origin12_silencerTail_SoundSet", "Origin12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.2;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
		};
	};
	class IMP_Komrad12: IMP_Komrad12_Base
	{
		scope=2;
		displayName="$STR_IMP_Komrad12";
		descriptionShort="$STR_IMP_Komrad121";
		model="IMPWMOD\Weapons\Shotgun\Komrad12\models\IMP_Komrad12.p3d";
		itemSize[]={9,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Base.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Butt.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Handle.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Kronshteyn.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Base.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Butt.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Handle.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Kronshteyn.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Base_Damage.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Butt_Damage.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Handle_Damage.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Kronshteyn_Damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Base_Damage.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Butt_Damage.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Handle_Damage.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Kronshteyn_Damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Base_Destruct.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Butt_Destruct.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Handle_Destruct.rvmat", "IMPWMOD\Weapons\Shotgun\Komrad12\data\Kronshteyn_Destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_Komrad12_Clip_20Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_Komrad122";
		descriptionShort="$STR_IMP_Komrad123";
		model="IMPWMOD\Weapons\Shotgun\Komrad12\models\IMP_Komrad12_Clip_20_Rnd.p3d";
		weight=400;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo="Bullet_12GaugePellets";
		ammoItems[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		itemSize[]={2,2};
		count=20;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_Mag_Komrad12_10Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_Komrad122";
		descriptionShort="$STR_IMP_Komrad124";
		model="IMPWMOD\Weapons\Shotgun\Komrad12\models\IMP_Komrad12_Mag.p3d";
		weight=400;
		ammo="Bullet_12GaugePellets";
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
		ammoItems[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		itemSize[]={2,2};
		count=20;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_Mag_Komrad12_Tape_20Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_Komrad122";
		descriptionShort="$STR_IMP_Komrad123";
		model="IMPWMOD\Weapons\Shotgun\Komrad12\models\IMP_Komrad12_Tape_20_Rnd.p3d";
		weight=400;
		ammo="Bullet_12GaugePellets";
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammoItems[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		itemSize[]={2,2};
		count=20;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Shotgun\Komrad12\data\Magazine_Destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyIMP_Komrad12_Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Shotgun\Komrad12\models\IMP_Komrad12_Mag.p3d";
	};
	class ProxyIMP_Komrad12_Clip_20_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Shotgun\Komrad12\models\IMP_Komrad12_Clip_20_Rnd.p3d";
	};
	class ProxyIMP_Komrad12_Tape_20_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Shotgun\Komrad12\models\IMP_Komrad12_Tape_20_Rnd.p3d";
	};
};