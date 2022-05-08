#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MatchGameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MatchGameState.TBP_MatchGameState_C
// 0x0010 (0x0628 - 0x0618)
class ATBP_MatchGameState_C : public ATigerMatchGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MatchGameState.TBP_MatchGameState_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ScreenTransitionAudio(const struct FTigerPreMatchStateInfo& PreMatchState);
	void ExecuteUbergraph_TBP_MatchGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
