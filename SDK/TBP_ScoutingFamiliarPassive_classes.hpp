#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ScoutingFamiliarPassive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C
// 0x0019 (0x0109 - 0x00F0)
class UTBP_ScoutingFamiliarPassive_C : public UTigerFamiliarScoutPassive
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ATigerFamiliarScout*                         Scout;                                                    // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Replicated_Passive_Activated;                             // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              TimeStart;                                                // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bParticleVisibility;                                      // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C"));
		return ptr;
	}


	void OnRep_Replicated_Passive_Activated();
	class UParticleSystemComponent* CreateOrbitingParticles();
	void ScoutSpawned(class ATigerFamiliarScout* SpawnedScout);
	void Scout_Destroyed(class AActor* DestroyedActor);
	void Begin_Fade_Out();
	void Begin_Fade_In();
	void EvaluateVisibility();
	void ExecuteUbergraph_TBP_ScoutingFamiliarPassive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
