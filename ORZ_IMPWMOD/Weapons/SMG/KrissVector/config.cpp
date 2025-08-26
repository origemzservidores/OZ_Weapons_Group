class CfgPatches
{
	class IMP_Weapons_Vector
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
	class IMP_Vector_Base: Rifle_Base
	{
		scope=0;
		displayName="Kriss Vector";
		descriptionShort="$STR_IMP_Kriss12";
		model="IMPWMOD\Weapons\SMG\KrissVector\models\KrissVector.p3d";
		attachments[]=
		{
			"weaponOptics",
			"VectorSupp",
			"weaponWrap",
			"grip1"
		};
		itemSize[]={7,3};
		weight=2500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={};
		WeaponLength=0.62;
		barrelArmor=2.6670001;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_45ACP"
		};
		magazines[]=
		{
			"IMP_Mag_Vector_35Rnd"
		};
		ejectType=1;
		recoilModifier[]={0.93000001,0.93000001,0.93000001};
		swayModifier[]={1.05,1.05,1};
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
			reloadTime=0.1;
			dispersion=0.0035000001;
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
			reloadTime=0.050000001;
			dispersion=0.0035000001;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp5k_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating=10;
				maxOverheatingValue=30;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.80000001};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0.02,0};
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
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=150;
			discreteDistance[]={25,50,100,150};
			discreteDistanceInitIndex=0;
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
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class IMP_Vector: IMP_Vector_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\SMG\KrissVector\data\vector_co.paa"
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_Vector_35Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_Kriss123";
		descriptionShort="$STR_IMP_Kriss1234";
		model="IMPWMOD\Weapons\SMG\KrissVector\models\vectorMag.p3d";
		weight=100;
		itemSize[]={1,3};
		count=35;
		ammo="Bullet_45ACP";
		ammoItems[]=
		{
			"Ammo_45ACP"
		};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\SMG\KrissVector\data\vector_destruct.rvmat"
							}
						}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};