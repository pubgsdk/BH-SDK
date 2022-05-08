#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Modifier_SetScoped_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Modifier_SetScoped.TBP_Modifier_SetScoped_C
// 0x0019 (0x0041 - 0x0028)
class UTBP_Modifier_SetScoped_C : public UTigerRangedWeaponModModifier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	bool                                               bIsScoped;                                                // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UClass* /*UTigerWeaponCrosshairWidget*/      CrossHairWidget;                                          // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bAppliedWidget;                                           // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Modifier_SetScoped.TBP_Modifier_SetScoped_C"));
		return ptr;
	}


	void OnModEquipped(class UTigerEquippedModModifierValues* Modifiers);
	void OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers);
	void ExecuteUbergraph_TBP_Modifier_SetScoped(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
