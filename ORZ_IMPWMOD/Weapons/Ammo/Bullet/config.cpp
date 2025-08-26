class CfgPatches 
{
	class IMP_Bullet_Projectiles 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Projectiles", "DZ_Scripts", "DZ_Weapons_Firearms"};
		ammo[] = {"IMP_Bullet_338LM", "IMP_Bullet_408", "IMP_Bullet_127x42", "IMP_Bullet_127x55", "IMP_Bullet_127x99", "IMP_Bullet_300AAC", "IMP_Bullet_792x57", "IMP_Bullet_762x25", "IMP_Bullet_9x18", "IMP_Bullet_127x108", "IMP_Bullet_20mm"};
	};
};

class cfgAmmoTypes {
	class AType_IMP_Bullet_338LM
	{
		name = "IMP_Bullet_338LM";
	};
	
	class AType_IMP_Bullet_408
	{
		name = "IMP_Bullet_408";
	};
	
	class AType_IMP_Bullet_127x42
	{
		name = "IMP_Bullet_127x42";
	};
	
	class AType_IMP_Bullet_127x55
	{
		name = "IMP_Bullet_127x55";
	};
	
	class AType_IMP_Bullet_127x99
	{
		name = "IMP_Bullet_127x99";
	};
	
	class AType_IMP_Bullet_300AAC
	{
		name = "IMP_Bullet_300AAC";
	};
	
	class AType_IMP_Bullet_792x57
	{
		name = "IMP_Bullet_792x57";
	};
	
	class AType_IMP_Bullet_762x25
	{
		name = "IMP_Bullet_762x25";
	};
	
	class AType_IMP_Bullet_9x18
	{
		name = "IMP_Bullet_9x18";
	};
	
	class AType_IMP_Bullet_127x108
	{
		name = "IMP_Bullet_127x108";
	};
	class AType_IMP_Bullet_20mm
	{
		name = "IMP_Bullet_20mm";
	};
	class AType_300BLK
	{
		name="Paragon_Bullet_300BLK";
	};
};

class cfgAmmo {
	class Bullet_Base;
	class ShotgunCore;
	class DefaultAmmo;
	class BulletCore;
	class Shotgun_Base;
	
