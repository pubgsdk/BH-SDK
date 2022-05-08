#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Impervious_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Perk_Impervious.TBP_Perk_Impervious_C
// 0x0008 (0x00C8 - 0x00C0)
class UTBP_Perk_Impervious_C : public UTigerPassiveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Perk_Impervious.TBP_Perk_Impervious_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnInsideHolyIncenseChanged(bool bIsInsideHolyIncense);
	void ExecuteUbergraph_TBP_Perk_Impervious(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
