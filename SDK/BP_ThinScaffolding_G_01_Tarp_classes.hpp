#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ThinScaffolding_G_01_Tarp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ThinScaffolding_G_01_Tarp.BP_ThinScaffolding_G_01_Tarp_C
// 0x0020 (0x02A0 - 0x0280)
class ABP_ThinScaffolding_G_01_Tarp_C : public ATigerActivatedObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               Use_Custom_Color;                                         // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	int                                                Color_Picker;                                             // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                Custom_Color;                                             // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ThinScaffolding_G_01_Tarp.BP_ThinScaffolding_G_01_Tarp_C"));
		return ptr;
	}


	void SetCustomPrimitiveData();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ThinScaffolding_G_01_Tarp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
