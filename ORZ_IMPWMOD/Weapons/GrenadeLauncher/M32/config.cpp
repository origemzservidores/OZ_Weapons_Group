class CfgPatches
{
	class IMP_Weapons_GL_M32
	{
		units[]=
		{
			"IMP_GL_M32"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition",
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
	class IMP_GL_M32_Base: Rifle_Base
	{
		scope=0;
		displayName="Milkor M32";
		descriptionShort="$STR_IMP_M32milkor";
		model="IMPWMOD\Weapons\GrenadeLauncher\M32\models\IMP_M32.p3d";
		isSuicideWeapon=0;
		attachments[]=
		{
			"weaponOptics", "weaponButtstockM4", "weaponFlashlight", "grip1", "HandlesM4"
		};
		itemSize[]={10,3};
		weight=5000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=6;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_40mm_Explosive",
			"Ammo_40mm_ChemGas",
			"Ammo_40mm_Smoke_Red",
			"Ammo_40mm_Smoke_Green",
			"Ammo_40mm_Smoke_White",
			"Ammo_40mm_Smoke_Black"
		};
		magazines[]={};
		DisplayMagazine=0;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		WeaponLength=0.71;
		barrelArmor=1.875;
		ejectType=0;
		simpleHiddenSelections[] = {"HandlesM4"};
		initSpeedMultiplier=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		cartridgeCreateTime[]={0.55000001,0.81999999};
		reloadSkips[]={0.25999999,0.40000001,0.52999997,0.63999999,0.73500001};
		hiddenSelections[]=
		{
			"Back",
			"Front",
			"Mag"
		};
		modes[]=
		{
			"Single"
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=0;
					positionOffset[]={-0.029999999,0,0};
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M79_Shot_SoundSet",
				"M79_Tail_SoundSet",
				"M79_InteriorTail_SoundSet"
			};
			reloadTime=0.30000001;
			dispersion=0.035;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={50,100,150,200,250,300,350,400,450};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=50;
			distanceZoomMax=450;
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
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Back.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Front.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Back.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Front.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Back_damage.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Front_damage.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Back_damage.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Front_damage.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Back_destruct.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Front_destruct.rvmat",
								"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Mag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class NoiseShoot
		{
			strength=50;
			type="shot";
		};
	};
	class IMP_GL_M32: IMP_GL_M32_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Back_co.paa",
			"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Front_co.paa",
			"IMPWMOD\Weapons\GrenadeLauncher\M32\data\Mag_co.paa"
		};
	};
};