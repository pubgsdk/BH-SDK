#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RejuvenatingVoice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C
// 0x000C (0x00EC - 0x00E0)
class UTBP_RejuvenatingVoice_C : public UTigerDisciplineRejuvenatingVoice
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              HealRadius;                                               // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C"));
		return ptr;
	}


	void OnPlayerEnter(class ATigerPlayer* InPlayer);
	void OnPlayerExit(class ATigerPlayer* InPlayer);
	void OnHealStart();
	void OnHealStop();
	void OnHealPulse(bool bInOnProjection);
	void ExecuteUbergraph_TBP_RejuvenatingVoice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
