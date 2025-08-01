/*
* This file is part of the Pandaria 5.4.8 Project. See THANKS file for Copyright information
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef BATTLE_PET_MGR_H
#define BATTLE_PET_MGR_H

#include "Common.h"
#include "PetBattle.h"

// Forward declarations for compatibility
class Player;
class BattlePet;
class BattlePetMgr;

// Compatibility typedefs and enums from old system
typedef std::set<BattlePet*> BattlePetSet;

enum
{
    BATTLE_PET_MAX_JOURNAL_SPECIES = 3,
    BATTLE_PET_MAX_JOURNAL_PETS    = 1000,
    BATTLE_PET_MAX_LOADOUT_SLOTS   = 3,
    BATTLE_PET_CAGE_ITEM_ID        = 82800,
};

enum BattlePetLoadoutSlots
{
    BATTLE_PET_LOADOUT_SLOT_1                   = 0,
    BATTLE_PET_LOADOUT_SLOT_2                   = 1,
    BATTLE_PET_LOADOUT_SLOT_3                   = 2,
    BATTLE_PET_LOADOUT_SLOT_NONE
};

enum BattlePetLoadoutFlags
{
    BATTLE_PET_LOADOUT_SLOT_FLAG_NONE           = 0x00,
    BATTLE_PET_LOADOUT_SLOT_FLAG_SLOT_1         = 0x01,
    BATTLE_PET_LOADOUT_SLOT_FLAG_SLOT_2         = 0x02,
    BATTLE_PET_LOADOUT_SLOT_FLAG_SLOT_3         = 0x04,
};

// Compatibility wrapper for BattlePetMgr - minimal implementation to satisfy compilation
class BattlePetMgr
{
public:
    BattlePetMgr() = default;
    ~BattlePetMgr() = default;
    
    // Add minimal interface methods as needed by the existing codebase
    static BattlePetMgr* instance();
    
    // Stub methods - these will need to be implemented or mapped to new Draenor system
    void LoadFromDB() { }
    void Update(uint32 diff) { }
    void UnSummonCurrentBattlePet(bool p_Immediately = true) { }
    uint32 GetBattlePetCount(uint32 p_SpeciesId) { return 0; }
    
private:
    static BattlePetMgr* _instance;
};

#endif