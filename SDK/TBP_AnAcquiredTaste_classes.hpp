#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AnAcquiredTaste_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C
// 0x000C (0x00CC - 0x00C0)
class UTBP_AnAcquiredTaste_C : public UTigerPassiveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	int                                                Stacks;                                                   // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C"));
		return ptr;
	}


	void OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority);
	void OnPlayerEvent(ETigerPlayerEvent Event, class ATigerCharacter* EventTiedCharacter);
	void ExecuteUbergraph_TBP_AnAcquiredTaste(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
