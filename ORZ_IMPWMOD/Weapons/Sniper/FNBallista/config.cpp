class CfgPatches
{
	class IMP_Weapons_FNBallista
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
	class BoltActionRifle_ExternalMagazine_Base;
	
	class IMP_FnBallista_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_FNBallista";//Название предмета	
		descriptionShort = "$STR_IMP_FNBallistaDescr";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\FNBallista\models\FNBallista.p3d";//путь до модели
		weight = 5000;//вес
		absorbency = 0.0;//промокание предмета
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {10};//сколько % будет снимать за починку из кита
		PPDOFProperties[] = {1,0.5,50,160,4,10};//
		initSpeedMultiplier = 1;
		chamberedRound = "";//
		chamberSize = 1;// 1 заряд патрона
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[]={"IMP_Mag_FNBallista_5Rnd"};//какие  магазины вставляются
		ejectType = 1;//
		itemSize[] = {10, 3};//размер предмета 1 горизонталь 2 вертикаль
		WeaponLength=1.2;
		barrelArmor=1.8;//защита оружия
		simpleHiddenSelections[]={"hide_barrel"};//то что пропадает при прицеливании
		hiddenSelections[]={"camoflage"};//ваша селекция для ретекстура
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponWrap",
			"Suppressor_338"
		};//аттачменты
		recoilModifier[] = {0.8,0.8,1};
		swayModifier[]={0.8,0.8,1};
		modes[] = {"Single"};//режим стрельбы
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{		
						{1,{"impwmod\weapons\sniper\fnballista\data\barrell.rvmat", "impwmod\weapons\sniper\fnballista\data\frame1.rvmat", "impwmod\weapons\sniper\fnballista\data\frame2.rvmat", "impwmod\weapons\sniper\fnballista\data\frame3.rvmat", "impwmod\weapons\sniper\fnballista\data\frame4.rvmat", "impwmod\weapons\sniper\fnballista\data\bolt.rvmat", "impwmod\weapons\sniper\fnballista\data\pika.rvmat"}},
						{0.7,{"impwmod\weapons\sniper\fnballista\data\barrell.rvmat", "impwmod\weapons\sniper\fnballista\data\frame1.rvmat", "impwmod\weapons\sniper\fnballista\data\frame2.rvmat", "impwmod\weapons\sniper\fnballista\data\frame3.rvmat", "impwmod\weapons\sniper\fnballista\data\frame4.rvmat", "impwmod\weapons\sniper\fnballista\data\bolt.rvmat", "impwmod\weapons\sniper\fnballista\data\pika.rvmat"}},
						{0.5,{"impwmod\weapons\sniper\fnballista\data\barrell_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\frame1_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\frame2_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\frame3_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\frame4_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\bolt.rvmat", "impwmod\weapons\sniper\fnballista\data\pika_damage.rvmat"}},
						{0.3,{"impwmod\weapons\sniper\fnballista\data\barrell_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\frame1_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\frame2_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\frame3_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\frame4_damage.rvmat", "impwmod\weapons\sniper\fnballista\data\bolt.rvmat", "impwmod\weapons\sniper\fnballista\data\pika_damage.rvmat"}},
						{0,{"impwmod\weapons\sniper\fnballista\data\barrell_destruct.rvmat", "impwmod\weapons\sniper\fnballista\data\frame1_destruct.rvmat", "impwmod\weapons\sniper\fnballista\data\frame2_destruct.rvmat", "impwmod\weapons\sniper\fnballista\data\frame3_destruct.rvmat", "impwmod\weapons\sniper\fnballista\data\frame4_destruct.rvmat", "impwmod\weapons\sniper\fnballista\data\bolt.rvmat", "impwmod\weapons\sniper\fnballista\data\pika_destruct.rvmat"}}
					};
				};
			};
		};
		
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"T5000_Shot_SoundSet","T5000_Tail_SoundSet","T5000_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"T5000_silencerHomeMade_SoundSet","T5000_silencerHomeMadeTail_SoundSet","T5000_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1.8;//задержка выстрела
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.0001;
			magazineSlot="magazine";
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
			};
			
			class OnOverheating {
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				
				class BarrelSmoke {
					overrideParticle = "smoking_barrel_small";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class NoiseShoot//звук агра зомби
		{
			strength=80;
			type="shot";
		};
	};		
	class IMP_FnBallista : IMP_FnBallista_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\fnballista\data\barrell_co.paa", "impwmod\weapons\sniper\fnballista\data\frame1_co.paa", "impwmod\weapons\sniper\fnballista\data\frame2_co.paa", "impwmod\weapons\sniper\fnballista\data\frame3_co.paa", "impwmod\weapons\sniper\fnballista\data\frame4_co.paa", "impwmod\weapons\sniper\fnballista\data\bolt_co.paa", "impwmod\weapons\sniper\fnballista\data\pika_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\fnballista\data\barrell.rvmat", "impwmod\weapons\sniper\fnballista\data\frame1.rvmat", "impwmod\weapons\sniper\fnballista\data\frame2.rvmat", "impwmod\weapons\sniper\fnballista\data\frame3.rvmat", "impwmod\weapons\sniper\fnballista\data\frame4.rvmat", "impwmod\weapons\sniper\fnballista\data\bolt.rvmat", "impwmod\weapons\sniper\fnballista\data\pika.rvmat"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_FNBallista_5Rnd: Magazine_Base
	{
		scope=2;//видимость в админке
		displayName="$STR_IMP_FNBallistaMag";//Название предмета
		descriptionShort="$STR_IMP_3385am";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\FNBallista\models\FNBallista_Mag.p3d";//Путь до модели
		weight=90;//Вес в инвентаре ГРАММЫ
		itemSize[]={2,2};//Размер в инвентаре (1 число по горизонтали, 2 по вертикали)
		count=5;// кол-во патронов
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\FNBallista\data\FNBallista_Mag_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\FNBallista\data\FNBallista_Mag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\FNBallista\data\FNBallista_Mag.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\FNBallista\data\FNBallista_Mag.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\FNBallista\data\FNBallista_Mag_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\FNBallista\data\FNBallista_Mag_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\FNBallista\data\FNBallista_Mag_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyFNBallista_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="IMPWMOD\Weapons\Sniper\FNBallista\models\FNBallista_Mag.p3d";
    };
};