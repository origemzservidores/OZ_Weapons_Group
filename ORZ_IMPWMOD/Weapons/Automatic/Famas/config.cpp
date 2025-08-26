class CfgPatches
{
	class IMP_Famas
	{
		units[]=
		{
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
class CfgWeapons
{
	class Rifle_Base;
	class IMP_Famas_Base: Rifle_Base
	{
		scope=0;
		weight=3600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=0.75;
		barrelArmor=2.3;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
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
		magazineSwitchTime=0.30000001;
		initSpeedMultiplier=1;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,1};
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
								"IMPWMOD\Weapons\Automatic\Famas\data\Famas.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\Famas\data\Famas.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\Famas\data\Famas_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\Famas\data\Famas_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Automatic\Famas\data\Famas_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Automatic\Famas\data\Famas_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Automatic\Famas\data\Famas.rvmat"
		};
		class NoiseShoot
		{
			strength=82;
			type="shot";
		};
		modes[]=
		{
			"SemiAuto",
			"Burst",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Famas_Shot_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.12;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[]=
			{
				"Famas_Shot_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst=3;
			reloadTime=0.064999998;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Famas_Shot_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=200;
			PPMaskProperties[]={0.5,0.5,0.1,0.050000001};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0.2;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.25,0.035,0};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.25,0.035,-0.029999999};
				orientation[]={0,0,0};
			};
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
					positionOffset[]={0,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.69999999};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,1};
					positionOffset[]={0.2,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.1,0,0};
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
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\Famas\w_famas_states.anm";
	};
	class IMP_FAMAS: IMP_Famas_Base
	{
		scope=2;
		displayName="FAMAS";
		descriptionShort="$STR_CfgWeapons_FAMAS1";
		model="IMPWMOD\Weapons\Automatic\Famas\models\IMP_Famas.p3d";
		attachments[]=
		{
			"weaponWrap",
			"grip1",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4"
		};
		itemSize[]={6,3};
	};
};