	class Bullet_45ACP: Bullet_Base
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.80000001;
		deflecting=30;
		initSpeed=260;
		typicalSpeed=290;
		airFriction=-0.001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=187.5;
		damageBarrelDestroyed=187.5;
		weight=0.0149;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
				damageOverride[]=
				{
					{0.89999998,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_9x19: Bullet_Base
	{
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.80000001;
		deflecting=30;
		initSpeed=350;
		typicalSpeed=380;
		airFriction=-0.0023000001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=166.66667;
		damageBarrelDestroyed=166.66667;
		weight=0.0083999997;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_380: Bullet_Base
	{
		hit=5.5;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.80000001;
		deflecting=30;
		initSpeed=300;
		typicalSpeed=345;
		airFriction=-0.0015;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=150;
		damageBarrelDestroyed=150;
		weight=0.0060000001;
		hitAnimation=0;
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=35;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=35;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_22: Bullet_Base
	{
		hit=4.5;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=0.60000002;
		tracerStartTime=-1;
		tracerEndTime=1;
		deflecting=30;
		caliber=0.69999999;
		airFriction=-0.0024999999;
		typicalSpeed=440;
		initSpeed=370;
		damageBarrel=115.38461;
		damageBarrelDestroyed=115.38461;
		weight=0.0024999999;
		soundFly[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.69999999,1}
			};
			class Health
			{
				damage=20;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=20;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_12GaugePellets: Shotgun_Base
	{
		initSpeed=340;
		typicalSpeed=420;
		airFriction=-0.00575;
		caliber=0.5;
		deflecting=0;
		dispersion=0.050000001;
		projectilesCount=8;
		damageBarrel=600;
		damageBarrelDestroyed=600;
		weight=0.0049999999;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=1.75;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=35;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=35;
			};
		};
		class NoiseHit
		{
			strength=2;
			type="sound";
		};
	};
	
	class Bullet_12GaugeSlug: Bullet_Base
	{
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=380;
		typicalSpeed=420;
		airFriction=-0.0049999999;
		caliber=1;
		deflecting=0;
		damageBarrel=600;
		damageBarrelDestroyed=600;
		weight=0.028000001;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=1.75;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_12GaugeRubberSlug: Bullet_12GaugeSlug
	{
		initSpeed=60;
		typicalSpeed=80;
		airFriction=-0.02;
		caliber=0.1;
		deflecting=30;
		damageBarrel=480;
		damageBarrelDestroyed=480;
		weight=0.0049999999;
		unconRefillModifier=1.75;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0.050000001;
			bleedThreshold=0;
			transferShockToDamage=1;
			class Health
			{
				damage=0;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=150;
			};
		};
		class NoiseHit
		{
			strength=2;
			type="sound";
		};
	};
	
	class Bullet_545x39: Bullet_Base
	{
		hit=7.1999998;
		airFriction=-0.00125;
		typicalSpeed=880;
		initSpeed=880;
		caliber=0.89999998;
		deflecting=10;
		damageBarrel=214.28572;
		damageBarrelDestroyed=214.28572;
		weight=0.00343;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=115;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=115;
				damageOverride[]=
				{
					{0.89999998,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	class Bullet_762x39: Bullet_Base
	{
		hit=9.5;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=640;
		typicalSpeed=740;
		airFriction=-0.0015;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.0080000004;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
				damageOverride[]=
				{
					{0.80000001,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_556x45: Bullet_Base
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=850;
		typicalSpeed=1000;
		airFriction=-0.00125;
		caliber=1;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.0040000002;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.87,1}
			};
			class Health
			{
				damage=110;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	
	class Bullet_357: Bullet_Base
	{
		hit=9;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=1;
		deflecting=30;
		airFriction=-0.0024999999;
		typicalSpeed=520;
		initSpeed=440;
		damageBarrel=187.5;
		damageBarrelDestroyed=187.5;
		weight=0.0102;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=2.75;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.85000002,1}
			};
			class Health
			{
				damage=65;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=90;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_9x39AP: Bullet_Base
	{
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=1.2;
		deflecting=15;
		typicalSpeed=320;
		airFriction=-0.0015;
		initSpeed=320;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.017999999;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94999999,1}
			};
			class Health
			{
				damage=75;
				armorDamage=3;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=75;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_9x39: Bullet_Base
	{
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.89999998;
		deflecting=20;
		typicalSpeed=280;
		airFriction=-0.0015;
		initSpeed=280;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.017000001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=75;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=75;
				damageOverride[]=
				{
					{0.89999998,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_762x54: Bullet_Base
	{
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=785;
		typicalSpeed=865;
		airFriction=-0.001;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.012;
		impactBehaviour=1;
		hitAnimation=0;
		unconRefillModifier=2.75;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94,1}
			};
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=150;
				damageOverride[]=
				{
					{0.86000001,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class Bullet_308Win: Bullet_Base
	{
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=770;
		typicalSpeed=940;
		tracerScale=1.2;
		tracerStartTime=-1;
		tracerEndTime=1;
		airFriction=-0.001;
		caliber=1;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.0099999998;
		impactBehaviour=1;
		hitAnimation=0;
		unconRefillModifier=2.75;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.89999998,1}
			};
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=150;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="sound";
		};
	};
	
	class IMP_Bullet_127x42: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_127x42";
		hit = 280;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed=570;
		typicalSpeed=670;
		airFriction = 0;
		caliber = 3.4;
		deflecting = 0;
		damageBarrel = 280;
		damageBarrelDestroyed = 280;
		weight = 0.05;
		impactBehaviour = 1;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 240;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 200;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_338LM: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_338LM";
		hit = 250;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 900;
		typicalSpeed = 1000;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = 0;
		caliber = 2.8;
		deflecting = 0;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.035;
		impactBehaviour = 1;
		hitAnimation = 0;
		unconRefillModifier=2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 400;
			};
			class Blood
			{
				damage = 400;
			};
			class Shock
			{
				damage = 250;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_408: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_408";
		hit = 375;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 910;
		typicalSpeed = 1010;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = 0;
		caliber = 3.1;
		deflecting = 0;
		damageBarrel = 375;
		damageBarrelDestroyed = 375;
		weight = 0.045;
		impactBehaviour = 1;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 800;
			};
			class Blood
			{
				damage = 800;
			};
			class Shock
			{
				damage = 400;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	class F_IMP_Bullet_408: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "F_IMP_Ammo_408";
		hit = 375;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 910;
		typicalSpeed = 1010;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = 0;
		caliber = 3.1;
		deflecting = 0;
		damageBarrel = 375;
		damageBarrelDestroyed = 375;
		weight = 0.045;
		impactBehaviour = 1;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 800;
			};
			class Blood
			{
				damage = 800;
			};
			class Shock
			{
				damage = 400;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_127x55: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";//тип гильзы, который будет использоваться при стрельбе из оружия, использующего этот патрон. В данном случае, тип гильзы - "FxCartridge_762". Это означает, что при стрельбе из оружия, использующего этот патрон, будет использоваться гильза типа "FxCartridge_762
		round = "FxRound_762";//тип визуального эффекта, который будет использоваться при стрельбе из оружия, использующего этот патрон. В данном случае, тип визуального эффекта - "FxRound_762". Это означает, что при стрельбе из оружия, использующего этот патрон, будет использоваться визуальный эффект типа "FxRound_762
		spawnPileType = "IMP_Ammo_127x55";//тип объекта, который будет создан при спавне патрона на земле. В данном случае, тип объекта - "IMP_Ammo_127x55". Это означает, что при спавне патрона на земле будет создан объект типа "IMP_Ammo_127x55"
		hit = 470;//Не трогать
		indirectHit = 0;// параметр indirectHit в конфигурационном файле патрона определяет урон, который будет нанесен цели при попадании патрона вблизи цели, но не в нее напрямую. То есть, если патрон взорвется рядом с целью, но не попадет в нее, то параметр indirectHit определяет урон, который будет нанесен цели. Значение параметра indirectHit обычно меньше, чем значение параметра hit, так как урон, наносимый при косвенном попадании, обычно меньше, чем урон, наносимый при прямом попадании. В игре DayZ значение параметра indirectHit для большинства патронов равно 0, так как эти патроны не предназначены для использования в качестве артиллерийских снарядов или гранат
		indirectHitRange = 0;//параметр indirectHitRange в конфигурационном файле патрона определяет радиус поражения цели при косвенном попадании патрона. То есть, если патрон взорвется рядом с целью, но не попадет в нее, то параметр indirectHitRange определяет радиус, в пределах которого цель получит урон. Значение параметра indirectHitRange обычно меньше, чем радиус поражения при прямом попадании, так как урон, наносимый при косвенном попадании, обычно меньше, чем урон, наносимый при прямом попадании. В игре DayZ значение параметра indirectHitRange для большинства патронов равно 0, так как эти патроны не предназначены для использования в качестве артиллерийских снарядов или гранат
		airLock = 1;//будет ли патрон замедляться в воздухе и изменять свое направление, чтобы следовать за целью, если она движется в воздухе
		initSpeed = 600;//определяет начальную скорость патрона в метрах в секунду (м/с), когда он вылетает из ствола оружия. Значение параметра initSpeed = 600 означает, что начальная скорость патрона равна 600 м/с
		typicalSpeed = 700;//определяет будущую скорость патрона в метрах в секунду (м/с)
		airFriction = 0;//Параметр airFriction в конфигурационном файле патрона влияет на сопротивление воздуха, которое воздействует на патрон во время полета. Чем выше значение параметра airFriction, тем больше сопротивление воздуха, и тем медленнее патрон теряет свою начальную скорость
		//tracerScale=1.2; параметр tracerScale в конфигурационном файле патрона определяет масштаб трассера, который оставляет патрон во время полета. Значение параметра tracerScale=1.2 означает, что масштаб трассера увеличен на 20% от стандартного размера
		//tracerStartTime=0.075000003; параметр tracerStartTime в конфигурационном файле патрона определяет время, через которое начинается отображение трассера после выстрела, в секундах. Значение параметра tracerStartTime=0.075000003 означает, что трассер начинает отображаться через 0.075 секунды после выстрела
		//tracerEndTime=3; параметр tracerEndTime в конфигурационном файле патрона определяет время, в течение которого отображается трассер после выстрела, в секундах. Значение параметра tracerEndTime=3 означает, что трассер будет отображаться в течение 3 секунд после выстрела
		tracerScale=1.2;// Не трасеры
		tracerStartTime=-1;// Не трасеры
		tracerEndTime=1;// Не трасеры
		caliber = 3.7;// параметр caliber в конфигурационном файле патрона определяет калибр патрона в миллиметрах (мм). Значение параметра caliber = 3.7 означает, что калибр патрона равен 3.7 мм. Однако, изменение калибра патрона может повлиять на его мощность, дальность и точность, поэтому необходимо учитывать эти факторы при модификации параметра caliber
		deflecting = 0;//параметр deflecting в конфигурационном файле патрона определяет вероятность отклонения пули от своей траектории при столкновении с препятствием, таким как стена или дерево. Значение параметра deflecting = 0 означает, что вероятность отклонения пули равна нулю. изменение вероятности отклонения пули может повлиять на ее точность и надежность, поэтому необходимо учитывать эти факторы при модификации параметра deflecting
		damageBarrel=470;//параметр damageBarrel в конфигурационном файле патрона определяет урон, который наносится стволу оружия при выстреле этим патроном. Значение параметра damageBarrel=470 означает, что ствол оружия получает 470 единиц урона при выстреле этим патроном
		damageBarrelDestroyed=470;//параметр damageBarrelDestroyed в конфигурационном файле патрона определяет урон, который наносится стволу оружия при выстреле этим патроном, если ствол уже находится в разрушенном состоянии. Значение параметра damageBarrelDestroyed=470 означает, что ствол оружия получает 470 единиц урона при выстреле этим патроном, если он уже находится в разрушенном состоянии
		weight = 0.035;// Вес пули (ВЛИЯЕТ ВИЗУАЛЬНО НА ВЫСТРЕЛ)// параметр weight в конфигурационном файле патрона определяет вес патрона в килограммах (кг). Значение параметра weight = 0.035 означает, что вес патрона равен 0.035 кг. Однако, изменение веса патрона может повлиять на его баллистические характеристики, такие как дальность и точность, поэтому необходимо учитывать эти факторы при модификации параметра weight
		impactBehaviour = 1;//параметр impactBehaviour в конфигурационном файле патрона определяет поведение пули при попадании в объект. Значение параметра impactBehaviour = 1 означает, что пуля будет пробивать объекты и продолжать свой полет
		hitAnimation = 0;// параметр hitAnimation в конфигурационном файле патрона определяет анимацию, которая будет проигрываться при попадании пули в объект. Значение параметра hitAnimation = 0 означает, что анимация не будет проигрываться при попадании пули в объект
		unconRefillModifier=2.75;//параметр unconRefillModifier в конфигурационном файле патрона определяет, насколько быстро игрок может восстановить сознание после потери его в результате попадания пули. Значение параметра unconRefillModifier=2.75 означает, что игрок может восстановить сознание в 2.75 раза быстрее, чем обычно
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;//параметр dispersion в конфигурационном файле патрона определяет разброс пули при выстреле из оружия. Значение параметра dispersion = 0 означает, что пуля не будет разбрасываться при выстреле
			bleedThreshold = 1;//параметр bleedThreshold в конфигурационном файле патрона определяет минимальный урон, который должен быть нанесен игроку, чтобы он начал кровоточить. Значение параметра bleedThreshold = 1 означает, что игрок начнет кровоточить при получении любого урона
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 650;
			};
			class Blood
			{
				damage = 650;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_127x99: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_127x99";
		hit = 530;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 870;
		typicalSpeed = 970;
		airFriction = 0;
		caliber = 5;
		deflecting = 0;
		damageBarrel = 530;
		damageBarrelDestroyed = 530;
		weight = 0.05;
		impactBehaviour = 1;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 2000;
			};
			class Blood
			{
				damage = 1000;
			};
			class Shock
			{
				damage = 1000;
			};
		};
		class NoiseHit
		{
			strength = 80;
			type = "shot";
		};
	};
	
	class IMP_Bullet_300AAC: Bullet_Base
	{
		scope = 1;
		spawnPileType = "IMP_Ammo_300AAC";
		caliber = 2.2;
		impactBehaviour = 1;
		initSpeed = 650;
		typicalSpeed = 750;
		hitAnimation = 0;
		
		unconRefillModifier=4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 115;
			};
			class Blood
			{
				damage = 115;
			};
			class Shock
			{
				damage = 115;
			};
		};
		class NoiseHit
		{
			strength = 15;
			type = "shot";
		};
	};
	
	class IMP_Bullet_792x57: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_792x57";
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 880;
		typicalSpeed = 980;
		airFriction = -0.00018;
		caliber = 1.5;
		deflecting = 10;
		damageBarrel = 60;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 0;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 280;
			};
			class Blood
			{
				damage = 280;
			};
			class Shock
			{
				damage = 280;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_762x25: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="IMP_Ammo_762x25";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.80000001;
		deflecting=30;
		initSpeed=350;
		typicalSpeed=380;
		airFriction=-0.0023000001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=166.66667;
		damageBarrelDestroyed=166.66667;
		weight=0.0083999997;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=40;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	
	class IMP_Bullet_9x18: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="IMP_Ammo_9x18";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.80000001;
		deflecting=30;
		initSpeed=350;
		typicalSpeed=380;
		airFriction=-0.0023000001;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=166.66667;
		damageBarrelDestroyed=166.66667;
		weight=0.0083999997;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=40;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	
	class IMP_Bullet_127x108: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_127x108";
		hit = 530;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 870;
		typicalSpeed = 970;
		airFriction = 0;
		caliber = 5;
		deflecting = 0;
		damageBarrel = 530;
		damageBarrelDestroyed = 530;
		weight = 0.05;
		impactBehaviour = 1;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 5000;
			};
			class Blood
			{
				damage = 5000;
			};
			class Shock
			{
				damage = 5000;
			};
		};
		class NoiseHit
		{
			strength = 200;
			type = "shot";
		};
	};
	
	class IMP_Bullet_20mm: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_20mm";
		hit = 530;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1050;
		airFriction = 0;
		caliber = 7;
		deflecting = 0;
		damageBarrel = 530;
		damageBarrelDestroyed = 530;
		weight = 0.05;
		impactBehaviour = 1;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 10000;
			};
			class Blood
			{
				damage = 10000;
			};
			class Shock
			{
				damage = 10000;
			};
		};
		class NoiseHit
		{
			strength = 200;
			type = "shot";
		};
	};

	// PARAGON BULLETS
	class Paragon_Bullet_300BLK: Bullet_Base
	{
		scope=2;
		casing="FxCartridge_300BLK";
		round="FxRound_300BLK";
		spawnPileType="Paragon_Ammo_300BLK";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=22;
		audibleFire=22;
		visibleFireTime=4;
		airLock=1;
		initSpeed=1000;
		typicalSpeed=1000;
		airFriction=-0.001;
		caliber=3;
		deflecting=10;
		damageBarrel=0;
		damageBarrelDestroyed=0;
		weight=0.0162;
		impactBehaviour=1;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=125;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=125;
			};
		};
	};
};