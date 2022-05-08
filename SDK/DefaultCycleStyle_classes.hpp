#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DefaultCycleStyle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultCycleStyle.DefaultCycleStyle_C
// 0x0010 (0x0058 - 0x0048)
class UDefaultCycleStyle_C : public UTigerWeaponCycleStyle
{
public:
	int                                                DirectionInt;                                             // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                OutSlot;                                                  // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerPlayerController*                      PlayerController;                                         // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DefaultCycleStyle.DefaultCycleStyle_C"));
		return ptr;
	}


	ETigerWeaponSlot DetermineNextWeaponSlot(class ATigerPlayerController* InPlayerController, ETigerWeaponCycleDirection InDirection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
