#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_DamageBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_DamageBase.TBP_UI_DamageBase_C
// 0x0011 (0x0291 - 0x0280)
class UTBP_UI_DamageBase_C : public UTigerWidget
{
public:
	struct FVector                                     EnemyLocation;                                            // 0x0280(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CanHandleAngle;                                           // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsVisible;                                               // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_DamageBase.TBP_UI_DamageBase_C"));
		return ptr;
	}


	void HasExtraHealth(class ATigerPlayer* Player, bool* HasExtraHealth);
	void GetWidgetColor(class ATBP_Player_C* Player, struct FLinearColor* Color);
	void CanHandleDirection(const struct FVector& DamageLocation, bool* IsHandled);
	void OnDamage(const struct FVector& DamageLocation, float DamageAmount, float NewHealthAmount, bool* IsHandled);
	void IsAlive(bool* IsAlive);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
