#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TutorialSubtitles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_TutorialSubtitles.TBP_TutorialSubtitles_C
// 0x0030 (0x0290 - 0x0260)
class UTBP_TutorialSubtitles_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            RotateAnimation;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Text;                                                     // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       TextToShow;                                               // 0x0278(0x0018) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_TutorialSubtitles.TBP_TutorialSubtitles_C"));
		return ptr;
	}


	void SetSubText(const struct FText& SubText);
	struct FText GetText_2();
	struct FText GetText_1();
	struct FLinearColor Get_WorldMarker_ColorAndOpacity_1();
	void OnInitialized();
	void ExecuteUbergraph_TBP_TutorialSubtitles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
