#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Quest_BloodWillHaveBlood1_Part2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Quest_BloodWillHaveBlood1_Part2.TBP_Quest_BloodWillHaveBlood1_Part2_C
// 0x000C (0x0324 - 0x0318)
class ATBP_Quest_BloodWillHaveBlood1_Part2_C : public ATigerInteractiveQuestItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              ScreenSizeCullAmount;                                     // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Quest_BloodWillHaveBlood1_Part2.TBP_Quest_BloodWillHaveBlood1_Part2_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_Quest_BloodWillHaveBlood1_Part2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
