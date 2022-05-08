#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AnimMetaData_StartIsActive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AnimMetaData_StartIsActive.TBP_AnimMetaData_StartIsActive_C
// 0x0002 (0x002A - 0x0028)
class UTBP_AnimMetaData_StartIsActive_C : public UAnimMetaData
{
public:
	TEnumAsByte<ENUM_WeaponIKOverride>                 LeftHandIK_Enum;                                          // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ENUM_WeaponIKOverride>                 RightHandIK_Enum;                                         // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AnimMetaData_StartIsActive.TBP_AnimMetaData_StartIsActive_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
