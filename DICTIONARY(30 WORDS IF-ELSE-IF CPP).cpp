#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "Welcome to your inventory" << endl;
    cout << "Here is a list of the available items." << endl;
    cout << "1. INFINITY EDGE 2. SPIRIT VISAGE 3. TRINITY FORCE 4. ZHONYA’S HOURGLASS 5.YOUMUU’S GHOSTBLADE" << endl;
    cout << "6. WARMOG’S ARMOR 7. VOID STAFF 8. THE COLLECTOR 9.BLACK CLEAVER 10. BLADE OF THE RUINED KING" << endl;
    cout << "11. BLACKFIRE TORCH 12. BLOODTHIRSTER 13. DEAD MAN’S PLATE 14. DEATH’S DANCE 15. EDGE OF NIGHT" << endl;
    cout << "16. FROZEN HEART 17. GUARDIAN ANGEL 18. GUINSOO’S RAGEBLADE 19. HEARTSTEEL 20. HEXTECH GUNBLADE" << endl;
    cout << "21. STERAK’S GAGE 22. STATIKK SHIV 23. MORTAL REMINDER 24. NAVORI FLICKERBLADE 25. PHANTOM DANCER" << endl;
    cout << "26. RABADON’S DEATHCAP 27. RANDUIN’S OMEN 28. RAPID FIRECANNON 29. REDEMPTION 30. THORNMAIL" << endl;

    string search;
    cout<< "Search An Item: ";
    cin>> search;

    if (search == "INFINITY_EDGE"){
        cout<<"Increases your critical strike damage from 175% AD to 215% AD .";
    }
    else if (search == "SPIRIT_VISAGE"){
        cout<<"Increases all healing and shielding received as well as health regeneration by 25%.";
    }
    else if (search == "TRINITY_FORCE"){
        cout<< "After using an ability, your next attack is enhanced with additional 200% base AD physical damage on-hit (1.5 second cooldown; begins after using the empowered attack).";
    }
    else if (search == "ZHONYA'S_HOURGLASS"){
        cout<< "Put yourself in stasis for 2.5 seconds, rendering yourself untargetable and invulnerable for the duration but also unable to move, declare basic attacks, cast abilities, use summoner spells, or activate items (120 second cooldown).";
    }
    else if (search == "YOUMUU'S_GHOSTBLADE"){
        cout << "You gain bonus movement speed while out-of-combat, also, you gain more bonus movement speed upon activation." << endl;
    } 
    else if (search == "WARMOG'S_ARMOR"){
        cout << "If you have at least 2000 bonus health, regenerate 1.5% max health per 0.5 seconds if damage has not been taken in the last 8 seconds (4 seconds for non-champions)." << endl;
    } 
    else if (search == "VOID STAFF"){
        cout << "gain 40% magic penetration." << endl;
    } 
    else if (search == "THE_COLLECTOR"){
        cout << "if you deal post-mitigation damage that would leave an enemy below 5% of their maximum health, you will execute them." << endl;
    } 
    else if (search == "BLACK_CLEAVER"){
        cout << "Dealing physical damage to an enemy applies a stack of Carve for 6 seconds, stacking up to 5 times. Each stack inflicts 6% armor reduction, up to 30% at 5 stacks." << endl;
    } 
    else if (search == "BLADE_OF_THE RUINED_KING"){
        cout << "Your attacks apply an additional damage base on enemy’s current health as physical damage on-hit. Also, your first basic attack against an enemy slows them by 30% for 1 second (15 second cooldown)." << endl;
    } 
    else if (search == "BLACKFIRE_TORCH"){
        cout << "Dealing ability damage burns enemies, causing them to take magic damage every 0.5 seconds over 3 seconds." << endl;
    } 
    else if (search == "BLOODTHIRSTER"){
        cout << "Heal upon damaging and enemy using attack damage and convert the healing received from life steal in excess of maximum health into a shield for up to 165-315 (depending on level), which slowly decays after not dealing or taking damage for 25 seconds." << endl;
    } 
    else if (search == "DEAD_MAN'S_PLATE"){
        cout << "While moving, generates 7 stacks of Momentum every 0.25 seconds, granting up to 20 bonus movement speed at 100 stacks after 3.75 seconds of moving. Basic attacks consume all stacks to deal bonus physical damage on-hit (depending on Momentum)." << endl;
    } 
    else if (search == "DEATH'S_DANCE"){
        cout << "Reduces all post-mitigation physical and magic damage received and instead stores the damage to successively take it as true damage over 3 seconds, dealing a third of the stored damage each second." << endl;
    } 
    else if (search == "EDGE_OF_NIGHT"){
        cout << "Grants a spell shield that blocks the next hostile ability (40 second cooldown; restarts upon taking damage from enemies)." << endl;
    } 
    else if (search == "FROZEN_HEART"){
        cout << "Cripples the attack speed of enemy champions within 700 units by 20%." << endl;
    } 
    
    else if (search == "GUARDIAN_ANGEL"){
        cout << "Upon dying, it revives you and restores 50% of your base health and 100% of your maximum mana after 4 seconds of stasis. (300 second cooldown)." << endl;
    } 
    else if (search == "GUINSOO'S_RAGEBLADE"){
        cout << "Attacks deal 30 bonus magic damage on-hit. Basic attacks grant 8% attack speed, stacking up to 4 times for a maximum of 32% attack speed. While fully stacked, every third attack applies your on-hit effects twice." << endl;
    } 
    else if (search == "HEARTSTEEL"){
        cout << "Charges up a powerful attack against a champion over 3 seconds while being within 700 units from them. The charged attack deals bonus physical damage on-hit, and grants you percentage of the damage as permanent maximum health (30 second cooldown; per target). Gain 0-30% increased size (depending on maximum health)." << endl;
    } 
    else if (search == "HEXTECH_GUNBLADE"){
        cout << ": Shocks the target enemy champion, dealing magic damage and slowing them by 40% for 2 seconds (30 second cooldown)." << endl;
    } 
    else if (search == "STERAK'S_GAGE"){
        cout << "If you would take damage that would reduce you below 30% of your maximum health, you first gain a shield that absorbs damage equal to 60% of bonus health which decays over 4.5 seconds, as well as 10% increased size for 8 seconds (90 second cooldown)." << endl;
    } 
    else if (search == "STATIKK_SHIVV"){
        cout << "Your next 3 basic attacks on-hit within 8 seconds are empowered to deal bonus magic damage, this bounces to the closest target within 500 units, repeating from the new target to strike up to 5 targets (25−10 second cooldown; begins after the first attack)." << endl;
    } 
    else if (search == "MORTAL_REMINDER"){
        cout << "Dealing physical damage to enemy champions inflicts them with 40% Grievous Wounds for 3 seconds, which reduces their health regeneration." << endl;
    }
     else if (search == "NAVORI_FLICKERBLADE"){
        cout  << "Basic attacks on-attack reduce the remaining cooldowns of your basic abilities by 15%." <<endl;
    } 
    else if (search == "PHANTOM _DANCER"){
        cout << "you become permanently ghosted, which means you gain the fountain's bonus movement speed permanently." << endl;
    }
    else if (search == "RABADON'S _DEATHCAP"){
        cout << "It increases your Ability Power by 30%." << endl;
    }    
    else if (search == "RANDUIN'S_OMEN"){
        cout <<"Critical strikes deal 30% less damage to you" << endl;
    }
    else if (search == "RAPID_FIRECANNON"){
        cout << "Moving and basic attacking generates energize stacks, up to 100. When fully Energized, your next basic attack deals 40 bonus magic damage on-hit. Energized attacks gain 35% bonus range.";
    }
    else if (search == "REDEMPTION"){
        cout << "Call upon a beam of light to strike upon the target location after 2.5 seconds, granting sight of the area for the duration. Allies within the area are healed, while enemies within the area takes true damage.";
    } 
    else if (search == "THORNMAIL"){
        cout << "When struck by a enemy basic attack on-hit, return magic damage to the attacker and inflict them with 40% Grievous Wounds for 3 seconds.";    
    }
    else  {
        cout << "Item not found";
    }
    return 0;
}
