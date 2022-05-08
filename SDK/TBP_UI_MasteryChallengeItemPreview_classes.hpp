#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MasteryChallengeItemPreview_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_MasteryChallengeItemPreview.TBP_UI_MasteryChallengeItemPreview_C
// 0x0010 (0x0290 - 0x0280)
class UTBP_UI_MasteryChallengeItemPreview_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_BattlepassReward_C*                  TBP_UI_BattlepassReward;                                  // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_MasteryChallengeItemPreview.TBP_UI_MasteryChallengeItemPreview_C"));
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_MasteryChallengeItemPreview(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
