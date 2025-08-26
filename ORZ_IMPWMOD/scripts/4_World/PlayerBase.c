modded class PlayerBase
{
    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
        // Process damage multiplyer before apply server damage
        if (source && source.IsWeapon() && IsAlive() && damageResult != null)
        {
            // Health Damage
            if (damageResult.GetDamage(dmgZone, "Health") > 0 && GetGame().ConfigIsExisting("cfgWeapons " + source.GetType() + " HealthDmgMultiply"))
            {
                float damageH = damageResult.GetDamage(dmgZone, "Health");
                float multiplierH = GetGame().ConfigGetFloat("cfgWeapons " + source.GetType() + " HealthDmgMultiply");
                float newDamageH = damageH * multiplierH;
                
                // Se o dano que sera aplicado apos o calculo for matar o jogador entao seta o hp para 1 e nao mata e deixa o server processar od ano dele depois
                if (GetHealth("","Health") - newDamageH <= 0)
                    SetHealth("","Health", 1);
                else
                    AddHealth("", "Health", -newDamageH);

            }

            // Shock Damage
            if (damageResult.GetDamage(dmgZone, "Shock") > 0 && GetGame().ConfigIsExisting("cfgWeapons " + source.GetType() + " ShockDmgMultiply"))
            {
                float damageS = damageResult.GetDamage(dmgZone, "Shock");
                float multiplierS = GetGame().ConfigGetFloat("cfgWeapons " + source.GetType() + " ShockDmgMultiply");
                float newDamageS = damageS * multiplierS;
                AddHealth("", "Shock", -newDamageS);
            }

            // Blood Damage
            if (damageResult.GetDamage(dmgZone, "Blood") > 0 && GetGame().ConfigIsExisting("cfgWeapons " + source.GetType() + " BloodDmgMultiply"))
            {
                float damageB = damageResult.GetDamage(dmgZone, "Blood");
                float multiplierB = GetGame().ConfigGetFloat("cfgWeapons " + source.GetType() + " BloodDmgMultiply");
                float newDamageB = damageB * multiplierB;

                // Se o dano que sera aplicado apos o calculo for matar o jogador entao seta o hp para 1 e nao mata e deixa o server processar od ano dele depois
                if (GetHealth("", "Blood") - newDamageB <= 0)
                    SetHealth("", "Blood", 1);
                else
                    AddHealth("", "Blood", -newDamageB);
            }
        }

        return super.EEOnDamageCalculated(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
    }
}