#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Tutorial_Aim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ContextualHelp_Tutorial_Aim.TBP_ContextualHelp_Tutorial_Aim_C
// 0x0010 (0x0100 - 0x00F0)
class UTBP_ContextualHelp_Tutorial_Aim_C : public UTBP_ContextualHelpBase_C
{
public:
	float                                              RetriggerTime;                                            // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FTimerHandle                                DelayTimer;                                               // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ContextualHelp_Tutorial_Aim.TBP_ContextualHelp_Tutorial_Aim_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
