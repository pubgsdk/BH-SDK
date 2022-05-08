#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_VentrueOne_Silenced_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Buff_VentrueOne_Silenced.TBP_Buff_VentrueOne_Silenced_C
// 0x0014 (0x0274 - 0x0260)
class UTBP_Buff_VentrueOne_Silenced_C : public UTigerBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     SlowColor;                                                // 0x0268(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Buff_VentrueOne_Silenced.TBP_Buff_VentrueOne_Silenced_C"));
		return ptr;
	}


	void SetShaderParameters(class ATigerCharacter* InOwner);
	void OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnRefreshed(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void ExecuteUbergraph_TBP_Buff_VentrueOne_Silenced(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
