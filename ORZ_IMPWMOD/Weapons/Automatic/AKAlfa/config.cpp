class CfgPatches
{
	class IMP_Weapons_AKAlfa
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
	class IMP_AKAlfa_Base: Rifle_Base
	{
		scope=0;
		weight=2140;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
			"KashtanOptic",
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=0.69;
		barrelArmor=4.444;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"IMP_Mag_AKAlfa_30Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
		simpleHiddenSelections[]=
		{
			"irons_up",
			"irons_down"
		};
		hiddenSelections[]=
		{
			"camoflage"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK12_Shot_SoundSet", "AK12_Tail_SoundSet", "AK12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AK12_silencer_SoundSet", "AK12_silencerTail_SoundSet", "AK12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.075;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK12_Shot_SoundSet", "AK12_Tail_SoundSet", "AK12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AK12_silencer_SoundSet", "AK12_silencerTail_SoundSet", "AK12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.075;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=82;
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
	class IMP_AKAlfa: IMP_AKAlfa_Base
	{
		scope=2;
		displayName="AK Alfa";
		descriptionShort="$STR_IMP_AKAlfaDescr";
		model="IMPWMOD\Weapons\Automatic\AKAlfa\models\AkAlfa.p3d";
		attachments[]=
		{
			"weaponWrap",
			"grip1",
			"weaponOptics",
			"weaponMuzzleM4"
		};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa_co.paa"};
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
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa_destruct.rvmat"
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
	class IMP_Mag_AKAlfa_30Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_MagAKAlfa";
		descriptionShort="$STR_IMP_MagAKAlfadescr";
		model="IMPWMOD\Weapons\Automatic\AKAlfa\models\AkAlfaMag.p3d";
		weight=430;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_556x45";
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\AKAlfa\data\AKAlfa_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyAkAlfaMag : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\AKAlfa\models\AkAlfaMag.p3d";
	};
};