#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TargetProgress_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_TargetProgress.TBP_UI_TargetProgress_C
// 0x0038 (0x02B8 - 0x0280)
class UTBP_UI_TargetProgress_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_Progress_Bar_Small_C*                ProgressBar;                                              // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Values;                                                   // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   VariableName;                                             // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       TextFormat;                                               // 0x02A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_TargetProgress.TBP_UI_TargetProgress_C"));
		return ptr;
	}


	void UpdateProgressWithChallengeData(class UTigerChallenge* InChallenge);
	void InitialiseWithChallengeData(class UTigerChallenge* InChallenge);
	void UpdateProgress(int InProgress, int InTarget);
	void Initialise(const struct FText& InVariableName, int InProgress, int InTarget);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_TargetProgress(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
