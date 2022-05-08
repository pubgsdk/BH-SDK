#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PlayerVFXComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C
// 0x0018 (0x00C8 - 0x00B0)
class UTBP_PlayerVFXComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class ATBP_Player_C*                               OwnerPlayer;                                              // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    HeavyAttackPS;                                            // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C"));
		return ptr;
	}


	void OnCharacterCustomizationChanged();
	void OnHeavyAttackChargeEnd();
	void OnHeavyAttackChargeBegin();
	void OnAppearance_Changed(ETigerPlayerApperanceChangeReason InReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_PlayerVFXComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
