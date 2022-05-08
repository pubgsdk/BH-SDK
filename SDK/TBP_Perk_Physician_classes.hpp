#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Physician_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Perk_Physician.TBP_Perk_Physician_C
// 0x0008 (0x00C8 - 0x00C0)
class UTBP_Perk_Physician_C : public UTigerPassiveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Perk_Physician.TBP_Perk_Physician_C"));
		return ptr;
	}


	void OnFeedingDoneEvent(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn);
	void OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority);
	void ExecuteUbergraph_TBP_Perk_Physician(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
