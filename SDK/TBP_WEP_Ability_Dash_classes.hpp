#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_WEP_Ability_Dash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C
// 0x0008 (0x00D0 - 0x00C8)
class UTBP_WEP_Ability_Dash_C : public UTigerWeaponAbilityDash
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C"));
		return ptr;
	}


	void OnCharacterHit(class ATigerCharacter* AHitTigerCharacter);
	void OnTerrainHitResult(class AActor* InTerrainActor, class UPrimitiveComponent* InHitComponent, const struct FHitResult& InHitResult);
	void ExecuteUbergraph_TBP_WEP_Ability_Dash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
