#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SpectatorPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SpectatorPawn.TBP_SpectatorPawn_C
// 0x0018 (0x0320 - 0x0308)
class ATBP_SpectatorPawn_C : public ATigerSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             Listener_Component;                                       // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                   // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SpectatorPawn.TBP_SpectatorPawn_C"));
		return ptr;
	}


	void SetAudioListenerOverride();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_SpectatorPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
