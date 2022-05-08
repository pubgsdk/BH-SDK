#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_Shield50_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Buff_Shield50.TBP_Buff_Shield50_C
// 0x0008 (0x0280 - 0x0278)
class UTBP_Buff_Shield50_C : public UTigerBuffShieldAdrenalineRush
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Buff_Shield50.TBP_Buff_Shield50_C"));
		return ptr;
	}


	void OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnRefreshed(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void ExecuteUbergraph_TBP_Buff_Shield50(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
