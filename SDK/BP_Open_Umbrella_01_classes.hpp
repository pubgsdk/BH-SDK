#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Open_Umbrella_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Open_Umbrella_01.BP_Open_Umbrella_01_C
// 0x0018 (0x0298 - 0x0280)
class ABP_Open_Umbrella_01_C : public ATigerActivatedObject
{
public:
	int                                                Color;                                                    // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	TArray<class UMaterialInstance*>                   Materials;                                                // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Open_Umbrella_01.BP_Open_Umbrella_01_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
