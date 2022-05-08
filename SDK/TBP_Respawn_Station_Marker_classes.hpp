#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Respawn_Station_Marker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C
// 0x0001 (0x0249 - 0x0248)
class ATBP_Respawn_Station_Marker_C : public ATigerWorldMarker
{
public:
	bool                                               HasScheduledCreation;                                     // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C"));
		return ptr;
	}


	void CreateMapMarkerAtMatchStart(class ATigerMatchGameState* InMatchGameState);
	void Handle_Game_State_Set(class ATigerGameState* InGameState);
	void OnMatchStateChanged(ETigerMatchState OldState, ETigerMatchState NewState);
	bool TryToScheduleCreation();
	bool CanBeCreated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
