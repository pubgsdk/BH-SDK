#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DirectionalStyle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DirectionalStyle.DirectionalStyle_C
// 0x0001 (0x0049 - 0x0048)
class UDirectionalStyle_C : public UTigerWeaponCycleStyle
{
public:
	ETigerWeaponSlot                                   OutWeaponSlot;                                            // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DirectionalStyle.DirectionalStyle_C"));
		return ptr;
	}


	ETigerWeaponSlot DetermineNextWeaponSlot(class ATigerPlayerController* InPlayerController, ETigerWeaponCycleDirection InDirection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
