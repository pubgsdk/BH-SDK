#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_HolyincenseShield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Buff_HolyincenseShield.TBP_Buff_HolyincenseShield_C
// 0x0008 (0x0268 - 0x0260)
class UTBP_Buff_HolyincenseShield_C : public UTigerBuffUnholyStimulant
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Buff_HolyincenseShield.TBP_Buff_HolyincenseShield_C"));
		return ptr;
	}


	void SetShaderParameters(class ATigerCharacter* InOwner);
	void OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnRefreshed(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void ExecuteUbergraph_TBP_Buff_HolyincenseShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
