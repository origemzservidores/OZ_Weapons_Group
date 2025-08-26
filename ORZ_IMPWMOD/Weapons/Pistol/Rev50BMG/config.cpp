class CfgPatches
{
	class IMP_Weapons_Rev50BMG
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols","DZ_Sounds_Effects","DZ_Scripts", "DZ_Pistols_Magnum"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoPistol;
class cfgWeapons
{
	class Magnum;
	class IMP_Rev50BMG_Base: Magnum
	{
		scope = 0;
		displayName = "$STR_IMP_Rev50BMG";
		descriptionShort = "$STR_IMP_Rev50BMGDescr";
		model = "IMPWMOD\Weapons\Pistol\Rev50BMG\models\Rev50BMG.p3d";
		itemSize[] = {6,6};
		attachments[] = {"RevolverCylinder50BMG","RevolverEjector50BMG"};
		weight = 2500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.9,10,250,4,10};
		WeaponLength = 0.63;
		barrelArmor = 1.758;
		initSpeedMultiplier = 1;
		DisplayMagazine = 0;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"IMP_Ammo_127x99"};
		ejectType = 8;
		recoilModifier[]={3, 3, 3};
        swayModifier[]={1.15, 1.15, 0.8};
		drySound[] = {"DZ\sounds\weapons\firearms\magnum\Magnum_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\magnum\magnum_reload2",0.8,1,20};
		hiddenSelections[] = {"camoflage", "camoflage2"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"M82A1_Shot_SoundSet","M82A1_Tail_SoundSet","M82A1_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M82A1_silencerHomeMade_SoundSet","M82A1_silencerHomeMadeTail_SoundSet","M82A1_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.19;
			dispersion = 0.009;
			magazineSlot = "magazine";
		};
		class OpticsInfoMagnumBase: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class OpticsInfo: OpticsInfoMagnumBase{};
		muzzles[]={"this", "SecondMuzzle", "ThirdMuzzle", "FourthMuzzle", "FifthMuzzle", "SixthMuzzle"};
		class SecondMuzzle : Muzzle_Base
        {
            chamberSize=1;
            muzzlePos="usti hlavne";
            muzzleEnd="konec hlavne";
            cartridgePos="nabojnicestart_2";
            cartridgeVel="nabojniceend_2";
            modes[]={"Single"};
            magazines[]={};
            chamberableFrom[]={"IMP_Ammo_127x99"};
            barrelArmor=1.758;
            initSpeedMultiplier=0.9;
            class Single : Mode_Single
            {
                soundSetShot[]={"M200_Shot_SoundSet"};
                reloadTime=0.08;
                dispersion=0.0045;
                magazineSlot="magazine";
            };
            class OpticsInfo : OpticsInfoMagnumBase
            {
            };
        };
        class ThirdMuzzle : SecondMuzzle
        {
            cartridgePos="nabojnicestart_3";
            cartridgeVel="nabojniceend_3";
        };
        class FourthMuzzle : SecondMuzzle
        {
            cartridgePos="nabojnicestart_4";
            cartridgeVel="nabojniceend_4";
        };
        class FifthMuzzle : SecondMuzzle
        {
            cartridgePos="nabojnicestart_5";
            cartridgeVel="nabojniceend_5";
        };
        class SixthMuzzle : SecondMuzzle
        {
            cartridgePos="nabojnicestart_6";
            cartridgeVel="nabojniceend_6";
        };
		class Particles
        {
            class OnFire
            {
                class MuzzleFlashForward
                {
                    ignoreIfSuppressed=1;
                    illuminateWorld=1;
                    overrideParticle="weapon_shot_fnx_01";
                };
                class SmokeCloud
                {
                    overrideParticle="weapon_shot_winded_smoke_small";
                };
            };
            class OnOverheating
            {
                shotsToStartOverheating=1;
                maxOverheatingValue=4;
                overheatingDecayInterval=1;
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
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG.rvmat", "impwmod\weapons\pistol\rev50bmg\data\rev50bmgback.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG.rvmat","impwmod\weapons\pistol\rev50bmg\data\rev50bmgback.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_damage.rvmat","impwmod\weapons\pistol\rev50bmg\data\rev50bmgback_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_damage.rvmat","impwmod\weapons\pistol\rev50bmg\data\rev50bmgback_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_destruct.rvmat","impwmod\weapons\pistol\rev50bmg\data\rev50bmgback_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_Rev50BMG: IMP_Rev50BMG_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_co.paa", "impwmod\weapons\pistol\rev50bmg\data\rev50bmgback_co.paa"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Magnum_Cylinder;
	class Magnum_Ejector;
	class IMP_RevolverCylinder50BMG: Magnum_Cylinder
	{
		scope = 2;
		displayName = "";
		descriptionShort = "";
		model = "IMPWMOD\Weapons\Pistol\Rev50BMG\proxy\50cylinder.p3d";
		weight = 1;
		inventorySlot[] = {"RevolverCylinder50BMG"};
		simpleHiddenSelections[] = {"bullet", "bullet_2", "bullet_3", "bullet_4", "bullet_5", "bullet_6", "bullet_nose", "bullet_nose_2", "bullet_nose_3", "bullet_nose_4", "bullet_nose_5", "bullet_nose_6"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG.rvmat"}},{0.7,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG.rvmat"}},{0.5,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_damage.rvmat"}},{0.0,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
        {
            class Rotate_Cylinder
            {
                source="user";
                animPeriod=1;
                initPhase=0;
            };
            class Rotate_Cylinder_Back
            {
                source="user";
                animPeriod=0.0001;
                initPhase=0;
            };
            class bullet
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_2
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_3
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_4
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_5
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_6
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_nose
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_nose_2
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_nose_3
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_nose_4
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_nose_5
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
            class bullet_nose_6
            {
                source="user";
                initPhase=1;
                animPeriod=0.01;
            };
        };
    };
	class IMP_RevolverEjector50BMG: Magnum_Ejector
	{
		scope = 2;
		displayName = "";
		descriptionShort = "";
		model = "IMPWMOD\Weapons\Pistol\Rev50BMG\proxy\50ejector.p3d";
		weight = 1;
		inventorySlot[] = {"RevolverEjector50BMG"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG.rvmat"}},{0.7,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG.rvmat"}},{0.5,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_damage.rvmat"}},{0.0,{"IMPWMOD\Weapons\Pistol\Rev50BMG\data\Rev50BMG_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
        {
            class Rotate_Ejector
            {
                source="user";
                animPeriod=1;
                initPhase=0;
            };
        };
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyRev50BMG: ProxyAttachment
	{
		scope = 2;
	};
	class Proxy50cylinder: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "RevolverCylinder50BMG";
		model = "IMPWMOD\Weapons\Pistol\Rev50BMG\proxy\50cylinder.p3d";
	};
	class Proxy50ejector: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "RevolverEjector50BMG";
		model = "IMPWMOD\Weapons\Pistol\Rev50BMG\proxy\50ejector.p3d";
	};
};

class CfgSlots
{
	class Slot_RevolverEjector50BMG
	{
		name = "RevolverEjector50BMG";
		displayName = "";
		ghostIcon = "";
		show = "false";
	};
	class Slot_RevolverCylinder50BMG
	{
		name = "RevolverCylinder50BMG";
		displayName = "";
		ghostIcon = "";
		show = "false";
	};
};