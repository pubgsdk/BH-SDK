#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_EnemyHealthBarDamageOnly_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C
// 0x0030 (0x02B0 - 0x0280)
class UTBP_UI_EnemyHealthBarDamageOnly_C : public UTigerUIEnemyHealthBar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	float                                              LastDamageTime;                                           // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	class UTBP_UI_DamageNumber_C*                      CurrentDamageNumberUI;                                    // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsGroupMember;                                           // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	float                                              DamageNumberUpdateTime;                                   // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DamageNumberUpdateGraceTime;                              // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	class ATigerCharacter*                             TigerCharacterOwner;                                      // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C"));
		return ptr;
	}


	void SetTigerCharacter(class ATigerCharacter* TigerCharacter);
	void Set_Damage_Amount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool InHasExtraHealth, bool InHasShield, float InRangedDamageFalloffPercent, bool InBelowLowHealthThreshold);
	void UpdateCurrentDamageNumber();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
