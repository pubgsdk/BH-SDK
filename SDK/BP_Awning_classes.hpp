#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Awning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Awning.BP_Awning_C
// 0x0018 (0x0298 - 0x0280)
class ABP_Awning_C : public ATigerActivatedObject
{
public:
	int                                                AwningType;                                               // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EAwning_Enum_01>                       Awning_List;                                              // 0x0284(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	struct FCoreUObject_FColor                         Generic_Color;                                            // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	class UBP_AwningDataInterface_C*                   AwningDataCDO;                                            // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Awning.BP_Awning_C"));
		return ptr;
	}


	void SetCustomPrimitiveData();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
