class CfgPatches
{
	class IMP_W_SVLK14SSumrak
	{
		units[]={};
		weapons[]=
		{
			"IMP_W_SVLK14SSumrak"
		};
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
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class IMP_W_SVLK14SSumrak_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		model="IMPWMOD\Weapons\Sniper\LobaevArms\SVLK14SSumrak\models\SVLK14SSumrak.p3d";
		weight=9600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		WeaponLength=1.482;
		barrelArmor=3.125;
		initSpeedMultiplier=1.3;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"IMP_Ammo_408"
		};
		magazines[]={};
		DisplayMagazine=0;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\LobaevArms\SVLK14SSumrak\data\body_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\LobaevArms\SVLK14SSumrak\data\material.rvmat"};
		simpleHiddenSelections[]={"hide_barrel"};
		modes[]={"Single"};
		class Single: Mode_Single
		{
			soundSetShot[]= {"M300_Shot_SoundSet","M300_Tail_SoundSet","M300_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M300_silencerHomeMade_SoundSet","M300_silencerHomeMadeTail_SoundSet","M300_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1;
			dispersion=0.001;
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
			discreteDistance[]={100,200,300,400,500};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=500;
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 2000;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\SVLK14SSumrak\data\material.rvmat"}},
                        {0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\SVLK14SSumrak\data\material.rvmat"}},
                        {0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\SVLK14SSumrak\data\material_damage.rvmat"}},
                        {0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\SVLK14SSumrak\data\material_damage.rvmat"}},
                        {0.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\SVLK14SSumrak\data\material_destruct.rvmat"}}
                    };
                };
            };
        };
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.029999999,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=3;
				overheatingDecayInterval=4;
				class BarrelSmoke
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
	};
	class IMP_W_SVLK14SSumrak: IMP_W_SVLK14SSumrak_Base
	{
		scope=2;
		displayName="$STR_IMP_svlk14s";
		descriptionShort="$STR_IMP_svlk14sd";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		itemSize[]={11,3};
	};
};
