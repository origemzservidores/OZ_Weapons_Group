class CfgPatches
{
	class IMP_Weapons_AK74
	{
		units[]=
		{
			"IMP_AK74"
		};
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

class cfgWeapons {
	class Rifle_Base;
	
	class IMP_AK74_Base: Rifle_Base
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
		WeaponLength=0.7;
		barrelArmor=2.5;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		magazines[]=
		{
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={0.45,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"magazine",
			"HandlesAK"
		};
		hiddenSelections[]=
		{
			"camoflage",
			"camoflage1"
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
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.125;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.1;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
		class NoiseShoot
		{
			strength=82;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={0,100,200,300,400};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=0;
			distanceZoomMax=400;
		};
	};
	class IMP_AK74: IMP_AK74_Base
	{
		scope=2;
		displayName="AK-74";
		descriptionShort="$STR_IMP_AK74des";
		model="\IMPWMOD\Weapons\Automatic\AK74\models\AK74.p3d";
		attachments[]=
		{
			"weaponButtstockAK",
			"WeaponHandguardAK",
			"weaponWrap",
			"weaponFlashlight",
			"weaponMuzzleAK",
			"weaponBayonetAK",
			"weaponOpticsAK",
			"grip1",
			"Rail",
			"weaponOptics",
			"HandlesAK"
		};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AK74\data\AK74_co.paa", "IMPWMOD\Weapons\Automatic\AK74\data\AK74_co.paa"};
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
							1.01,
							
							{
								"IMPWMOD\Weapons\Automatic\AK74\data\AK74.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\AK74\data\AK74.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\AK74\data\AK74_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\AK74\data\AK74_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Automatic\AK74\data\AK74_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};