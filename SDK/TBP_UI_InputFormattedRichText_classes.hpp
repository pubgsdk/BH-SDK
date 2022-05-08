#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InputFormattedRichText_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C
// 0x00E0 (0x0360 - 0x0280)
class UTBP_UI_InputFormattedRichText_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class URichTextBlock*                              Text;                                                     // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       FormatedText;                                             // 0x0290(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FText                                       TextStyle;                                                // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FName                                       ActionBindingToEmbed;                                     // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FName                                       ActionBindingGamepadOverride;                             // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bHasAdditionalKeyboardInputRequirement;                   // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	struct FKey                                        AdditionalKeyboardInputRequirements;                      // 0x02D8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bHasAdditionalGamepadInputRequirement;                    // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FKey                                        AdditionalGamepadInputRequirements;                       // 0x02F8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bHasMultipleBindings;                                     // 0x0310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bShouldUpdateRuntime;                                     // 0x0311(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0312(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               UseTextStyle;                                             // 0x0313(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Override_Image;                                           // 0x0314(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	struct FName                                       ImageToOverride;                                          // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FName                                       GamepadImageToOverride;                                   // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FText                                       StretchMode;                                              // 0x0328(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               ValidIcon;                                                // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FText                                       DefaultImageText;                                         // 0x0348(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InputFormattedRichText.TBP_UI_InputFormattedRichText_C"));
		return ptr;
	}


	void SetText(const struct FText& newText);
	void UpdateText();
	void GenerateAdditionalInput(struct FText* Target);
	void HasMultiplePossibleActionBindings(TArray<struct FInputActionKeyMapping>* Array, bool* HasMultipleBindings);
	void CreateInputList(const struct FText& Inline_Image_Name, bool HasAlreadyInsertedInput, struct FText* InputText);
	void GenerateText(TArray<struct FInputActionKeyMapping>* Array);
	bool HasGamepadOverride();
	void Destruct();
	void OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_InputFormattedRichText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
