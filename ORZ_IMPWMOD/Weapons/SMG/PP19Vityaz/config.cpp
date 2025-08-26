class CfgPatches
{
	class IMP_Weapons_PP19Vityaz
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
	class IMP_Weapons_PP19Vityaz_Base: Rifle_Base
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
		WeaponLength=0.436;
		barrelArmor=4.444;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		magazines[]=
		{
			"IMP_Mag_PP19Vityaz_30Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
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
			soundSetShot[]=
			{
				"UMP45_Shot_SoundSet",
				"UMP45_Tail_SoundSet",
				"UMP45_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"UMP45_silencerPro_SoundSet",
					"UMP45_silencerTail_SoundSet",
					"UMP45_silencerInteriorTail_SoundSet"
				},
				
				{
					"UMP45_silencerHomeMade_SoundSet",
					"UMP45_silencerHomeMadeTail_SoundSet",
					"UMP45_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.092;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"UMP45_Shot_SoundSet",
				"UMP45_Tail_SoundSet",
				"UMP45_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"UMP45_silencerPro_SoundSet",
					"UMP45_silencerTail_SoundSet",
					"UMP45_silencerInteriorTail_SoundSet"
				},
				
				{
					"UMP45_silencerHomeMade_SoundSet",
					"UMP45_silencerHomeMadeTail_SoundSet",
					"UMP45_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.092;
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
	class IMP_PP19Vityaz: IMP_Weapons_PP19Vityaz_Base
	{
		scope=2;
		displayName="$STR_pp19";
		descriptionShort="$STR_pp19D";
		model="IMPWMOD\Weapons\SMG\PP19Vityaz\models\IMP_PP19Vityaz.p3d";
		attachments[]=
		{
			"weaponFlashlight",
			"weaponWrap",
			"grip1",
			"weaponSupp9x19",
			"weaponOptics"
		};
		itemSize[]={7,3};
		hiddenSelectionsTextures[] = 
		{
			"impwmod\weapons\smg\pp19vityaz\data\PP19_Vityaz_co.paa"
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
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"impwmod\weapons\smg\pp19vityaz\data\PP19_Vityaz.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\smg\pp19vityaz\data\PP19_Vityaz.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\smg\pp19vityaz\data\PP19_Vityaz_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\smg\pp19vityaz\data\PP19_Vityaz_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\smg\pp19vityaz\data\PP19_Vityaz_destruct.rvmat"
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
	
	class IMP_Mag_PP19Vityaz_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName="$STR_pp19DMag";
		descriptionShort="$STR_pp19DMagd";
		model = "IMPWMOD\Weapons\SMG\PP19Vityaz\models\IMP_Mag_PP19_30Rnd.p3d";
		weight = 500;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelections[]=
		{
			"camoflage"
		};
		ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
		};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\SMG\PP19Vityaz\data\PP19_Vityaz_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\SMG\PP19Vityaz\data\PP19_Vityaz.rvmat"}},{0.7,{"IMPWMOD\Weapons\SMG\PP19Vityaz\data\PP19_Vityaz.rvmat"}},{0.5,{"IMPWMOD\Weapons\SMG\PP19Vityaz\data\PP19_Vityaz_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\SMG\PP19Vityaz\data\PP19_Vityaz_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\SMG\PP19Vityaz\data\PP19_Vityaz_destruct.rvmat"}}};
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyIMP_Mag_PP19_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\SMG\PP19Vityaz\models\IMP_Mag_PP19_30Rnd.p3d";
	};
};